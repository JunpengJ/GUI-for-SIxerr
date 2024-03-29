#pragma once
#include "MessageClass.h"
#include "LOSC.h"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Data::OleDb;

	/// <summary>
	/// SendMessage 摘要
	/// </summary>
	public ref class SendMessage : public System::Windows::Forms::Form
	{
	public:
		SendMessage(User ^user)
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
		~SendMessage()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	protected:
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::Button^ cancel;
	private: System::Windows::Forms::TextBox^ Message;
	private: System::Windows::Forms::Button^ submit;
	private: System::Windows::Forms::TextBox^ ToUserId;

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
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->Message = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->ToUserId = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(6, 17);
			this->textBox1->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(111, 19);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"To:";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &SendMessage::textBox1_TextChanged);
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(6, 48);
			this->textBox3->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(86, 19);
			this->textBox3->TabIndex = 2;
			this->textBox3->Text = L"Message:";
			this->textBox3->TextChanged += gcnew System::EventHandler(this, &SendMessage::textBox3_TextChanged);
			// 
			// cancel
			// 
			this->cancel->Location = System::Drawing::Point(11, 221);
			this->cancel->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(101, 43);
			this->cancel->TabIndex = 6;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &SendMessage::button2_Click);
			// 
			// Message
			// 
			this->Message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->Message->Location = System::Drawing::Point(6, 71);
			this->Message->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->Message->Multiline = true;
			this->Message->Name = L"Message";
			this->Message->Size = System::Drawing::Size(277, 137);
			this->Message->TabIndex = 4;
			this->Message->TextChanged += gcnew System::EventHandler(this, &SendMessage::Message_TextChanged);
			// 
			// submit
			// 
			this->submit->Location = System::Drawing::Point(175, 221);
			this->submit->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(101, 43);
			this->submit->TabIndex = 5;
			this->submit->Text = L"Send";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &SendMessage::button1_Click);
			// 
			// ToUserId
			// 
			this->ToUserId->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ToUserId->Location = System::Drawing::Point(130, 17);
			this->ToUserId->Margin = System::Windows::Forms::Padding(2, 2, 2, 2);
			this->ToUserId->Name = L"ToUserId";
			this->ToUserId->Size = System::Drawing::Size(152, 26);
			this->ToUserId->TabIndex = 3;
			this->ToUserId->TextChanged += gcnew System::EventHandler(this, &SendMessage::ToUserId_TextChanged);
			// 
			// SendMessage
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(287, 275);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->Message);
			this->Controls->Add(this->ToUserId);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox1);
			this->Name = L"SendMessage";
			this->Text = L"Send Message";
			this->Load += gcnew System::EventHandler(this, &SendMessage::SendMessage_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void SendMessage_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox3_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void ToUserId_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	public: MessageClass^ message = nullptr;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		String^ fromUser = LOSC::user->Password;
		String^ toUser = this->ToUserId->Text;
		String^ messages = this->Message->Text;
		String^ sqlQuery = "INSERT INTO [Message] (ID_Sender,ID_Reciever,Message,Coming_Date) VALUES (@Username,@ID_Reciever,@Message,Date());";
		//String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\jiang\\DataBase\\SixerrDB.accdb";
		String^ connString = "Provider=Microsoft.ACE.OLEDB.12.0;Data Source=C:\\Users\\mckay\\Documents\\SixerrDB.accdb";

		if (toUser->Length == 0 || messages->Length == 0) {
			MessageBox::Show("User ID or Message should not empty.", "", MessageBoxButtons::OK);
			return;
		}
		try {
			OleDbConnection^ connection = gcnew OleDbConnection(connString);
			connection->Open();
			OleDbCommand^ command = gcnew OleDbCommand(sqlQuery, connection);
			command->Parameters->Add(gcnew OleDbParameter("@Username", OleDbType::VarChar))->Value = fromUser;
			command->Parameters->Add(gcnew OleDbParameter("@ID_Reciever", OleDbType::VarChar))->Value = toUser;
			command->Parameters->Add(gcnew OleDbParameter("@Message", OleDbType::VarChar))->Value = messages;
			command->ExecuteNonQuery();

			MessageBox::Show("Message sented successfully!"+ fromUser, "Success", MessageBoxButtons::OK);
			connection->Close();
		}
		catch (Exception^ ex) {
			MessageBox::Show("Failed to send message" + ex->Message, "Register Failure", MessageBoxButtons::OK);
		}
	}
private: System::Void Message_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
	this->Close();
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
