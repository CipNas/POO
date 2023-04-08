#pragma once

namespace CppCLRWinFormsProject {

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
	private: System::Windows::Forms::TextBox^ afisaj;
	private: System::Windows::Forms::Button^ button_unu;
	private: System::Windows::Forms::Button^ button_doi;
	private: System::Windows::Forms::Button^ button_trei;
	private: System::Windows::Forms::Button^ button_patru;
	private: System::Windows::Forms::Button^ button_cinci;
	private: System::Windows::Forms::Button^ button_sase;
	private: System::Windows::Forms::Button^ button_sapte;
	private: System::Windows::Forms::Button^ button_opt;
	private: System::Windows::Forms::Button^ button_noua;
	private: System::Windows::Forms::Button^ button_zero;
	private: System::Windows::Forms::Button^ button_virgula;

	private: System::Windows::Forms::Button^ button_egal;
	private: System::Windows::Forms::Button^ button_adunare;
	private: System::Windows::Forms::Button^ button_inmultire;
	private: System::Windows::Forms::Button^ button_minus;
	private: System::Windows::Forms::Button^ button_impartit;


	private: System::Windows::Forms::Button^ button_clear;
	protected:

	protected:

	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->afisaj = (gcnew System::Windows::Forms::TextBox());
			this->button_unu = (gcnew System::Windows::Forms::Button());
			this->button_doi = (gcnew System::Windows::Forms::Button());
			this->button_trei = (gcnew System::Windows::Forms::Button());
			this->button_patru = (gcnew System::Windows::Forms::Button());
			this->button_cinci = (gcnew System::Windows::Forms::Button());
			this->button_sase = (gcnew System::Windows::Forms::Button());
			this->button_sapte = (gcnew System::Windows::Forms::Button());
			this->button_opt = (gcnew System::Windows::Forms::Button());
			this->button_noua = (gcnew System::Windows::Forms::Button());
			this->button_zero = (gcnew System::Windows::Forms::Button());
			this->button_virgula = (gcnew System::Windows::Forms::Button());
			this->button_egal = (gcnew System::Windows::Forms::Button());
			this->button_adunare = (gcnew System::Windows::Forms::Button());
			this->button_inmultire = (gcnew System::Windows::Forms::Button());
			this->button_minus = (gcnew System::Windows::Forms::Button());
			this->button_impartit = (gcnew System::Windows::Forms::Button());
			this->button_clear = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// afisaj
			// 
			this->afisaj->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->afisaj->Location = System::Drawing::Point(12, 27);
			this->afisaj->Multiline = true;
			this->afisaj->Name = L"afisaj";
			this->afisaj->Size = System::Drawing::Size(178, 40);
			this->afisaj->TabIndex = 0;
			this->afisaj->TextAlign = System::Windows::Forms::HorizontalAlignment::Right;
			// 
			// button_unu
			// 
			this->button_unu->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_unu->Location = System::Drawing::Point(12, 76);
			this->button_unu->Name = L"button_unu";
			this->button_unu->Size = System::Drawing::Size(40, 40);
			this->button_unu->TabIndex = 1;
			this->button_unu->Text = L"1";
			this->button_unu->UseVisualStyleBackColor = true;
			this->button_unu->Click += gcnew System::EventHandler(this, &Form1::button_unu_Click);
			// 
			// button_doi
			// 
			this->button_doi->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_doi->Location = System::Drawing::Point(58, 76);
			this->button_doi->Name = L"button_doi";
			this->button_doi->Size = System::Drawing::Size(40, 40);
			this->button_doi->TabIndex = 2;
			this->button_doi->Text = L"2";
			this->button_doi->UseVisualStyleBackColor = true;
			this->button_doi->Click += gcnew System::EventHandler(this, &Form1::button_doi_Click);
			// 
			// button_trei
			// 
			this->button_trei->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_trei->Location = System::Drawing::Point(104, 76);
			this->button_trei->Name = L"button_trei";
			this->button_trei->Size = System::Drawing::Size(40, 40);
			this->button_trei->TabIndex = 3;
			this->button_trei->Text = L"3";
			this->button_trei->UseVisualStyleBackColor = true;
			this->button_trei->Click += gcnew System::EventHandler(this, &Form1::button_trei_Click);
			// 
			// button_patru
			// 
			this->button_patru->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_patru->Location = System::Drawing::Point(12, 126);
			this->button_patru->Name = L"button_patru";
			this->button_patru->Size = System::Drawing::Size(40, 40);
			this->button_patru->TabIndex = 4;
			this->button_patru->Text = L"4";
			this->button_patru->UseVisualStyleBackColor = true;
			this->button_patru->Click += gcnew System::EventHandler(this, &Form1::button_patru_Click);
			// 
			// button_cinci
			// 
			this->button_cinci->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_cinci->Location = System::Drawing::Point(58, 126);
			this->button_cinci->Name = L"button_cinci";
			this->button_cinci->Size = System::Drawing::Size(40, 40);
			this->button_cinci->TabIndex = 5;
			this->button_cinci->Text = L"5";
			this->button_cinci->UseVisualStyleBackColor = true;
			this->button_cinci->Click += gcnew System::EventHandler(this, &Form1::button_cinci_Click);
			// 
			// button_sase
			// 
			this->button_sase->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sase->Location = System::Drawing::Point(104, 126);
			this->button_sase->Name = L"button_sase";
			this->button_sase->Size = System::Drawing::Size(40, 40);
			this->button_sase->TabIndex = 6;
			this->button_sase->Text = L"6";
			this->button_sase->UseVisualStyleBackColor = true;
			this->button_sase->Click += gcnew System::EventHandler(this, &Form1::button_sase_Click);
			// 
			// button_sapte
			// 
			this->button_sapte->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_sapte->Location = System::Drawing::Point(12, 176);
			this->button_sapte->Name = L"button_sapte";
			this->button_sapte->Size = System::Drawing::Size(40, 40);
			this->button_sapte->TabIndex = 7;
			this->button_sapte->Text = L"7";
			this->button_sapte->UseVisualStyleBackColor = true;
			this->button_sapte->Click += gcnew System::EventHandler(this, &Form1::button_sapte_Click);
			// 
			// button_opt
			// 
			this->button_opt->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_opt->Location = System::Drawing::Point(58, 176);
			this->button_opt->Name = L"button_opt";
			this->button_opt->Size = System::Drawing::Size(40, 40);
			this->button_opt->TabIndex = 8;
			this->button_opt->Text = L"8";
			this->button_opt->UseVisualStyleBackColor = true;
			this->button_opt->Click += gcnew System::EventHandler(this, &Form1::button_opt_Click);
			// 
			// button_noua
			// 
			this->button_noua->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_noua->Location = System::Drawing::Point(104, 176);
			this->button_noua->Name = L"button_noua";
			this->button_noua->Size = System::Drawing::Size(40, 40);
			this->button_noua->TabIndex = 9;
			this->button_noua->Text = L"9";
			this->button_noua->UseVisualStyleBackColor = true;
			this->button_noua->Click += gcnew System::EventHandler(this, &Form1::button_noua_Click);
			// 
			// button_zero
			// 
			this->button_zero->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_zero->Location = System::Drawing::Point(12, 226);
			this->button_zero->Name = L"button_zero";
			this->button_zero->Size = System::Drawing::Size(40, 40);
			this->button_zero->TabIndex = 10;
			this->button_zero->Text = L"0";
			this->button_zero->UseVisualStyleBackColor = true;
			this->button_zero->Click += gcnew System::EventHandler(this, &Form1::button_zero_Click);
			// 
			// button_virgula
			// 
			this->button_virgula->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_virgula->Location = System::Drawing::Point(58, 226);
			this->button_virgula->Name = L"button_virgula";
			this->button_virgula->Size = System::Drawing::Size(40, 40);
			this->button_virgula->TabIndex = 11;
			this->button_virgula->Text = L",";
			this->button_virgula->UseVisualStyleBackColor = true;
			this->button_virgula->Click += gcnew System::EventHandler(this, &Form1::button_virgula_Click);
			// 
			// button_egal
			// 
			this->button_egal->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_egal->Location = System::Drawing::Point(104, 226);
			this->button_egal->Name = L"button_egal";
			this->button_egal->Size = System::Drawing::Size(40, 40);
			this->button_egal->TabIndex = 12;
			this->button_egal->Text = L"=";
			this->button_egal->UseVisualStyleBackColor = true;
			this->button_egal->Click += gcnew System::EventHandler(this, &Form1::button_egal_Click);
			// 
			// button_adunare
			// 
			this->button_adunare->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_adunare->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_adunare->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button_adunare->Location = System::Drawing::Point(150, 76);
			this->button_adunare->Name = L"button_adunare";
			this->button_adunare->Size = System::Drawing::Size(40, 40);
			this->button_adunare->TabIndex = 13;
			this->button_adunare->Text = L"+";
			this->button_adunare->UseVisualStyleBackColor = false;
			this->button_adunare->Click += gcnew System::EventHandler(this, &Form1::button_adunare_Click);
			// 
			// button_inmultire
			// 
			this->button_inmultire->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)),
				static_cast<System::Int32>(static_cast<System::Byte>(128)), static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_inmultire->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_inmultire->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button_inmultire->Location = System::Drawing::Point(150, 126);
			this->button_inmultire->Name = L"button_inmultire";
			this->button_inmultire->Size = System::Drawing::Size(40, 40);
			this->button_inmultire->TabIndex = 14;
			this->button_inmultire->Text = L"x";
			this->button_inmultire->TextAlign = System::Drawing::ContentAlignment::TopCenter;
			this->button_inmultire->UseVisualStyleBackColor = false;
			this->button_inmultire->Click += gcnew System::EventHandler(this, &Form1::button_inmultire_Click);
			// 
			// button_minus
			// 
			this->button_minus->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_minus->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button_minus->Location = System::Drawing::Point(150, 176);
			this->button_minus->Name = L"button_minus";
			this->button_minus->Size = System::Drawing::Size(40, 40);
			this->button_minus->TabIndex = 15;
			this->button_minus->Text = L"-";
			this->button_minus->UseVisualStyleBackColor = false;
			this->button_minus->Click += gcnew System::EventHandler(this, &Form1::button_minus_Click);
			// 
			// button_impartit
			// 
			this->button_impartit->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_impartit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_impartit->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button_impartit->Location = System::Drawing::Point(150, 226);
			this->button_impartit->Name = L"button_impartit";
			this->button_impartit->Size = System::Drawing::Size(40, 40);
			this->button_impartit->TabIndex = 16;
			this->button_impartit->Text = L"/";
			this->button_impartit->UseVisualStyleBackColor = false;
			this->button_impartit->Click += gcnew System::EventHandler(this, &Form1::button_impartit_Click);
			// 
			// button_clear
			// 
			this->button_clear->BackColor = System::Drawing::Color::FromArgb(static_cast<System::Int32>(static_cast<System::Byte>(255)), static_cast<System::Int32>(static_cast<System::Byte>(128)),
				static_cast<System::Int32>(static_cast<System::Byte>(0)));
			this->button_clear->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 20.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button_clear->ForeColor = System::Drawing::SystemColors::WindowText;
			this->button_clear->Location = System::Drawing::Point(12, 275);
			this->button_clear->Name = L"button_clear";
			this->button_clear->Size = System::Drawing::Size(178, 40);
			this->button_clear->TabIndex = 17;
			this->button_clear->Text = L"CLEAR";
			this->button_clear->UseVisualStyleBackColor = false;
			this->button_clear->Click += gcnew System::EventHandler(this, &Form1::button_clear_Click);
			// 
			// Form1
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(204, 325);
			this->Controls->Add(this->button_clear);
			this->Controls->Add(this->button_impartit);
			this->Controls->Add(this->button_minus);
			this->Controls->Add(this->button_inmultire);
			this->Controls->Add(this->button_adunare);
			this->Controls->Add(this->button_egal);
			this->Controls->Add(this->button_virgula);
			this->Controls->Add(this->button_zero);
			this->Controls->Add(this->button_noua);
			this->Controls->Add(this->button_opt);
			this->Controls->Add(this->button_sapte);
			this->Controls->Add(this->button_sase);
			this->Controls->Add(this->button_cinci);
			this->Controls->Add(this->button_patru);
			this->Controls->Add(this->button_trei);
			this->Controls->Add(this->button_doi);
			this->Controls->Add(this->button_unu);
			this->Controls->Add(this->afisaj);
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::SizableToolWindow;
			this->Name = L"Form1";
			this->Text = L"Calculator matematic";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	
	private: double firstNum = 0;
	private: double secondNum = 0;
	private: double result = 0;
	private: bool opPerformed = false;
	private: String^ operation = "";

	private: System::Void operatieNoua() {
		afisaj->Clear();
		opPerformed = false;
	}

	private: System::Void button_unu_Click(System::Object^ sender, System::EventArgs^ e) {		
		afisaj->Text += "1";
	}
	private: System::Void button_doi_Click(System::Object^ sender, System::EventArgs^ e) {	
		afisaj->Text += "2";
	}
	private: System::Void button_trei_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "3";
	}
	private: System::Void button_patru_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "4";
	}
	private: System::Void button_cinci_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "5";
	}
	private: System::Void button_sase_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "6";
	}
	private: System::Void button_sapte_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "7";
	}
	private: System::Void button_opt_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "8";
	}
	private: System::Void button_noua_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "9";
	}
	private: System::Void button_zero_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Text += "0";
	}
	


	private: System::Void button_adunare_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			evaluareNum();
			//firstNum = Double::Parse(afisaj->Text);
			//afisaj->Text = "";
			operation = "+";
			afisaj->Text += " + ";
		}
		else if (afisaj->Text->Contains("=")) {

		}
	}
	private: System::Void button_inmultire_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			evaluareNum();
			//firstNum = Double::Parse(afisaj->Text);
			//afisaj->Text = "";
			operation = "*";
			afisaj->Text += " x ";
		}
	}
	private: System::Void button_minus_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			evaluareNum();
			//firstNum = Double::Parse(afisaj->Text);
			//afisaj->Text = "";
			operation = "-";
			afisaj->Text += " - ";
		}
	}
	private: System::Void button_impartit_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			evaluareNum();
			//firstNum = Double::Parse(afisaj->Text);
			//afisaj->Text = "";
			operation = "/";
			afisaj->Text += " / ";
		}
	}
	private: System::Void button_virgula_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			afisaj->Text += ",";
		}
		else {
			afisaj->Text = "0,";
		}
	}
	private: System::Void button_clear_Click(System::Object^ sender, System::EventArgs^ e) {
		afisaj->Clear();
		firstNum = 0; secondNum = 0;
	}

	private:System::Void evaluareNum() {
		String^ afisajText = afisaj->Text;
		array<String^>^ parts = afisajText->Split(' ');
		if (parts->Length == 3) {
			firstNum = Double::Parse(parts[0]);
			operation = parts[1];
			secondNum = Double::Parse(parts[2]);
		}
		else if (afisajText->Contains("=")) {
			afisaj->Clear();
			afisaj->Text = parts[parts->Length-1];
			firstNum = Double::Parse(parts[parts->Length - 1]);
		}			
	}

	private: System::Void button_egal_Click(System::Object^ sender, System::EventArgs^ e) {
		if (afisaj->Text != "") {
			evaluareNum();
			
				if (operation == "+") {
					afisaj->Text += " = "+(firstNum + secondNum).ToString();
				}
				else if (operation == "x") {
					afisaj->Text += " = " + (firstNum * secondNum).ToString();				
				}
				else if (operation == "-") {
					afisaj->Text += " = " + (firstNum - secondNum).ToString();
				}
				else if (operation == "/") {
					if (secondNum != 0) {
						afisaj->Text += " = " + (firstNum / secondNum).ToString();
					}
					else {
						afisaj->Text = "Error: Cannot divide by zero";
					}
				}

			
			opPerformed = true;
		}
	}
	};
}
