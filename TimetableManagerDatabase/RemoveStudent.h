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
	/// Summary for RemoveStudent
	/// </summary>
	public ref class RemoveStudent : public System::Windows::Forms::Form
	{
	public:
		RemoveStudent(void)
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
		~RemoveStudent()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ button1;
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
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(82, 37);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(171, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Remove Student";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->label2->Location = System::Drawing::Point(63, 114);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(98, 20);
			this->label2->TabIndex = 1;
			this->label2->Text = L"Student ID";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10));
			this->textBox1->Location = System::Drawing::Point(67, 137);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(201, 26);
			this->textBox1->TabIndex = 2;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(131, 180);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 3;
			this->button1->Text = L"Remove";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &RemoveStudent::button1_Click);
			// 
			// RemoveStudent
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(352, 308);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->Name = L"RemoveStudent";
			this->Text = L"RemoveStudent";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		std::string id = marshal_as<std::string>(textBox1->Text);

		try
		{
			SqlConnection^ connection = gcnew SqlConnection("Data Source=THINKPAD;Initial Catalog=Temp;Integrated Security=True");
			connection->Open();
			SqlCommand^ cmd = gcnew SqlCommand();
			cmd->Connection = connection;
			cmd->CommandText = "DELETE FROM dbo.Students WHERE student_id=@id";
			cmd->Parameters->AddWithValue("@id", textBox1->Text);
			cmd->ExecuteNonQuery();
			connection->Close();
			MessageBox::Show("Student Removed Successfully!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
			this->Close();
		}
		catch (Exception^ exc)
		{
			MessageBox::Show(exc->Message);
		}
	}
	};
}
