#include <cmath>
#include <cctype>

#pragma once

namespace Form1h {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Form1
	/// </summary>
	public ref class Form1 : public System::Windows::Forms::Form
	{
	public:
		Form1(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~Form1()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^  lblDisplay;
	protected: 
	private: System::Windows::Forms::Button^  btn7;
	private: System::Windows::Forms::Button^  btn8;
	private: System::Windows::Forms::Button^  btn9;
	private: System::Windows::Forms::Button^  btnAdd;
	private: System::Windows::Forms::Button^  btnClear;
	private: System::Windows::Forms::Button^  btnFat;
	private: System::Windows::Forms::Button^  btnPot;
	private: System::Windows::Forms::Button^  btnRaiz;





	private: System::Windows::Forms::Button^  btnSub;
	private: System::Windows::Forms::Button^  btnMult;
	private: System::Windows::Forms::Button^  btnDiv;



	private: System::Windows::Forms::Button^  btn6;
	private: System::Windows::Forms::Button^  btn3;
	private: System::Windows::Forms::Button^  btnPosneg;
	private: System::Windows::Forms::Button^  btn5;
	private: System::Windows::Forms::Button^  btn2;
	private: System::Windows::Forms::Button^  btnVirgula;
	private: System::Windows::Forms::Button^  btn4;
	private: System::Windows::Forms::Button^  btn1;
	private: System::Windows::Forms::Button^  btn0;
	private: System::Windows::Forms::Button^  btnResultado;
	private: System::Windows::Forms::TextBox^  textBox1;


	protected: 

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^  resources = (gcnew System::ComponentModel::ComponentResourceManager(Form1::typeid));
			this->lblDisplay = (gcnew System::Windows::Forms::Label());
			this->btn7 = (gcnew System::Windows::Forms::Button());
			this->btn8 = (gcnew System::Windows::Forms::Button());
			this->btn9 = (gcnew System::Windows::Forms::Button());
			this->btnAdd = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->btnFat = (gcnew System::Windows::Forms::Button());
			this->btnPot = (gcnew System::Windows::Forms::Button());
			this->btnRaiz = (gcnew System::Windows::Forms::Button());
			this->btnSub = (gcnew System::Windows::Forms::Button());
			this->btnMult = (gcnew System::Windows::Forms::Button());
			this->btnDiv = (gcnew System::Windows::Forms::Button());
			this->btn6 = (gcnew System::Windows::Forms::Button());
			this->btn3 = (gcnew System::Windows::Forms::Button());
			this->btnPosneg = (gcnew System::Windows::Forms::Button());
			this->btn5 = (gcnew System::Windows::Forms::Button());
			this->btn2 = (gcnew System::Windows::Forms::Button());
			this->btnVirgula = (gcnew System::Windows::Forms::Button());
			this->btn4 = (gcnew System::Windows::Forms::Button());
			this->btn1 = (gcnew System::Windows::Forms::Button());
			this->btn0 = (gcnew System::Windows::Forms::Button());
			this->btnResultado = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// lblDisplay
			// 
			this->lblDisplay->BackColor = System::Drawing::SystemColors::ButtonHighlight;
			this->lblDisplay->BorderStyle = System::Windows::Forms::BorderStyle::Fixed3D;
			this->lblDisplay->Font = (gcnew System::Drawing::Font(L"Verdana", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblDisplay->Location = System::Drawing::Point(12, 9);
			this->lblDisplay->Name = L"lblDisplay";
			this->lblDisplay->Size = System::Drawing::Size(445, 75);
			this->lblDisplay->TabIndex = 0;
			this->lblDisplay->Text = L"0";
			this->lblDisplay->TextAlign = System::Drawing::ContentAlignment::MiddleRight;
			// 
			// btn7
			// 
			this->btn7->Location = System::Drawing::Point(13, 107);
			this->btn7->Name = L"btn7";
			this->btn7->Size = System::Drawing::Size(34, 32);
			this->btn7->TabIndex = 1;
			this->btn7->Text = L"7";
			this->btn7->UseVisualStyleBackColor = true;
			this->btn7->Click += gcnew System::EventHandler(this, &Form1::btn7_Click);
			// 
			// btn8
			// 
			this->btn8->Location = System::Drawing::Point(53, 107);
			this->btn8->Name = L"btn8";
			this->btn8->Size = System::Drawing::Size(34, 32);
			this->btn8->TabIndex = 1;
			this->btn8->Text = L"8";
			this->btn8->UseVisualStyleBackColor = true;
			this->btn8->Click += gcnew System::EventHandler(this, &Form1::btn8_Click);
			// 
			// btn9
			// 
			this->btn9->Location = System::Drawing::Point(93, 107);
			this->btn9->Name = L"btn9";
			this->btn9->Size = System::Drawing::Size(34, 32);
			this->btn9->TabIndex = 1;
			this->btn9->Text = L"9";
			this->btn9->UseVisualStyleBackColor = true;
			this->btn9->Click += gcnew System::EventHandler(this, &Form1::btn9_Click);
			// 
			// btnAdd
			// 
			this->btnAdd->Location = System::Drawing::Point(133, 107);
			this->btnAdd->Name = L"btnAdd";
			this->btnAdd->Size = System::Drawing::Size(34, 32);
			this->btnAdd->TabIndex = 1;
			this->btnAdd->Text = L"+";
			this->btnAdd->UseVisualStyleBackColor = true;
			this->btnAdd->Click += gcnew System::EventHandler(this, &Form1::btnAdd_Click);
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(173, 107);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(40, 32);
			this->btnClear->TabIndex = 1;
			this->btnClear->Text = L"CE";
			this->btnClear->UseVisualStyleBackColor = true;
			this->btnClear->Click += gcnew System::EventHandler(this, &Form1::btnClear_Click);
			// 
			// btnFat
			// 
			this->btnFat->Location = System::Drawing::Point(173, 145);
			this->btnFat->Name = L"btnFat";
			this->btnFat->Size = System::Drawing::Size(40, 32);
			this->btnFat->TabIndex = 1;
			this->btnFat->Text = L"n!";
			this->btnFat->UseVisualStyleBackColor = true;
			this->btnFat->Click += gcnew System::EventHandler(this, &Form1::btnFat_Click);
			// 
			// btnPot
			// 
			this->btnPot->Location = System::Drawing::Point(173, 183);
			this->btnPot->Name = L"btnPot";
			this->btnPot->Size = System::Drawing::Size(40, 32);
			this->btnPot->TabIndex = 1;
			this->btnPot->Text = L"xʸ";
			this->btnPot->UseVisualStyleBackColor = true;
			this->btnPot->Click += gcnew System::EventHandler(this, &Form1::btnPot_Click);
			// 
			// btnRaiz
			// 
			this->btnRaiz->Location = System::Drawing::Point(173, 218);
			this->btnRaiz->Name = L"btnRaiz";
			this->btnRaiz->Size = System::Drawing::Size(40, 32);
			this->btnRaiz->TabIndex = 1;
			this->btnRaiz->Text = L"X^½";
			this->btnRaiz->UseVisualStyleBackColor = true;
			this->btnRaiz->Click += gcnew System::EventHandler(this, &Form1::btnRaiz_Click);
			// 
			// btnSub
			// 
			this->btnSub->Location = System::Drawing::Point(133, 145);
			this->btnSub->Name = L"btnSub";
			this->btnSub->Size = System::Drawing::Size(34, 32);
			this->btnSub->TabIndex = 1;
			this->btnSub->Text = L"-";
			this->btnSub->UseVisualStyleBackColor = true;
			this->btnSub->Click += gcnew System::EventHandler(this, &Form1::btnSub_Click);
			// 
			// btnMult
			// 
			this->btnMult->Location = System::Drawing::Point(133, 183);
			this->btnMult->Name = L"btnMult";
			this->btnMult->Size = System::Drawing::Size(34, 32);
			this->btnMult->TabIndex = 1;
			this->btnMult->Text = L"×";
			this->btnMult->UseVisualStyleBackColor = true;
			this->btnMult->Click += gcnew System::EventHandler(this, &Form1::btnMult_Click);
			// 
			// btnDiv
			// 
			this->btnDiv->Location = System::Drawing::Point(133, 218);
			this->btnDiv->Name = L"btnDiv";
			this->btnDiv->Size = System::Drawing::Size(34, 32);
			this->btnDiv->TabIndex = 1;
			this->btnDiv->Text = L"÷";
			this->btnDiv->UseVisualStyleBackColor = true;
			this->btnDiv->Click += gcnew System::EventHandler(this, &Form1::btnDiv_Click);
			// 
			// btn6
			// 
			this->btn6->Location = System::Drawing::Point(93, 145);
			this->btn6->Name = L"btn6";
			this->btn6->Size = System::Drawing::Size(34, 32);
			this->btn6->TabIndex = 1;
			this->btn6->Text = L"6";
			this->btn6->UseVisualStyleBackColor = true;
			this->btn6->Click += gcnew System::EventHandler(this, &Form1::btn6_Click);
			// 
			// btn3
			// 
			this->btn3->Location = System::Drawing::Point(93, 183);
			this->btn3->Name = L"btn3";
			this->btn3->Size = System::Drawing::Size(34, 32);
			this->btn3->TabIndex = 1;
			this->btn3->Text = L"3";
			this->btn3->UseVisualStyleBackColor = true;
			this->btn3->Click += gcnew System::EventHandler(this, &Form1::btn3_Click);
			// 
			// btnPosneg
			// 
			this->btnPosneg->Location = System::Drawing::Point(93, 218);
			this->btnPosneg->Name = L"btnPosneg";
			this->btnPosneg->Size = System::Drawing::Size(34, 32);
			this->btnPosneg->TabIndex = 1;
			this->btnPosneg->Text = L"±";
			this->btnPosneg->UseVisualStyleBackColor = true;
			this->btnPosneg->Click += gcnew System::EventHandler(this, &Form1::btnPosneg_Click);
			// 
			// btn5
			// 
			this->btn5->Location = System::Drawing::Point(53, 145);
			this->btn5->Name = L"btn5";
			this->btn5->Size = System::Drawing::Size(34, 32);
			this->btn5->TabIndex = 1;
			this->btn5->Text = L"5";
			this->btn5->UseVisualStyleBackColor = true;
			this->btn5->Click += gcnew System::EventHandler(this, &Form1::btn5_Click);
			// 
			// btn2
			// 
			this->btn2->Location = System::Drawing::Point(53, 183);
			this->btn2->Name = L"btn2";
			this->btn2->Size = System::Drawing::Size(34, 32);
			this->btn2->TabIndex = 1;
			this->btn2->Text = L"2";
			this->btn2->UseVisualStyleBackColor = true;
			this->btn2->Click += gcnew System::EventHandler(this, &Form1::btn2_Click);
			// 
			// btnVirgula
			// 
			this->btnVirgula->Location = System::Drawing::Point(53, 218);
			this->btnVirgula->Name = L"btnVirgula";
			this->btnVirgula->Size = System::Drawing::Size(34, 32);
			this->btnVirgula->TabIndex = 1;
			this->btnVirgula->Text = L",";
			this->btnVirgula->UseVisualStyleBackColor = true;
			this->btnVirgula->Click += gcnew System::EventHandler(this, &Form1::btnVirgula_Click);
			// 
			// btn4
			// 
			this->btn4->Location = System::Drawing::Point(13, 145);
			this->btn4->Name = L"btn4";
			this->btn4->Size = System::Drawing::Size(34, 32);
			this->btn4->TabIndex = 1;
			this->btn4->Text = L"4";
			this->btn4->UseVisualStyleBackColor = true;
			this->btn4->Click += gcnew System::EventHandler(this, &Form1::btn4_Click);
			// 
			// btn1
			// 
			this->btn1->Location = System::Drawing::Point(13, 183);
			this->btn1->Name = L"btn1";
			this->btn1->Size = System::Drawing::Size(34, 32);
			this->btn1->TabIndex = 1;
			this->btn1->Text = L"1";
			this->btn1->UseVisualStyleBackColor = true;
			this->btn1->Click += gcnew System::EventHandler(this, &Form1::btn1_Click);
			// 
			// btn0
			// 
			this->btn0->Location = System::Drawing::Point(13, 221);
			this->btn0->Name = L"btn0";
			this->btn0->Size = System::Drawing::Size(34, 32);
			this->btn0->TabIndex = 1;
			this->btn0->Text = L"0";
			this->btn0->UseVisualStyleBackColor = true;
			this->btn0->Click += gcnew System::EventHandler(this, &Form1::btn0_Click);
			// 
			// btnResultado
			// 
			this->btnResultado->Location = System::Drawing::Point(12, 256);
			this->btnResultado->Name = L"btnResultado";
			this->btnResultado->Size = System::Drawing::Size(195, 32);
			this->btnResultado->TabIndex = 1;
			this->btnResultado->Text = L"=";
			this->btnResultado->UseVisualStyleBackColor = true;
			this->btnResultado->Click += gcnew System::EventHandler(this, &Form1::btnResultado_Click);
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(269, 119);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(126, 20);
			this->textBox1->TabIndex = 2;
			this->textBox1->Text = L"55";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Form1::textBox1_TextChanged);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveBorder;
			this->ClientSize = System::Drawing::Size(509, 320);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->btnRaiz);
			this->Controls->Add(this->btnPot);
			this->Controls->Add(this->btnFat);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->btnDiv);
			this->Controls->Add(this->btnMult);
			this->Controls->Add(this->btnSub);
			this->Controls->Add(this->btnAdd);
			this->Controls->Add(this->btnResultado);
			this->Controls->Add(this->btnPosneg);
			this->Controls->Add(this->btn3);
			this->Controls->Add(this->btn6);
			this->Controls->Add(this->btn9);
			this->Controls->Add(this->btnVirgula);
			this->Controls->Add(this->btn2);
			this->Controls->Add(this->btn5);
			this->Controls->Add(this->btn8);
			this->Controls->Add(this->btn0);
			this->Controls->Add(this->btn1);
			this->Controls->Add(this->btn4);
			this->Controls->Add(this->btn7);
			this->Controls->Add(this->lblDisplay);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^  >(resources->GetObject(L"$this.Icon")));
			this->Name = L"Form1";
			this->Text = L"Calculadora Master";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
        #define MAXDIGITOS 23
		bool flagVirgula;
		bool flagResultado;
		double memoria;
		char operacao;
		void liberaDisplay(){
			 lblDisplay->Text = "0";
			 flagVirgula = false;
			 flagResultado = false;
		}
		double fatorial(double numero)
		{
			return (numero>1)? numero*fatorial(numero-1) :1;
		}

#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 flagVirgula = false;
			 flagResultado = false;
			 memoria = 0.0;
			 operacao = '\0';
		 }
private: System::Void label1_Click(System::Object^  sender, System::EventArgs^  e) {
			 }
	private: System::Void btn0_Click(System::Object^  sender, System::EventArgs^  e) {
			if(lblDisplay->Text ->Length < MAXDIGITOS){	 
				 if(lblDisplay->Text !="0")
					 lblDisplay->Text = lblDisplay->Text + "0";
				 if(flagResultado){
					 lblDisplay->Text = "0";
					 flagResultado= false;
				 }
			 }
			 }






































private: System::Void btn1_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "1";
			 else{
				  lblDisplay->Text ="1";
				  flagResultado = false;
			 }
		 }
		 }






















private: System::Void btnVirgula_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(!flagVirgula){
			 lblDisplay->Text = lblDisplay->Text + ",";
			 flagVirgula = true;
			 }}


		 }
private: System::Void btnPosneg_Click(System::Object^  sender, System::EventArgs^  e) {
		  
			double numero = System::Convert::ToDouble(lblDisplay->Text);
			lblDisplay->Text = System::Convert::ToString(numero*(-1));
		 
		 }







private: System::Void btnRaiz_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero = System::Convert::ToDouble(lblDisplay->Text);
			lblDisplay->Text = System::Convert::ToString(sqrt(numero));
			if(lblDisplay->Text ->Length > MAXDIGITOS)
			lblDisplay->Text =lblDisplay->Text->Substring(0,MAXDIGITOS);
		 }






private: System::Void btnClear_Click(System::Object^  sender, System::EventArgs^  e) {

			 lblDisplay->Text = "0";
			 flagVirgula = false;

		 }






private: System::Void btnAdd_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '+';
			 liberaDisplay ();
		 }
private: System::Void btnResultado_Click(System::Object^  sender, System::EventArgs^  e) {
			 double  numero = System::Convert::ToDouble(lblDisplay->Text);
			 switch(operacao){
			 case'+': memoria += numero; break;
			 case'-': memoria -= numero; break;
             case'*': memoria *= numero; break;
		     case'/': memoria /= numero; break;
			 case'^': memoria = Math::Pow(memoria,numero); break;
              
			  }
             //lblDisplay->Text = System::Convert::ToString(memoria);
			 if(memoria>Math ::Pow(10,MAXDIGITOS)-1)
				 lblDisplay->Text = memoria.ToString("e");
			 else
				 lblDisplay->Text = memoria.ToString();


			 flagResultado = true ;
		 }






private: System::Void btnSub_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '-';
			 liberaDisplay ();
		 }
private: System::Void btnMult_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '*';
			 liberaDisplay ();
		 }
private: System::Void btnDiv_Click(System::Object^  sender, System::EventArgs^  e) {
			 memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '/';
			 liberaDisplay ();
		 }
private: System::Void btn2_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "2";
			 else{
				  lblDisplay->Text ="2";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btn3_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "3";
			 else{
				  lblDisplay->Text ="3";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btn4_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "4";
			 else{
				  lblDisplay->Text ="4";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btn5_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "5";
			 else{
				  lblDisplay->Text ="5";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btn6_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "6";
			 else{
				  lblDisplay->Text ="6";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btn7_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "7";
			 else{
				  lblDisplay->Text ="7";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btn8_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "8";
			 else{
				  lblDisplay->Text ="8";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btn9_Click(System::Object^  sender, System::EventArgs^  e) {
			 if(lblDisplay->Text ->Length < MAXDIGITOS){
			 if(lblDisplay->Text !="0" && !flagResultado)
					 lblDisplay->Text = lblDisplay->Text + "9";
			 else{
				  lblDisplay->Text ="9";
				  flagResultado = false;
			 }

		 }
		 }
private: System::Void btnFat_Click(System::Object^  sender, System::EventArgs^  e) {
			 double numero=System::Convert::ToDouble(lblDisplay->Text);
			 numero=fatorial(numero);
			 if(numero>Math ::Pow(10,MAXDIGITOS)-1)
				 lblDisplay->Text = numero.ToString("e");
			 else
				 lblDisplay->Text = numero.ToString();


			 flagResultado = true ;


		 }
private: System::Void btnPot_Click(System::Object^  sender, System::EventArgs^  e) {
			  memoria = System::Convert::ToDouble(lblDisplay->Text);
			 operacao = '^';
			 liberaDisplay ();


		 }
private: System::Void textBox1_TextChanged(System::Object^  sender, System::EventArgs^  e) {
			 System::String^ aux = gcnew System::String("0");
			 aux = textBox1->Text->Substring(textBox1->Text->Length-1);
			 //lblDisplay->Text = aux;
			 if(!(aux == "-" || aux == "," || isdigit(aux[0])))
				 textBox1->Text = textBox1->Text->Substring(0,textBox1->Text->Length-1);
		 }
};
}

