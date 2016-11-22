#pragma once

namespace Form1 {

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
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::TextBox^  txtUsuario;
	protected: 

	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::RadioButton^  rbdverde;

	private: System::Windows::Forms::RadioButton^  rbdazul;
	private: System::Windows::Forms::RadioButton^  rbdvermelho;
	private: System::Windows::Forms::CheckBox^  chknome;




	private: System::Windows::Forms::CheckBox^  chkidade;

	private: System::Windows::Forms::Label^  lblMensagem;
	private: System::Windows::Forms::ComboBox^  cmbmusicas;


	private: System::Windows::Forms::PictureBox^  pictureBox1;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->txtUsuario = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->rbdverde = (gcnew System::Windows::Forms::RadioButton());
			this->rbdazul = (gcnew System::Windows::Forms::RadioButton());
			this->rbdvermelho = (gcnew System::Windows::Forms::RadioButton());
			this->chknome = (gcnew System::Windows::Forms::CheckBox());
			this->chkidade = (gcnew System::Windows::Forms::CheckBox());
			this->lblMensagem = (gcnew System::Windows::Forms::Label());
			this->cmbmusicas = (gcnew System::Windows::Forms::ComboBox());
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(23, 216);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(118, 53);
			this->button1->TabIndex = 0;
			this->button1->Text = L"executar";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Form1::button1_Click);
			// 
			// txtUsuario
			// 
			this->txtUsuario->Location = System::Drawing::Point(18, 56);
			this->txtUsuario->Name = L"txtUsuario";
			this->txtUsuario->Size = System::Drawing::Size(357, 20);
			this->txtUsuario->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->rbdverde);
			this->groupBox1->Controls->Add(this->rbdazul);
			this->groupBox1->Controls->Add(this->rbdvermelho);
			this->groupBox1->Location = System::Drawing::Point(181, 88);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(127, 124);
			this->groupBox1->TabIndex = 3;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"cores";
			// 
			// rbdverde
			// 
			this->rbdverde->AutoSize = true;
			this->rbdverde->Location = System::Drawing::Point(28, 83);
			this->rbdverde->Name = L"rbdverde";
			this->rbdverde->Size = System::Drawing::Size(52, 17);
			this->rbdverde->TabIndex = 4;
			this->rbdverde->TabStop = true;
			this->rbdverde->Text = L"verde";
			this->rbdverde->UseVisualStyleBackColor = true;
			// 
			// rbdazul
			// 
			this->rbdazul->AutoSize = true;
			this->rbdazul->Location = System::Drawing::Point(28, 60);
			this->rbdazul->Name = L"rbdazul";
			this->rbdazul->Size = System::Drawing::Size(44, 17);
			this->rbdazul->TabIndex = 1;
			this->rbdazul->TabStop = true;
			this->rbdazul->Text = L"azul";
			this->rbdazul->UseVisualStyleBackColor = true;
			// 
			// rbdvermelho
			// 
			this->rbdvermelho->AutoSize = true;
			this->rbdvermelho->Location = System::Drawing::Point(28, 37);
			this->rbdvermelho->Name = L"rbdvermelho";
			this->rbdvermelho->Size = System::Drawing::Size(68, 17);
			this->rbdvermelho->TabIndex = 0;
			this->rbdvermelho->TabStop = true;
			this->rbdvermelho->Text = L"vermelho";
			this->rbdvermelho->UseVisualStyleBackColor = true;
			// 
			// chknome
			// 
			this->chknome->AutoSize = true;
			this->chknome->Location = System::Drawing::Point(51, 88);
			this->chknome->Name = L"chknome";
			this->chknome->Size = System::Drawing::Size(52, 17);
			this->chknome->TabIndex = 4;
			this->chknome->Text = L"nome";
			this->chknome->UseVisualStyleBackColor = true;
			this->chknome->CheckedChanged += gcnew System::EventHandler(this, &Form1::checkBox1_CheckedChanged);
			// 
			// chkidade
			// 
			this->chkidade->AutoSize = true;
			this->chkidade->Location = System::Drawing::Point(51, 129);
			this->chkidade->Name = L"chkidade";
			this->chkidade->Size = System::Drawing::Size(52, 17);
			this->chkidade->TabIndex = 5;
			this->chkidade->Text = L"idade";
			this->chkidade->UseVisualStyleBackColor = true;
			// 
			// lblMensagem
			// 
			this->lblMensagem->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point, 
				static_cast<System::Byte>(0)));
			this->lblMensagem->Location = System::Drawing::Point(12, 9);
			this->lblMensagem->Name = L"lblMensagem";
			this->lblMensagem->Size = System::Drawing::Size(930, 32);
			this->lblMensagem->TabIndex = 6;
			this->lblMensagem->Text = L"...";
			this->lblMensagem->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			// 
			// cmbmusicas
			// 
			this->cmbmusicas->FormattingEnabled = true;
			this->cmbmusicas->Items->AddRange(gcnew cli::array< System::Object^  >(4) {L"invasible", L"vertigo", L"miss saraievo", L"one love"});
			this->cmbmusicas->Location = System::Drawing::Point(10, 180);
			this->cmbmusicas->Name = L"cmbmusicas";
			this->cmbmusicas->Size = System::Drawing::Size(121, 21);
			this->cmbmusicas->TabIndex = 7;
			this->cmbmusicas->Text = L"musicas";
			this->cmbmusicas->SelectedIndexChanged += gcnew System::EventHandler(this, &Form1::comboBox1_SelectedIndexChanged);
			// 
			// pictureBox1
			// 
			this->pictureBox1->Image = (cli::safe_cast<System::Drawing::Image^  >(resources->GetObject(L"pictureBox1.Image")));
			this->pictureBox1->Location = System::Drawing::Point(397, 56);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(457, 404);
			this->pictureBox1->TabIndex = 8;
			this->pictureBox1->TabStop = false;
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(954, 531);
			this->Controls->Add(this->pictureBox1);
			this->Controls->Add(this->cmbmusicas);
			this->Controls->Add(this->lblMensagem);
			this->Controls->Add(this->chkidade);
			this->Controls->Add(this->chknome);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->txtUsuario);
			this->Controls->Add(this->button1);
			this->Name = L"Form1";
			this->Text = L"U2";
			this->Load += gcnew System::EventHandler(this, &Form1::Form1_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^  >(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Form1_Load(System::Object^  sender, System::EventArgs^  e) {
			 cmbmusicas->SelectedIndex = 0;
			 }
private: System::Void button1_Click(System::Object^  sender, System::EventArgs^  e) {
		lblMensagem->Text = "A banda , ";
			if(chknome->Checked)
				lblMensagem->Text = lblMensagem->Text + "U2, ";
		if(chkidade->Checked)
				lblMensagem->Text = lblMensagem->Text + " tem 40 anos ";

		lblMensagem->Text = lblMensagem->Text + "e escreveu " +
								 cmbmusicas->SelectedItem->ToString() +", ";
		  lblMensagem->Text = lblMensagem->Text + txtUsuario->Text + ".";
		  if(rbdvermelho->Checked)
			  lblMensagem->ForeColor = System ::Drawing::Color::DarkRed;
		  if(rbdverde->Checked)
			  lblMensagem->ForeColor = System ::Drawing::Color::ForestGreen;
		  if(rbdazul->Checked)
			  lblMensagem->ForeColor = System ::Drawing::Color::MidnightBlue;
		 }
private: System::Void checkBox1_CheckedChanged(System::Object^  sender, System::EventArgs^  e) {
		

		 }
private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		 }
};
}

