#pragma once
#include"AdminPortalLogin.h"
namespace TimetableManagerDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for TeacherPortal
	/// </summary>
	public ref class TeacherPortal : public System::Windows::Forms::Form
	{
	public:
		TeacherPortal(void)
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
		~TeacherPortal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button6;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(258, 114);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(296, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Teacher Portal";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(266, 235);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(288, 30);
			this->textBox1->TabIndex = 1;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &TeacherPortal::textBox1_TextChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(261, 207);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(173, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Enter Teacher Id";
			this->label2->Click += gcnew System::EventHandler(this, &TeacherPortal::label2_Click);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(351, 296);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(117, 44);
			this->button1->TabIndex = 3;
			this->button1->Text = L"View Timetable";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &TeacherPortal::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(-7, 1);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 522);
			this->panel1->TabIndex = 5;
			this->panel1->Visible = false;
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(22, 13);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(47, 38);
			this->button6->TabIndex = 3;
			this->button6->Text = L"X";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &TeacherPortal::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(56, 219);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(233, 46);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Dashboard";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &TeacherPortal::button5_Click);
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(56, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(233, 46);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Admin Portal";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &TeacherPortal::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(56, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(233, 46);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Student Portal";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &TeacherPortal::button3_Click);
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(82, 40);
			this->button2->TabIndex = 6;
			this->button2->Text = L"///";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &TeacherPortal::button2_Click_1);
			// 
			// TeacherPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 503);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"TeacherPortal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"TeacherPortal";
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	panel1->Visible = true;
	button2->Visible = false;
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel1->Visible = false;
	button2->Visible = true;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	/*StudentPortal^ form = gcnew StudentPortal();
	form->Show();
	this->Hide();*/
	MessageBox::Show("Form nahi khul raha", "Constructor Error tha", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	/*Dashboard^ form = gcnew Dashboard();
	form->Show();
	this->Hide();*/
	MessageBox::Show("Idr bhi wohi", "Constructor Error tha", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AdminPortalLogin^ form = gcnew AdminPortalLogin();
	form->Show();
	this->Hide();
}
};
}
