#pragma once
#include"TeacherPortal.h"

namespace TimetableManagerDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for StudentPortal
	/// </summary>
	public ref class StudentPortal : public System::Windows::Forms::Form
	{
	public:
		StudentPortal(void)
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
		~StudentPortal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;






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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(19, 15);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(55, 35);
			this->button1->TabIndex = 0;
			this->button1->Text = L"///";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &StudentPortal::button1_Click);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(269, 83);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(287, 46);
			this->label1->TabIndex = 1;
			this->label1->Text = L"Student Portal";
			this->label1->Click += gcnew System::EventHandler(this, &StudentPortal::label1_Click);
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(277, 243);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(279, 30);
			this->textBox1->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold));
			this->label2->Location = System::Drawing::Point(272, 203);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(168, 25);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Enter Student Id";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(352, 300);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(122, 40);
			this->button2->TabIndex = 4;
			this->button2->Text = L"View Timetable";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &StudentPortal::button2_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(-6, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 522);
			this->panel1->TabIndex = 6;
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
			this->button6->Click += gcnew System::EventHandler(this, &StudentPortal::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(56, 219);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(233, 46);
			this->button5->TabIndex = 2;
			this->button5->Text = L"Dashboard";
			this->button5->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Location = System::Drawing::Point(56, 141);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(233, 46);
			this->button4->TabIndex = 1;
			this->button4->Text = L"Admin Portal";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(56, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(233, 46);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Teacher Portal";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &StudentPortal::button3_Click);
			// 
			// StudentPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 503);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Name = L"StudentPortal";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"StudentPortal";
			this->Load += gcnew System::EventHandler(this, &StudentPortal::StudentPortal_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		panel1->Visible = true;
	}
private: System::Void StudentPortal_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel1->Visible = false;
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	TeacherPortal^ form = gcnew TeacherPortal();
	form->Show();
	this->Hide(); 
}
};
}
