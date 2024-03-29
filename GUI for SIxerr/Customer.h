#pragma once
#include "FindFreelancers.h"
#include "Messages.h"
#include "LOSC.h"
#include "User.h"

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
		Customer()
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

	private: System::Windows::Forms::Button^ reqSubmit;


	protected:

	protected:













	private: System::Windows::Forms::TextBox^ requirements;
	private: System::Windows::Forms::TextBox^ req;

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TextBox^ pjtName;
	private: System::Windows::Forms::Button^ fandfrelance;
	private: System::Windows::Forms::Button^ message;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::Panel^ panel1;


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
			this->reqSubmit = (gcnew System::Windows::Forms::Button());
			this->requirements = (gcnew System::Windows::Forms::TextBox());
			this->req = (gcnew System::Windows::Forms::TextBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->pjtName = (gcnew System::Windows::Forms::TextBox());
			this->fandfrelance = (gcnew System::Windows::Forms::Button());
			this->message = (gcnew System::Windows::Forms::Button());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->panel1 = (gcnew System::Windows::Forms::Panel());
			this->panel1->SuspendLayout();
			this->SuspendLayout();
			// 
			// reqSubmit
			// 
			this->reqSubmit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->reqSubmit->Location = System::Drawing::Point(743, 307);
			this->reqSubmit->Name = L"reqSubmit";
			this->reqSubmit->Size = System::Drawing::Size(220, 62);
			this->reqSubmit->TabIndex = 1;
			this->reqSubmit->Text = L"Submit";
			this->reqSubmit->UseVisualStyleBackColor = true;
			this->reqSubmit->Click += gcnew System::EventHandler(this, &Customer::reqSubmit_Click);
			// 
			// requirements
			// 
			this->requirements->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->requirements->Location = System::Drawing::Point(11, 100);
			this->requirements->Multiline = true;
			this->requirements->Name = L"requirements";
			this->requirements->Size = System::Drawing::Size(952, 194);
			this->requirements->TabIndex = 9;
			this->requirements->TextChanged += gcnew System::EventHandler(this, &Customer::requirements_TextChanged);
			// 
			// req
			// 
			this->req->BackColor = System::Drawing::SystemColors::ControlLight;
			this->req->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->req->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->req->Location = System::Drawing::Point(11, 75);
			this->req->Name = L"req";
			this->req->ReadOnly = true;
			this->req->Size = System::Drawing::Size(177, 19);
			this->req->TabIndex = 10;
			this->req->Text = L"Project Requirements:";
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(11, 46);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(177, 19);
			this->textBox1->TabIndex = 12;
			this->textBox1->Text = L"Project Name :";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Customer::textBox1_TextChanged_1);
			// 
			// pjtName
			// 
			this->pjtName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->pjtName->Location = System::Drawing::Point(202, 43);
			this->pjtName->Name = L"pjtName";
			this->pjtName->Size = System::Drawing::Size(761, 26);
			this->pjtName->TabIndex = 13;
			this->pjtName->TextChanged += gcnew System::EventHandler(this, &Customer::pjtName_TextChanged);
			// 
			// fandfrelance
			// 
			this->fandfrelance->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->fandfrelance->Location = System::Drawing::Point(250, 54);
			this->fandfrelance->Name = L"fandfrelance";
			this->fandfrelance->Size = System::Drawing::Size(500, 62);
			this->fandfrelance->TabIndex = 14;
			this->fandfrelance->Text = L"Find a Freelancer";
			this->fandfrelance->UseVisualStyleBackColor = true;
			this->fandfrelance->Click += gcnew System::EventHandler(this, &Customer::fandfrelance_Click);
			// 
			// message
			// 
			this->message->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->message->Location = System::Drawing::Point(250, 122);
			this->message->Name = L"message";
			this->message->Size = System::Drawing::Size(500, 62);
			this->message->TabIndex = 15;
			this->message->Text = L"Messages";
			this->message->UseVisualStyleBackColor = true;
			this->message->Click += gcnew System::EventHandler(this, &Customer::message_Click);
			// 
			// textBox2
			// 
			this->textBox2->BackColor = System::Drawing::SystemColors::ControlLight;
			this->textBox2->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox2->Location = System::Drawing::Point(11, 6);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(960, 19);
			this->textBox2->TabIndex = 16;
			this->textBox2->Text = L"Submit a Project Request";
			this->textBox2->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox2->TextChanged += gcnew System::EventHandler(this, &Customer::textBox2_TextChanged);
			// 
			// panel1
			// 
			this->panel1->BackColor = System::Drawing::SystemColors::ControlLight;
			this->panel1->Controls->Add(this->pjtName);
			this->panel1->Controls->Add(this->textBox2);
			this->panel1->Controls->Add(this->reqSubmit);
			this->panel1->Controls->Add(this->textBox1);
			this->panel1->Controls->Add(this->req);
			this->panel1->Controls->Add(this->requirements);
			this->panel1->Location = System::Drawing::Point(1, 227);
			this->panel1->Name = L"panel1";
			this->panel1->Size = System::Drawing::Size(982, 380);
			this->panel1->TabIndex = 17;
			// 
			// Customer
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::Control;
			this->ClientSize = System::Drawing::Size(984, 608);
			this->Controls->Add(this->panel1);
			this->Controls->Add(this->message);
			this->Controls->Add(this->fandfrelance);
			this->Location = System::Drawing::Point(0, 50);
			this->Name = L"Customer";
			this->Text = L"Customer";
			this->Load += gcnew System::EventHandler(this, &Customer::Customer_Load);
			this->panel1->ResumeLayout(false);
			this->panel1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void Customer_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void accountState_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void id_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void pswd_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void reqSubmit_Click(System::Object^ sender, System::EventArgs^ e) {
	if (pjtName->Text->Empty && requirements->Text->Empty) {
		MessageBox::Show("The Project Name and Requirement should not empty.","", MessageBoxButtons::OK);
	}
}
private: System::Void fandfrelance_Click(System::Object^ sender, System::EventArgs^ e) {
		FindFreelancers^ findFreelancers = gcnew FindFreelancers();
		findFreelancers->Show();
}
public: bool switchToMessageC = false;
private: System::Void message_Click(System::Object^ sender, System::EventArgs^ e) {
		switchToMessageC = true;
		this->Close();
}
private: System::Void pjtName_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox1_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void requirements_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
