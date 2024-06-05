#pragma once
#include <msclr/marshal_cppstd.h>

namespace TimetableManagerDatabase {

	using namespace System;
	using namespace System::Data::SqlClient;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for AddCourse
	/// </summary>
	public ref class AddCourse : public System::Windows::Forms::Form
	{
	public:
		AddCourse(void)
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
		~AddCourse()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ button1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label1;

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
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(141, 248);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(87, 32);
			this->button1->TabIndex = 11;
			this->button1->Text = L"Add";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AddCourse::button1_Click);
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox2->Location = System::Drawing::Point(53, 192);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(251, 26);
			this->textBox2->TabIndex = 10;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label3->Location = System::Drawing::Point(49, 169);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(123, 20);
			this->label3->TabIndex = 9;
			this->label3->Text = L"Course Name";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->Location = System::Drawing::Point(53, 133);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(251, 26);
			this->textBox1->TabIndex = 8;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(49, 110);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(94, 20);
			this->label2->TabIndex = 7;
			this->label2->Text = L"Course ID";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 18, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(93, 28);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(184, 36);
			this->label1->TabIndex = 6;
			this->label1->Text = L"Add Course";
			// 
			// AddCourse
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 308);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"AddCourse";
			this->Text = L"AddCourse";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		std::string id = marshal_as<std::string>(textBox1->Text);
		std::string name = marshal_as<std::string>(textBox2->Text);

		try
		{
			SqlConnection^ connection = gcnew SqlConnection("Data Source=THINKPAD;Initial Catalog=Temp;Integrated Security=True");
			connection->Open();
			SqlCommand^ cmd = gcnew SqlCommand();
			cmd->Connection = connection;
			cmd->CommandText = "INSERT INTO dbo.Courses (course_id, course_name) VALUES (@id, @name)";
			cmd->Parameters->AddWithValue("@id", textBox1->Text);
			cmd->Parameters->AddWithValue("@name", textBox2->Text);
			cmd->ExecuteNonQuery();
			connection->Close();
			MessageBox::Show("Course Added Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			this->Close();
		}
		catch (Exception^ exc)
		{
			MessageBox::Show(exc->Message);
		}
	}
};
}
