#pragma once
#include <msclr/marshal_cppstd.h>
#include"AdminPortal.h"

namespace TimetableManagerDatabase {

	using namespace System;
	using namespace System::Data;
	using namespace System::Data::SqlClient;
	using namespace System::Xml;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace msclr::interop;

	/// <summary>
	/// Summary for AdminPortalLogin
	/// </summary>
	public ref class AdminPortalLogin : public System::Windows::Forms::Form
	{
	public:
		AdminPortalLogin(void)
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
		~AdminPortalLogin()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::Button^ button6;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button2;
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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
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
			this->label1->Location = System::Drawing::Point(277, 75);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(253, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Login";
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox1->Location = System::Drawing::Point(274, 209);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(264, 30);
			this->textBox1->TabIndex = 1;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label2->Location = System::Drawing::Point(280, 171);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(92, 25);
			this->label2->TabIndex = 2;
			this->label2->Text = L"Admin ID";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->label3->Location = System::Drawing::Point(280, 261);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(98, 25);
			this->label3->TabIndex = 4;
			this->label3->Text = L"Password";
			// 
			// textBox2
			// 
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->textBox2->Location = System::Drawing::Point(274, 299);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(264, 30);
			this->textBox2->TabIndex = 3;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(346, 354);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(97, 34);
			this->button1->TabIndex = 5;
			this->button1->Text = L"Login";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPortalLogin::button1_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->button5);
			this->panel1->Controls->Add(this->button4);
			this->panel1->Controls->Add(this->button3);
			this->panel1->Location = System::Drawing::Point(1, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(352, 522);
			this->panel1->TabIndex = 7;
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
			this->button6->Click += gcnew System::EventHandler(this, &AdminPortalLogin::button6_Click);
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
			this->button4->Text = L"Teacher Portal";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(56, 65);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(233, 46);
			this->button3->TabIndex = 0;
			this->button3->Text = L"Student Portal";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(12, 12);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(61, 32);
			this->button2->TabIndex = 8;
			this->button2->Text = L"///";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPortalLogin::button2_Click);
			// 
			// AdminPortalLogin
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(832, 503);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->label1);
			this->Name = L"AdminPortalLogin";
			this->Text = L"AdminPortalLogin";
			this->Load += gcnew System::EventHandler(this, &AdminPortalLogin::AdminPortalLogin_Load);
			this->panel1->ResumeLayout(false);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	bool login(std::string username, std::string password, std::string usernamedb, std::string passworddb)
	{
		if (usernamedb == username && passworddb == password)
			return true;
		else
			return false;
	}

	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
	{
		panel1->Visible = true;
		button2->Visible = false;
	}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel1->Visible = false;
	button2->Visible = true;
}
private: System::Void AdminPortalLogin_Load(System::Object^ sender, System::EventArgs^ e) {
}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		std::string name = msclr::interop::marshal_as<std::string>(textBox1->Text);
		std::string password = msclr::interop::marshal_as<std::string>(textBox2->Text);
		if (name != "" && password != "")
		{
			try
			{
				SqlConnection^ connection = gcnew SqlConnection("Data Source=THINKPAD;Initial Catalog=Temp;Integrated Security=True");
				connection->Open();
				SqlCommand^ cmd = gcnew SqlCommand("SELECT [name], [password] FROM [AdminLogin]", connection);
				SqlDataReader^ reader = cmd->ExecuteReader();
				bool flag = false;

				while (reader->Read())
				{
					String^ namedb_S = reader["name"]->ToString();
					String^ passworddb_S = reader["password"]->ToString();

					std::string namedb = marshal_as<std::string>(namedb_S);
					std::string passworddb = marshal_as<std::string>(passworddb_S);

					flag = login(name, password, namedb, passworddb);
					if (flag)
					{
						break;
					}
				}

				reader->Close();
				connection->Close();

				if (flag)
				{
					MessageBox::Show("Login Successfull!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
					AdminPortal^ form = gcnew AdminPortal();
					form->Show();
					this->Hide();
				}
				else
				{
					MessageBox::Show("Login Failed!", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Error);
				}
			}
			catch (Exception^ exc)
			{
				MessageBox::Show(exc->Message);
			}
		}
		else
		{
			MessageBox::Show("Please Enter Username and Password.", "Notice", MessageBoxButtons::OK, MessageBoxIcon::Asterisk);
		}
	}
};
}
