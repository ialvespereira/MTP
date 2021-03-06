#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <math.h>
struct Pixel{
   unsigned char B;
   unsigned char G;
   unsigned char R;

};

int main() {
   struct Pixel pixel;
   struct Pixel pixel2;
   int WPX,HPX,BPP,NCP,NIC,PAL,lap,i;
   unsigned char byte;
   unsigned short word;
   unsigned int dword,offset;
   FILE * imagem, * imagem2;
   imagem=fopen("figura.bmp","r");
    //2 bytes	0-1	Se for Windows, 'B' e 'M'
    fread(&byte,sizeof(byte),1,imagem);
    printf("%c",byte);
    fread(&byte,sizeof(byte),1,imagem);
    printf("%c",byte);
    //dword	2-5	Tamanho do arquivo (bytes)
    fread(&dword,sizeof(dword),1,imagem);
    printf("Tamanho do arquivo (bytes): %u\n",dword);
    //word	6-7	Informa��o reservada
    //word	8-9	Informa��o reservada
    fread(&dword,sizeof(dword),1,imagem);
    printf("informacao reservada: %08X\n",dword);
    //dword	10-13	Offset, onde dados da imagem come�am
    fread(&dword,sizeof(dword),1,imagem);
    printf("offset: %u\n",dword);
    offset=dword;
    //dword	14-17	Tamanho do cabe�alho, a partir daqui
    fread(&dword,sizeof(dword),1,imagem);
    printf("tamanho do camecalho: %u\n",dword);
    //dword	18-21	Largura da imagem (pixels), WPX
     fread(&dword,sizeof(dword),1,imagem);
    printf("largura da imagem(pixes): %u\n",dword);
    WPX=dword;
    //dword	22-25	Altura da imagem (pixels), HPX
    fread(&dword,sizeof(dword),1,imagem);
    printf("altura da imagem(pixes): %u\n",dword);
    HPX=dword;
    //word	26-27	Qtde de planos de cores
    fread(&word,sizeof(word),1,imagem);
    printf("otde planos de cores: %u\n",word);
    //word	28-29	Bits por pixel, BPP
    fread(&word,sizeof(word),1,imagem);
    BPP=word;
    printf("bits por pixel: %u\n",BPP);
    //dword	30-33	M�todo de compress�o
    fread(&dword,sizeof(dword),1,imagem);
    printf("Metodos de compressao: %u\n",dword);
    //dword	34-37	Tamanho da imagem
    fread(&dword,sizeof(dword),1,imagem);
    printf("tamanho da imagem (bytes) : %u\n",dword);
    //dword	38-41	Resolu��o horizontal
    fread(&dword,sizeof(dword),1,imagem);
    printf("Resolucao horizontal: %u\n",dword);
    //dword	42-45	Resolu��o vertical
    fread(&dword,sizeof(dword),1,imagem);
    printf("Resolucao vertical: %u\n",dword);
    //dword	46-49	N�mero de cores na paleta, NCP
    fread(&dword,sizeof(dword),1,imagem);
    NCP= (dword==0) ? 1 << BPP : dword;
   printf("numero de cores da paleta: %u\n",NCP);
    //dword	50-53	N�mero de cores importantes, NIC
    fread(&dword,sizeof(dword),1,imagem);
    NIC= (dword==0) ? NCP : dword;
   printf("numero de cores importantes: %u\n",NIC);
    //Tamanho da linha da array de pixels (bytes)
    PAL = floor((BPP*WPX + 31.)/32.)*4;
    printf("Tamanho da linha da array de pixels (bytes): %u\n",PAL);

    imagem2= fopen("novosapo.bmp","w");
    rewind (imagem);
    for(i=0;i<offset;i++){
        fread(&byte,sizeof(byte),1,imagem);
        fwrite(&byte,sizeof(byte),1,imagem2);
    }
    //leitura dos pixels
    printf("\nPixel===============\n");
    lap = 0;
   while(!feof(imagem)){

    //leia a informacao do pixel (canais R, G e B)
    if(fread(&byte,sizeof(byte),1,imagem))
        pixel2.R=pixel.G;
        pixel2.G=pixel.R;
        pixel2.B=pixel.B;
        fwrite(&pixel2,sizeof(pixel2),1,imagem2);
   };
    lap = lap + 3;
    if((lap + 3) > PAL){
       fseek(imagem,(PAL - lap),SEEK_CUR);
	for(i=0;i<PAL-lap;i++)
        fwrite(&byte,sizeof(byte),1,imagem2);
	lap = 0;
   }

fclose(imagem2);
fclose(imagem);

return 0;
}
