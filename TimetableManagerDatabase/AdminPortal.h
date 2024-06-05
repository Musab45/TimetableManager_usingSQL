#pragma once
#include <msclr/marshal_cppstd.h>
#include"AddStudent.h"
#include"RemoveStudent.h"
#include"AddTeacher.h"
#include"AddCourse.h"

namespace TimetableManagerDatabase {

	using namespace System;
	using namespace System::Data::SqlClient;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for AdminPortal
	/// </summary>
	public ref class AdminPortal : public System::Windows::Forms::Form
	{
	public:
		AdminPortal(void)
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
		~AdminPortal()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Panel^ panel1;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::Button^ button6;





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
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->panel1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 24, static_cast<System::Drawing::FontStyle>((System::Drawing::FontStyle::Bold | System::Drawing::FontStyle::Underline)),
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(0)));
			this->label1->Location = System::Drawing::Point(299, 71);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(261, 46);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Admin Portal";
			this->label1->Click += gcnew System::EventHandler(this, &AdminPortal::label1_Click);
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(209, 150);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(112, 62);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Add Student";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &AdminPortal::button1_Click_1);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button2->Location = System::Drawing::Point(209, 230);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(459, 62);
			this->button2->TabIndex = 2;
			this->button2->Text = L"Add Teacher";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &AdminPortal::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12));
			this->button3->Location = System::Drawing::Point(209, 311);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(459, 62);
			this->button3->TabIndex = 3;
			this->button3->Text = L"Add Course";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &AdminPortal::button3_Click);
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button4->Location = System::Drawing::Point(327, 150);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(112, 62);
			this->button4->TabIndex = 4;
			this->button4->Text = L"Remove Student";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &AdminPortal::button4_Click);
			// 
			// button5
			// 
			this->button5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 10.2F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button5->Location = System::Drawing::Point(445, 150);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(223, 62);
			this->button5->TabIndex = 5;
			this->button5->Text = L"View Students";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &AdminPortal::button5_Click);
			// 
			// panel1
			// 
			this->panel1->Controls->Add(this->button6);
			this->panel1->Controls->Add(this->dataGridView1);
			this->panel1->Dock = System::Windows::Forms::DockStyle::Fill;
			this->panel1->Location = System::Drawing::Point(0, 0);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(882, 553);
			this->panel1->TabIndex = 6;
			this->panel1->Visible = false;
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(0, 0);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(882, 483);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &AdminPortal::dataGridView1_CellContentClick);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(369, 490);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(126, 51);
			this->button6->TabIndex = 1;
			this->button6->Text = L"Close";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &AdminPortal::button6_Click);
			// 
			// AdminPortal
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(882, 553);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Name = L"AdminPortal";
			this->Text = L"AdminPortal";
			this->panel1->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void label2_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) 
	{

	}
private: System::Void button1_Click_1(System::Object^ sender, System::EventArgs^ e) 
{
	AddStudent^ form = gcnew AddStudent();
	form->Show();
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AddTeacher^ form = gcnew AddTeacher();
	form->Show();
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) 
{
	AddCourse^ form = gcnew AddCourse();
	form->Show();
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) 
{
	RemoveStudent^ form = gcnew RemoveStudent();
	form->Show();
}
private: System::Void dataGridView1_CellContentClick(System::Object^ sender, System::Windows::Forms::DataGridViewCellEventArgs^ e) {
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel1->Visible = true;

	try {
		SqlConnection^ con = gcnew SqlConnection();
		SqlCommand^ cmd = gcnew SqlCommand();
		DataTable^ tbl = gcnew DataTable();
		SqlDataReader^ reader;
		con->ConnectionString = "Data Source=THINKPAD;Initial Catalog=Temp;Integrated Security=True";
		con->Open();
		SqlCommand^ myCommand = gcnew SqlCommand("SELECT * FROM dbo.Students; ", con);
		reader = myCommand->ExecuteReader();
		tbl->Load(reader);
		reader->Close();
		con->Close();
		dataGridView1->DataSource = tbl;
	}
	catch (Exception^ ex) {
		MessageBox::Show("DB_Error");
	}
}
private: System::Void button6_Click(System::Object^ sender, System::EventArgs^ e) 
{
	panel1->Visible = false;
}
};
}
