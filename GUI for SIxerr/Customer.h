#pragma once
#include "FindFreelancers.h"
#include "Messages.h"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Customer 摘要
	/// </summary>
	public ref class Customer : public System::Windows::Forms::Form
	{
	public:
		Customer(void)
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
		~Customer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Button^ reqSubmit;
	private: System::Windows::Forms::TextBox^ customerid;

	protected:

	protected:




	private: System::Windows::Forms::TextBox^ password;

	private: System::Windows::Forms::TextBox^ id;

	private: System::Windows::Forms::TextBox^ pswd;



	private: System::Windows::Forms::TextBox^ accountState;
	private: System::Windows::Forms::TextBox^ requirements;
	private: System::Windows::Forms::TextBox^ req;
	private: System::Windows::Forms::TextBox^ submitState;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ pjtName;
	private: System::Windows::Forms::Button^ fandfrelance;
	private: System::Windows::Forms::Button^ message;


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
			this->login = (gcnew System::Windows::Forms::Button());
			this->reqSubmit = (gcnew System::Windows::Forms::Button());
			this->customerid = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->pswd = (gcnew System::Windows::Forms::TextBox());
			this->accountState = (gcnew System::Windows::Forms::TextBox());
			this->requirements = (gcnew System::Windows::Forms::TextBox());
			this->req = (gcnew System::Windows::Forms::TextBox());
			this->submitState = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pjtName = (gcnew System::Windows::Forms::TextBox());
			this->fandfrelance = (gcnew System::Windows::Forms::Button());
			this->message = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// login
			// 
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(613, 135);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(161, 55);
			this->login->TabIndex = 0;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Customer::login_Click);
			// 
			// reqSubmit
			// 
			this->reqSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqSubmit->Location = System::Drawing::Point(842, 659);
			this->reqSubmit->Name = L"reqSubmit";
			this->reqSubmit->Size = System::Drawing::Size(220, 62);
			this->reqSubmit->TabIndex = 1;
			this->reqSubmit->Text = L"Submit";
			this->reqSubmit->UseVisualStyleBackColor = true;
			this->reqSubmit->Click += gcnew System::EventHandler(this, &Customer::reqSubmit_Click);
			// 
			// customerid
			// 
			this->customerid->BackColor = System::Drawing::SystemColors::Control;
			this->customerid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->customerid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerid->Location = System::Drawing::Point(77, 37);
			this->customerid->Name = L"customerid";
			this->customerid->ReadOnly = true;
			this->customerid->Size = System::Drawing::Size(191, 19);
			this->customerid->TabIndex = 4;
			this->customerid->Text = L"Cutomer ID\r\n";
			this->customerid->TextChanged += gcnew System::EventHandler(this, &Customer::textBox1_TextChanged);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::SystemColors::Control;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(77, 80);
			this->password->Name = L"password";
			this->password->ReadOnly = true;
			this->password->Size = System::Drawing::Size(191, 19);
			this->password->TabIndex = 5;
			this->password->Text = L"Password\r\n\r\n";
			// 
			// id
			// 
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(274, 37);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(298, 26);
			this->id->TabIndex = 6;
			this->id->TextChanged += gcnew System::EventHandler(this, &Customer::id_TextChanged);
			// 
			// pswd
			// 
			this->pswd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pswd->Location = System::Drawing::Point(274, 87);
			this->pswd->Name = L"pswd";
			this->pswd->Size = System::Drawing::Size(298, 26);
			this->pswd->TabIndex = 7;
			this->pswd->UseSystemPasswordChar = true;
			this->pswd->TextChanged += gcnew System::EventHandler(this, &Customer::pswd_TextChanged);
			// 
			// accountState
			// 
			this->accountState->BackColor = System::Drawing::SystemColors::Control;
			this->accountState->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->accountState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountState->Location = System::Drawing::Point(12, 144);
			this->accountState->Name = L"accountState";
			this->accountState->ReadOnly = true;
			this->accountState->Size = System::Drawing::Size(503, 19);
			this->accountState->TabIndex = 8;
			this->accountState->TextChanged += gcnew System::EventHandler(this, &Customer::accountState_TextChanged);
			// 
			// requirements
			// 
			this->requirements->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->requirements->Location = System::Drawing::Point(12, 298);
			this->requirements->Multiline = true;
			this->requirements->Name = L"requirements";
			this->requirements->Size = System::Drawing::Size(1050, 355);
			this->requirements->TabIndex = 9;
			// 
			// req
			// 
			this->req->BackColor = System::Drawing::SystemColors::Control;
			this->req->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->req->Location = System::Drawing::Point(12, 255);
			this->req->Name = L"req";
			this->req->ReadOnly = true;
			this->req->Size = System::Drawing::Size(375, 19);
			this->req->TabIndex = 10;
			this->req->Text = L"Project Requirement:";
			// 
			// submitState
			// 
			this->submitState->BackColor = System::Drawing::SystemColors::Control;
			this->submitState->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->submitState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitState->Location = System::Drawing::Point(12, 659);
			this->submitState->Name = L"submitState";
			this->submitState->ReadOnly = true;
			this->submitState->Size = System::Drawing::Size(503, 19);
			this->submitState->TabIndex = 11;
			this->submitState->TextChanged += gcnew System::EventHandler(this, &Customer::submitState_TextChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 212);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(218, 19);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Project Name :";
			// 
			// pjtName
			// 
			this->pjtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pjtName->Location = System::Drawing::Point(236, 209);
			this->pjtName->Name = L"pjtName";
			this->pjtName->Size = System::Drawing::Size(788, 26);
			this->pjtName->TabIndex = 13;
			// 
			// fandfrelance
			// 
			this->fandfrelance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fandfrelance->Location = System::Drawing::Point(555, 659);
			this->fandfrelance->Name = L"fandfrelance";
			this->fandfrelance->Size = System::Drawing::Size(281, 62);
			this->fandfrelance->TabIndex = 14;
			this->fandfrelance->Text = L"Fand Freelancers";
			this->fandfrelance->UseVisualStyleBackColor = true;
			this->fandfrelance->Click += gcnew System::EventHandler(this, &Customer::fandfrelance_Click);
			// 
			// message
			// 
			this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->message->Location = System::Drawing::Point(815, 135);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(209, 55);
			this->message->TabIndex = 15;
			this->message->Text = L"Message";
			this->message->UseVisualStyleBackColor = true;
			this->message->Click += gcnew System::EventHandler(this, &Customer::message_Click);
			// 
			// Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(1074, 729);
			this->Controls->Add(this->message);
			this->Controls->Add(this->fandfrelance);
			this->Controls->Add(this->pjtName);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->submitState);
			this->Controls->Add(this->req);
			this->Controls->Add(this->requirements);
			this->Controls->Add(this->accountState);
			this->Controls->Add(this->pswd);
			this->Controls->Add(this->id);
			this->Controls->Add(this->password);
			this->Controls->Add(this->customerid);
			this->Controls->Add(this->reqSubmit);
			this->Controls->Add(this->login);
			this->Location = System::Drawing::Point(0, 50);
			this->Name = L"Customer";
			this->Text = L"Customer";
			this->Load += gcnew System::EventHandler(this, &Customer::Customer_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Customer_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
	if (id->Text == "Admin" && pswd->Text == "123456") {
		accountState->Text = "Cuotomer loged in.";
		}
	else {
		accountState->Text = "Please cheak the ID and the Password.";
	}
}
private: System::Void accountState_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pswd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reqSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pjtName->Text->Empty && requirements->Text->Empty) {
		submitState->Text = "The Project Name and Requirement should not empty.";
	}
	else {
		submitState->Text = "Requirement for the project has submited.";
	}
}
private: System::Void submitState_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fandfrelance_Click(System::Object^ sender, System::EventArgs^ e) {
		FindFreelancers^ findFreelancers = gcnew FindFreelancers();
		findFreelancers->Show();
}
private: System::Void message_Click(System::Object^ sender, System::EventArgs^ e) {
		Messages^ message = gcnew Messages();
		message->Show();
}
};
}
