#pragma once
#include "SignUpForF.h"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// LOSF 摘要
	/// </summary>
	public ref class LOSF : public System::Windows::Forms::Form
	{
	public:
		LOSF(void)
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
		~LOSF()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ pswd;
	protected:
	private: System::Windows::Forms::TextBox^ id;
	private: System::Windows::Forms::TextBox^ password;
	private: System::Windows::Forms::TextBox^ customerid;
	private: System::Windows::Forms::Button^ login;
	private: System::Windows::Forms::Button^ singUp;

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
			this->pswd = (gcnew System::Windows::Forms::TextBox());
			this->id = (gcnew System::Windows::Forms::TextBox());
			this->password = (gcnew System::Windows::Forms::TextBox());
			this->customerid = (gcnew System::Windows::Forms::TextBox());
			this->login = (gcnew System::Windows::Forms::Button());
			this->singUp = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// pswd
			// 
			this->pswd->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pswd->Location = System::Drawing::Point(111, 49);
			this->pswd->Name = L"pswd";
			this->pswd->Size = System::Drawing::Size(161, 26);
			this->pswd->TabIndex = 30;
			this->pswd->UseSystemPasswordChar = true;
			// 
			// id
			// 
			this->id->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->id->Location = System::Drawing::Point(111, 12);
			this->id->Name = L"id";
			this->id->Size = System::Drawing::Size(161, 26);
			this->id->TabIndex = 29;
			// 
			// password
			// 
			this->password->BackColor = System::Drawing::SystemColors::Control;
			this->password->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->password->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->password->Location = System::Drawing::Point(12, 52);
			this->password->Name = L"password";
			this->password->ReadOnly = true;
			this->password->Size = System::Drawing::Size(93, 19);
			this->password->TabIndex = 28;
			this->password->Text = L"Password\r\n\r\n:";
			// 
			// customerid
			// 
			this->customerid->BackColor = System::Drawing::SystemColors::Control;
			this->customerid->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->customerid->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customerid->Location = System::Drawing::Point(12, 19);
			this->customerid->Name = L"customerid";
			this->customerid->ReadOnly = true;
			this->customerid->Size = System::Drawing::Size(93, 19);
			this->customerid->TabIndex = 27;
			this->customerid->Text = L"User ID\r\n:";
			this->customerid->TextChanged += gcnew System::EventHandler(this, &LOSF::customerid_TextChanged);
			// 
			// login
			// 
			this->login->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->login->Location = System::Drawing::Point(75, 81);
			this->login->Name = L"login";
			this->login->Size = System::Drawing::Size(150, 50);
			this->login->TabIndex = 26;
			this->login->Text = L"Login";
			this->login->UseVisualStyleBackColor = true;
			// 
			// singUp
			// 
			this->singUp->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->singUp->Location = System::Drawing::Point(75, 137);
			this->singUp->Name = L"singUp";
			this->singUp->Size = System::Drawing::Size(150, 50);
			this->singUp->TabIndex = 25;
			this->singUp->Text = L"Sign up";
			this->singUp->UseVisualStyleBackColor = true;
			// 
			// LOSF
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(284, 211);
			this->Controls->Add(this->pswd);
			this->Controls->Add(this->id);
			this->Controls->Add(this->password);
			this->Controls->Add(this->customerid);
			this->Controls->Add(this->login);
			this->Controls->Add(this->singUp);
			this->Name = L"LOSF";
			this->Text = L"LOSF";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void customerid_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
};
}
