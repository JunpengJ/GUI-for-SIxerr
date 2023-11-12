#pragma once

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Freelencer 摘要
	/// </summary>
	public ref class Freelencer : public System::Windows::Forms::Form
	{
	public:
		Freelencer(void)
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
		~Freelencer()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ customerid;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ fid;
	private: System::Windows::Forms::TextBox^ fpswd;


	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::TextBox^ accountState;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ req;
	private: System::Windows::Forms::TextBox^ flnName;

	private: System::Windows::Forms::TextBox^ introducation;


	private: System::Windows::Forms::TextBox^ submitState;
	private: System::Windows::Forms::Button^ intrSubmit;


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
			this->customerid = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->fid = (gcnew System::Windows::Forms::TextBox());
			this->fpswd = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->accountState = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->req = (gcnew System::Windows::Forms::TextBox());
			this->flnName = (gcnew System::Windows::Forms::TextBox());
			this->introducation = (gcnew System::Windows::Forms::TextBox());
			this->submitState = (gcnew System::Windows::Forms::TextBox());
			this->intrSubmit = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// customerid
			// 
			this->customerid->BackColor = System::Drawing::SystemColors::Control;
			this->customerid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->customerid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerid->Location = System::Drawing::Point(119, 42);
			this->customerid->Name = L"customerid";
			this->customerid->ReadOnly = true;
			this->customerid->Size = System::Drawing::Size(191, 37);
			this->customerid->TabIndex = 5;
			this->customerid->Text = L"Freelancer ID\r\n";
			this->customerid->TextChanged += gcnew System::EventHandler(this, &Freelencer::customerid_TextChanged);
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::SystemColors::Control;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(119, 85);
			this->password->Name = L"password";
			this->password->ReadOnly = true;
			this->password->Size = System::Drawing::Size(191, 37);
			this->password->TabIndex = 6;
			this->password->Text = L"Password\r\n\r\n";
			// 
			// fid
			// 
			this->fid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fid->Location = System::Drawing::Point(373, 42);
			this->fid->Name = L"fid";
			this->fid->Size = System::Drawing::Size(298, 44);
			this->fid->TabIndex = 7;
			this->fid->TextChanged += gcnew System::EventHandler(this, &Freelencer::fid_TextChanged);
			// 
			// fpswd
			// 
			this->fpswd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fpswd->Location = System::Drawing::Point(373, 92);
			this->fpswd->Name = L"fpswd";
			this->fpswd->Size = System::Drawing::Size(298, 44);
			this->fpswd->TabIndex = 8;
			this->fpswd->UseSystemPasswordChar = true;
			this->fpswd->TextChanged += gcnew System::EventHandler(this, &Freelencer::fpswd_TextChanged);
			// 
			// login
			// 
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(738, 133);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(161, 55);
			this->login->TabIndex = 9;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			this->login->Click += gcnew System::EventHandler(this, &Freelencer::login_Click);
			// 
			// accountState
			// 
			this->accountState->BackColor = System::Drawing::SystemColors::Control;
			this->accountState->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->accountState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->accountState->Location = System::Drawing::Point(12, 142);
			this->accountState->Name = L"accountState";
			this->accountState->ReadOnly = true;
			this->accountState->Size = System::Drawing::Size(503, 37);
			this->accountState->TabIndex = 10;
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 204);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(267, 37);
			this->textBox1->TabIndex = 13;
			this->textBox1->Text = L"Freelancer Name :";
			// 
			// req
			// 
			this->req->BackColor = System::Drawing::SystemColors::Control;
			this->req->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->req->Location = System::Drawing::Point(12, 254);
			this->req->Name = L"req";
			this->req->ReadOnly = true;
			this->req->Size = System::Drawing::Size(375, 37);
			this->req->TabIndex = 14;
			this->req->Text = L"Introducation to Yourself:";
			// 
			// flnName
			// 
			this->flnName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flnName->Location = System::Drawing::Point(285, 204);
			this->flnName->Name = L"flnName";
			this->flnName->Size = System::Drawing::Size(777, 44);
			this->flnName->TabIndex = 15;
			this->flnName->TextChanged += gcnew System::EventHandler(this, &Freelencer::flnName_TextChanged);
			// 
			// introducation
			// 
			this->introducation->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->introducation->Location = System::Drawing::Point(12, 297);
			this->introducation->Multiline = true;
			this->introducation->Name = L"introducation";
			this->introducation->Size = System::Drawing::Size(1050, 355);
			this->introducation->TabIndex = 16;
			this->introducation->TextChanged += gcnew System::EventHandler(this, &Freelencer::introducation_TextChanged);
			// 
			// submitState
			// 
			this->submitState->BackColor = System::Drawing::SystemColors::Control;
			this->submitState->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->submitState->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->submitState->Location = System::Drawing::Point(12, 680);
			this->submitState->Name = L"submitState";
			this->submitState->ReadOnly = true;
			this->submitState->Size = System::Drawing::Size(503, 37);
			this->submitState->TabIndex = 17;
			// 
			// intrSubmit
			// 
			this->intrSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->intrSubmit->Location = System::Drawing::Point(842, 655);
			this->intrSubmit->Name = L"intrSubmit";
			this->intrSubmit->Size = System::Drawing::Size(220, 62);
			this->intrSubmit->TabIndex = 18;
			this->intrSubmit->Text = L"Submit";
			this->intrSubmit->UseVisualStyleBackColor = true;
			this->intrSubmit->Click += gcnew System::EventHandler(this, &Freelencer::intrSubmit_Click);
			// 
			// Freelencer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 729);
			this->Controls->Add(this->intrSubmit);
			this->Controls->Add(this->submitState);
			this->Controls->Add(this->introducation);
			this->Controls->Add(this->flnName);
			this->Controls->Add(this->req);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->accountState);
			this->Controls->Add(this->login);
			this->Controls->Add(this->fpswd);
			this->Controls->Add(this->fid);
			this->Controls->Add(this->password);
			this->Controls->Add(this->customerid);
			this->Name = L"Freelencer";
			this->Text = L"Freelencer";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void customerid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void login_Click(System::Object^ sender, System::EventArgs^ e) {
		if (fid->Text == "Admin" && fpswd->Text == "123456") {
			accountState->Text = "Freelancer loged in.";
		}
		else {
			accountState->Text = "Please cheak the ID and the Password.";
		}
	}
private: System::Void intrSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (flnName->Text->Empty && introducation->Text->Empty) {
		submitState->Text = "The Project Name and Requirement should not empty.";
	}
	else {
		submitState->Text = "Requirement for the project has submited.";
	}
}
private: System::Void flnName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void fpswd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void introducation_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
