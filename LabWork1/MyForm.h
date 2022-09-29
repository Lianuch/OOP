#include "ZavdClass.h"
#pragma once

namespace LabWork1 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
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
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ xx;
	private: System::Windows::Forms::TextBox^ yy;



	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ zz;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ aa;
	private: System::Windows::Forms::TextBox^ bb;
	private: System::Windows::Forms::Button^ button2;











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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->xx = (gcnew System::Windows::Forms::TextBox());
			this->yy = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->zz = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->aa = (gcnew System::Windows::Forms::TextBox());
			this->bb = (gcnew System::Windows::Forms::TextBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(73, 187);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(83, 23);
			this->button1->TabIndex = 0;
			this->button1->Text = L"Розрахувати";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(13, 58);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(53, 13);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Введіть х";
			// 
			// xx
			// 
			this->xx->Location = System::Drawing::Point(72, 58);
			this->xx->Name = L"xx";
			this->xx->Size = System::Drawing::Size(100, 20);
			this->xx->TabIndex = 2;
			// 
			// yy
			// 
			this->yy->Location = System::Drawing::Point(72, 101);
			this->yy->Name = L"yy";
			this->yy->Size = System::Drawing::Size(100, 20);
			this->yy->TabIndex = 3;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(13, 101);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(53, 13);
			this->label2->TabIndex = 4;
			this->label2->Text = L"Введіть y";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(13, 141);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(53, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Введіть z";
			// 
			// zz
			// 
			this->zz->Location = System::Drawing::Point(73, 141);
			this->zz->Name = L"zz";
			this->zz->Size = System::Drawing::Size(100, 20);
			this->zz->TabIndex = 6;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 8.25F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(49, 9);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(272, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"Програма для обчислення a(x,y,z,b) i b(x,y,z)";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(179, 72);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(64, 13);
			this->label5->TabIndex = 8;
			this->label5->Text = L"Значення a";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(179, 134);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(64, 13);
			this->label6->TabIndex = 9;
			this->label6->Text = L"Значення b";
			// 
			// aa
			// 
			this->aa->Location = System::Drawing::Point(249, 72);
			this->aa->Name = L"aa";
			this->aa->Size = System::Drawing::Size(100, 20);
			this->aa->TabIndex = 10;
			// 
			// bb
			// 
			this->bb->Location = System::Drawing::Point(249, 131);
			this->bb->Name = L"bb";
			this->bb->Size = System::Drawing::Size(100, 20);
			this->bb->TabIndex = 11;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(264, 187);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(85, 23);
			this->button2->TabIndex = 12;
			this->button2->Text = L"Табуляція";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(370, 267);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->bb);
			this->Controls->Add(this->aa);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->zz);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->yy);
			this->Controls->Add(this->xx);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		double x = System::Convert::ToDouble(xx->Text);
		double y = System::Convert::ToDouble(yy->Text);
		double z = System::Convert::ToDouble(zz->Text);
		ZavdClass Zavd;
		Zavd.Fn_b(x, y, z);
		Zavd.Fn_a(x, y, z);
		aa->Text = System::Convert::ToString(Zavd.geta());
		bb->Text = System::Convert::ToString(Zavd.getb());
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{

		
	}
};
}
