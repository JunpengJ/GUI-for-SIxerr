#pragma once
#include "MessageClass.h"
#include "LOSF.h"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SendMessageF 摘要
	/// </summary>
	public ref class SendMessageF : public System::Windows::Forms::Form
	{
	public:
		SendMessageF(void)
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
		~SendMessageF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ cancel;
	protected:
	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::TextBox^ Message;
	private: System::Windows::Forms::TextBox^ ToUserId;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox1;

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
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->Message = (gcnew System::Windows::Forms::TextBox());
			this->ToUserId = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(170, 207);
			this->cancel->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(101, 40);
			this->cancel->TabIndex = 12;
			this->cancel->Text = L"Cencal";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &SendMessageF::cancel_Click);
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(14, 207);
			this->submit->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(101, 40);
			this->submit->TabIndex = 11;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &SendMessageF::submit_Click);
			// 
			// Message
			// 
			this->Message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Message->Location = System::Drawing::Point(4, 64);
			this->Message->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->Message->Multiline = true;
			this->Message->Name = L"Message";
			this->Message->Size = System::Drawing::Size(277, 127);
			this->Message->TabIndex = 10;
			this->Message->TextChanged += gcnew System::EventHandler(this, &SendMessageF::Message_TextChanged);
			// 
			// ToUserId
			// 
			this->ToUserId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToUserId->Location = System::Drawing::Point(128, 14);
			this->ToUserId->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->ToUserId->Name = L"ToUserId";
			this->ToUserId->Size = System::Drawing::Size(152, 26);
			this->ToUserId->TabIndex = 9;
			this->ToUserId->TextChanged += gcnew System::EventHandler(this, &SendMessageF::ToUserId_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(4, 35);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 19);
			this->textBox3->TabIndex = 8;
			this->textBox3->Text = L"Message:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(4, 14);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 1, 2, 1);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(86, 19);
			this->textBox1->TabIndex = 7;
			this->textBox1->Text = L"To User ID:";
			// 
			// SendMessageF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 261);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->Message);
			this->Controls->Add(this->ToUserId);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Name = L"SendMessageF";
			this->Text = L"SendMessageF";
			this->Load += gcnew System::EventHandler(this, &SendMessageF::SendMessageF_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SendMessageF_Load(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void ToUserId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Message_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
	String^ fromUser = LOSF::user->Password;
	String^ toUser = this->ToUserId->Text;
	String^ messages = this->Message->Text;
	String^ sqlQuery = "INSERT INTO [Message] (ID_Sender,ID_Reciver,Message,Coming_Date) VALUES (@Username,@ID_Reciver,@Message,Date());";
	String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\jiang\\DataBase\\SixerrDB.accdb";
	if (toUser->Length == 0 || messages->Length == 0) {
		MessageBox::Show("User ID or Message should not empty.", "", MessageBoxButtons::OK);
		return;
	}
	try {
		OleDbConnection^ connection = gcnew OleDbConnection(connString);
		connection->Open();
		OleDbCommand^ command = gcnew OleDbCommand(sqlQuery, connection);
		command->Parameters->Add(gcnew OleDbParameter("@Username", OleDbType::VarChar))->Value = fromUser;
		command->Parameters->Add(gcnew OleDbParameter("@ID_Reciver", OleDbType::VarChar))->Value = toUser;
		command->Parameters->Add(gcnew OleDbParameter("@Message", OleDbType::VarChar))->Value = messages;
		command->ExecuteNonQuery();

		MessageBox::Show("Message sented successfully!" + fromUser, "Success", MessageBoxButtons::OK);
		connection->Close();

	}
	catch (Exception^ ex) {
		MessageBox::Show("Failed to send message" + ex->Message, "Register Failure", MessageBoxButtons::OK);
	}
}
private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
}
};
}
