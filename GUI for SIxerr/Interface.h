#pragma once
#include "LOSC.h"
//#include "LOSF.h"
#include "Setting.h"
#include "User.h"


namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Interface 摘要
	/// </summary>
	public ref class Interface : public System::Windows::Forms::Form
	{
	public:
		Interface(void)
		{
			InitializeComponent();
			//
			//TODO:  在此处添加构造函数代码
			//
		}
	public: static User^ user = nullptr;
	protected:
		/// <summary>
		/// 清理所有正在使用的资源。
		/// </summary>
		~Interface()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^ customer;
	protected:

	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Button^ freelencer;
	private: System::Windows::Forms::Button^ exit;



	private: System::Windows::Forms::Button^ setting;



	protected:



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
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(Interface::typeid));
			this->customer = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->freelencer = (gcnew System::Windows::Forms::Button());
			this->exit = (gcnew System::Windows::Forms::Button());
			this->setting = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// customer
			// 
			this->customer->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->customer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->customer->Location = System::Drawing::Point(405, 410);
			this->customer->Margin = System::Windows::Forms::Padding(2);
			this->customer->Name = L"customer";
			this->customer->Size = System::Drawing::Size(280, 80);
			this->customer->TabIndex = 0;
			this->customer->Text = L"Customer Login";
			this->customer->UseVisualStyleBackColor = false;
			this->customer->Click += gcnew System::EventHandler(this, &Interface::button1_Click);
			// 
			// textBox1
			// 
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"OCR A Extended", 99.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(11, 159);
			this->textBox1->Margin = System::Windows::Forms::Padding(2);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(1066, 138);
			this->textBox1->TabIndex = 1;
			this->textBox1->Text = L"SIXERR";
			this->textBox1->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Interface::textBox1_TextChanged);
			// 
			// freelencer
			// 
			this->freelencer->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->freelencer->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->freelencer->Location = System::Drawing::Point(405, 494);
			this->freelencer->Margin = System::Windows::Forms::Padding(2);
			this->freelencer->Name = L"freelencer";
			this->freelencer->Size = System::Drawing::Size(280, 80);
			this->freelencer->TabIndex = 2;
			this->freelencer->Text = L"Freelencer Login";
			this->freelencer->UseVisualStyleBackColor = false;
			this->freelencer->Click += gcnew System::EventHandler(this, &Interface::freelencer_Click);
			// 
			// exit
			// 
			this->exit->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->exit->Location = System::Drawing::Point(405, 578);
			this->exit->Margin = System::Windows::Forms::Padding(2);
			this->exit->Name = L"exit";
			this->exit->Size = System::Drawing::Size(280, 80);
			this->exit->TabIndex = 3;
			this->exit->Text = L"Exit";
			this->exit->UseVisualStyleBackColor = false;
			this->exit->Click += gcnew System::EventHandler(this, &Interface::button2_Click);
			// 
			// setting
			// 
			this->setting->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->setting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->setting->Image = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"setting.Image")));
			this->setting->Location = System::Drawing::Point(11, 638);
			this->setting->Margin = System::Windows::Forms::Padding(2);
			this->setting->Name = L"setting";
			this->setting->Size = System::Drawing::Size(87, 80);
			this->setting->TabIndex = 5;
			this->setting->UseVisualStyleBackColor = false;
			this->setting->Click += gcnew System::EventHandler(this, &Interface::setting_Click);
			// 
			// Interface
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 729);
			this->Controls->Add(this->setting);
			this->Controls->Add(this->exit);
			this->Controls->Add(this->freelencer);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->customer);
			this->Location = System::Drawing::Point(0, -50);
			this->Margin = System::Windows::Forms::Padding(2);
			this->Name = L"Interface";
			this->Text = L"Sixerr Login";
			this->Load += gcnew System::EventHandler(this, &Interface::Interface_Load);
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

	public: bool switchToCustomer = false;
	public: bool switchToFreelancer = false;
	public: static int SOF = 0;
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) {
		this->switchToCustomer = true;
		this->Close();
		SOF = 1;
	}
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void Interface_Load(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) {
		Application::Exit();
}


private: System::Void freelencer_Click(System::Object^ sender, System::EventArgs^ e) {
	this->switchToCustomer = true;
	SOF = 2;
	this->Close();
}
private: System::Void formatSet_Click(System::Object^ sender, System::EventArgs^ e) {
	
		
}
private: System::Void setting_Click(System::Object^ sender, System::EventArgs^ e) {
		Setting^ setting = gcnew Setting();
		setting->Show();
}
private: System::Void textBox2_TextChanged_1(System::Object^ sender, System::EventArgs^ e) {
}
};
}
