#pragma once
#include "StudentPortal.h"
#include"TeacherPortal.h"
#include"AdminPortalLogin.h"
namespace TimetableManagerDatabase {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for Dashboard
	/// </summary>
	public ref class Dashboard : public System::Windows::Forms::Form
	{
	public:
		Dashboard(void)
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
		~Dashboard()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	protected:
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;

	private: System::Windows::Forms::Button^ button4;

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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, System::Drawing::FontStyle::Bold));
			this->label1->Location = System::Drawing::Point(215, 76);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(378, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Timetable Manager";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button1->Location = System::Drawing::Point(162, 165);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(483, 59);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Student Portal";
			this->button1->UseCompatibleTextRendering = true;
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &Dashboard::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button2->Location = System::Drawing::Point(162, 244);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(483, 59);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Teacher Portal";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Dashboard::button2_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14));
			this->button4->Location = System::Drawing::Point(162, 321);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(483, 59);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Admin Portal";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &Dashboard::button4_Click);
			// 
			// Dashboard
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 503);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"Dashboard";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Dashboard";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		StudentPortal^ form = gcnew StudentPortal();
		form->Show();
		this->Hide();
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	TeacherPortal^ form = gcnew TeacherPortal();
	form->Show();
	this->Hide();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AdminPortalLogin^ form = gcnew AdminPortalLogin();
	form->Show();
	this->Hide();
}
};
}
