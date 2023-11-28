#pragma once
#include "User.h"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// SignUpForC 摘要
	/// </summary>
	public ref class SignUpForC : public System::Windows::Forms::Form
	{
	public:
		SignUpForC(void)
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
		~SignUpForC()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox7;
	protected:
	private: System::Windows::Forms::TextBox^ lName;
	private: System::Windows::Forms::TextBox^ fName;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ PSW;
	private: System::Windows::Forms::TextBox^ CPSW;
	private: System::Windows::Forms::TextBox^ userName;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ submit;

	private: System::Windows::Forms::Button^ cancel;


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
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->lName = (gcnew System::Windows::Forms::TextBox());
			this->fName = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->PSW = (gcnew System::Windows::Forms::TextBox());
			this->CPSW = (gcnew System::Windows::Forms::TextBox());
			this->userName = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->submit = (gcnew System::Windows::Forms::Button());
			this->cancel = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// textBox7
			// 
			this->textBox7->BackColor = System::Drawing::SystemColors::Control;
			this->textBox7->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox7->Location = System::Drawing::Point(50, 160);
			this->textBox7->Name = L"textBox7";
			this->textBox7->ReadOnly = true;
			this->textBox7->Size = System::Drawing::Size(188, 19);
			this->textBox7->TabIndex = 19;
			this->textBox7->Text = L"Last Name:";
			// 
			// lName
			// 
			this->lName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->lName->Location = System::Drawing::Point(244, 158);
			this->lName->Name = L"lName";
			this->lName->Size = System::Drawing::Size(188, 26);
			this->lName->TabIndex = 18;
			// 
			// fName
			// 
			this->fName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fName->Location = System::Drawing::Point(244, 121);
			this->fName->Name = L"fName";
			this->fName->Size = System::Drawing::Size(188, 26);
			this->fName->TabIndex = 17;
			// 
			// textBox4
			// 
			this->textBox4->BackColor = System::Drawing::SystemColors::Control;
			this->textBox4->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox4->Location = System::Drawing::Point(50, 127);
			this->textBox4->Name = L"textBox4";
			this->textBox4->ReadOnly = true;
			this->textBox4->Size = System::Drawing::Size(188, 19);
			this->textBox4->TabIndex = 16;
			this->textBox4->Text = L"First Name:";
			// 
			// PSW
			// 
			this->PSW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->PSW->Location = System::Drawing::Point(244, 49);
			this->PSW->Name = L"PSW";
			this->PSW->Size = System::Drawing::Size(188, 26);
			this->PSW->TabIndex = 15;
			// 
			// CPSW
			// 
			this->CPSW->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->CPSW->Location = System::Drawing::Point(244, 86);
			this->CPSW->Name = L"CPSW";
			this->CPSW->Size = System::Drawing::Size(188, 26);
			this->CPSW->TabIndex = 14;
			// 
			// userName
			// 
			this->userName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->userName->Location = System::Drawing::Point(244, 12);
			this->userName->Name = L"userName";
			this->userName->Size = System::Drawing::Size(188, 26);
			this->userName->TabIndex = 13;
			// 
			// textBox3
			// 
			this->textBox3->BackColor = System::Drawing::SystemColors::Control;
			this->textBox3->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox3->Location = System::Drawing::Point(50, 92);
			this->textBox3->Name = L"textBox3";
			this->textBox3->ReadOnly = true;
			this->textBox3->Size = System::Drawing::Size(188, 19);
			this->textBox3->TabIndex = 12;
			this->textBox3->Text = L"Confirm Password:";
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::Control;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(50, 55);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(188, 19);
			this->textBox2->TabIndex = 11;
			this->textBox2->Text = L"Password:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(50, 18);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(188, 19);
			this->textBox1->TabIndex = 10;
			this->textBox1->Text = L"User Name:";
			// 
			// submit
			// 
			this->submit->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->submit->Location = System::Drawing::Point(69, 218);
			this->submit->Name = L"submit";
			this->submit->Size = System::Drawing::Size(96, 31);
			this->submit->TabIndex = 20;
			this->submit->Text = L"Submit";
			this->submit->UseVisualStyleBackColor = true;
			this->submit->Click += gcnew System::EventHandler(this, &SignUpForC::submit_Click);
			// 
			// cancel
			// 
			this->cancel->Font = (gcnew System::Drawing::Font(L"宋体", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(134)));
			this->cancel->Location = System::Drawing::Point(313, 218);
			this->cancel->Name = L"cancel";
			this->cancel->Size = System::Drawing::Size(98, 31);
			this->cancel->TabIndex = 21;
			this->cancel->Text = L"Cancel";
			this->cancel->UseVisualStyleBackColor = true;
			this->cancel->Click += gcnew System::EventHandler(this, &SignUpForC::cancel_Click);
			// 
			// SignUpForC
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(484, 261);
			this->Controls->Add(this->cancel);
			this->Controls->Add(this->submit);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->lName);
			this->Controls->Add(this->fName);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->PSW);
			this->Controls->Add(this->CPSW);
			this->Controls->Add(this->userName);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->textBox1);
			this->Name = L"SignUpForC";
			this->Text = L"SignUpForC";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
public: User^ user = nullptr;

	private: System::Void cancel_Click(System::Object^ sender, System::EventArgs^ e) {
		this->Close();
	}
private: System::Void submit_Click(System::Object^ sender, System::EventArgs^ e) {
	
}
};
}
