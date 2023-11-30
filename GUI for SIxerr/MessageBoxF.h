#pragma once
#include "LOSF.h"
#include "MessageClassF.h"
#include "MessagePresenter.h"
#include "UserF.h"
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
	/// MessageBoxF 摘要
	/// </summary>
	public ref class MessageBoxF : public System::Windows::Forms::Form
	{
	private: List<MessageClassF^>^ messageClassListF;
	public:
		MessageBoxF()
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}

	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~MessageBoxF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel2;
	protected:

	private:
		/// <summary>
		/// 必需的设计器变量。
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 设计器支持所需的方法 - 不要修改
		/// 使用代码编辑器修改此方法的内容。
		/// </summary>
		void InitializeComponent(void)
		{
			this->flowLayoutPanel2 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->SuspendLayout();
			// 
			// flowLayoutPanel2
			// 
			this->flowLayoutPanel2->Dock = System::Windows::Forms::DockStyle::Fill;
			this->flowLayoutPanel2->Location = System::Drawing::Point(0, 0);
			this->flowLayoutPanel2->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->flowLayoutPanel2->Name = L"flowLayoutPanel2";
			this->flowLayoutPanel2->Size = System::Drawing::Size(487, 206);
			this->flowLayoutPanel2->TabIndex = 1;
			// 
			// MessageBoxF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(487, 206);
			this->Controls->Add(this->flowLayoutPanel2);
			this->Name = L"MessageBoxF";
			this->Text = L"MessageBoxF";
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void MassagesBox_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	//private: List<MessageClassF^>^ messageClassListF;
	private: System::Void flowLayoutPanel2_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
		/*String^ UserID = LOSF::userF->Password;
		String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\jiang\\DataBase\\SixerrDB.accdb";
		String^ sqlQuery = "SELECT * FROM [Message] WHERE ID_Reciver=@ID_Reciver ORDER BY [Coming_Date] DES";

		flowLayoutPanel2->Controls->Clear();

		try {
			OleDbConnection^ connection = gcnew OleDbConnection(connString);
			connection->Open();
			OleDbCommand^ command = gcnew OleDbCommand(sqlQuery, connection);

			command->Parameters->AddWithValue("@ID_Reciver", UserID);

			OleDbDataReader^ reader = command->ExecuteReader();
			messageClassListF = gcnew List<MessageClassF^>();
			while (reader->Read()) {
				MessageClassF^ messageClassF = gcnew MessageClassF();
				messageClassF->ID_Sender = reader["ID_Sender"]->ToString();
				messageClassF->ID_Reciver = reader["ID_Reciver"]->ToString();
				messageClassF->Message = reader["Message"]->ToString();
				messageClassF->ComingDate = Convert::ToDateTime(reader["Coming_Date"]);
			}
			reader->Close();


			for each (MessageClassF ^ messageClassF in messageClassListF) {
				MessagePresenter^ messagePresenter = gcnew MessagePresenter();
				messagePresenter->PopulateUserFrom(messageClassF->ID_Sender);
				messagePresenter->PopulateMessage(messageClassF->Message);
				messagePresenter->PopulateDate(messageClassF->ComingDate);
				messagePresenter->PopulateToUser(messageClassF->ID_Reciver);


				flowLayoutPanel2->Controls->Add(messagePresenter);
				connection->Close();
			}
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to connect to database " + ex->Message + UserID, "Database Connection Error", MessageBoxButtons::OK);
		}*/
	}
	};
}
