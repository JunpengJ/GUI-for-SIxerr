#pragma once
#include "LOSC.h"
#include "MessageClass.h"
#include "MessagePresenter.h"
#include "User.h"
#include <list>

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Collections::Generic;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// MassagesBox 摘要
	/// </summary>
	public ref class MassagesBox : public System::Windows::Forms::Form
	{
	public:
		MassagesBox(/*User^ user*/)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
			DisplayMessages();
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MassagesBox()
		{
			if (components)
			{
				delete components;
			}
		}

	protected:
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	private: System::Windows::Forms::Button^ button1;

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->AutoScroll = true;
			this->flowLayoutPanel2->AutoScrollMargin = System::Drawing::Size(534, 350);
			this->flowLayoutPanel2->FlowDirection = System::Windows::Forms::FlowDirection::RightToLeft;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(2);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(540, 490);
			this->flowLayoutPanel2->TabIndex = 0;
			this->flowLayoutPanel2->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &MassagesBox::flowLayoutPanel2_Paint);
			// 
			// button1
			// 
			this->button1->BackColor = System::Drawing::SystemColors::Control;
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 11.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->button1->Location = System::Drawing::Point(407, 495);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(129, 54);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Back";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MassagesBox::button1_Click);
			// 
			// MassagesBox
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(544, 561);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->flowLayoutPanel2);
			this->MaximizeBox = false;
			this->MaximumSize = System::Drawing::Size(560, 600);
			this->MinimumSize = System::Drawing::Size(560, 600);
			this->Name = L"MassagesBox";
			this->Text = L"Messages";
			this->Load += gcnew System::EventHandler(this, &MassagesBox::MassagesBox_Load);
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MassagesBox_Load(System::Object^ sender, System::EventArgs^ e) {
	}
		   //private: List<MessageClass^>^ messageClassList;
	private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
	}
	private: void DisplayMessages() {
		   List<MessageClass^>^ messageClassList;
		   String^ UserID;

		   //String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\jiang\\DataBase\\SixerrDB.accdb";
		   String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\mckay\\Documents\\SixerrDB.accdb";
		   String^ sqlQuery = "SELECT * FROM Message WHERE ID_Reciever=@ID_Reciever OR ID_Sender=@ID_Reciever ORDER BY [Coming_Date] ASC";
		   if (LOSC::CustomerStatus == true) {
			   UserID = LOSC::user->Password;
		   }
		   else if (LOSC::FreelancerStatus == true) {
			   UserID = LOSC::user->Password;
		   }
		   else UserID = "none";

		   flowLayoutPanel2->Controls->Clear();
		   OleDbConnection^ connection = gcnew OleDbConnection(connString);
		   try {
			   connection->Open();
			   OleDbCommand^ command = gcnew OleDbCommand(sqlQuery, connection);
			   command->Parameters->AddWithValue("@ID_Reciever", UserID);

			   OleDbDataReader^ reader = command->ExecuteReader();
			   messageClassList = gcnew List<MessageClass^>();
			   while (reader->Read()) {
				   MessageClass^ messageClass = gcnew MessageClass();
				   messageClass->ID_Sender = reader["ID_Sender"]->ToString();
				   messageClass->ID_Reciever = reader["ID_Reciever"]->ToString();
				   messageClass->Message = reader["Message"]->ToString();
				   messageClass->ComingDate = Convert::ToDateTime(reader["Coming_Date"]);

				   messageClassList->Add(messageClass);
			   }
			   reader->Close();


			   for each (MessageClass ^ messageClass in messageClassList) {
				   MessagePresenter^ messagePresenter = gcnew MessagePresenter();
				   messagePresenter->PopulateUserFrom(messageClass->ID_Sender);
				   messagePresenter->PopulateMessage(messageClass->Message);
				   messagePresenter->PopulateDate(messageClass->ComingDate);
				   messagePresenter->PopulateToUser(messageClass->ID_Reciever);



				   flowLayoutPanel2->Controls->Add(messagePresenter);
			   }
			   connection->Close();
		   }
		   catch (Exception^ ex) {
			   MessageBox::Show("Failed to connect to database " + ex->Message, "Database Connection Error", MessageBoxButtons::OK);
		   }
	}
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
};
}
