#pragma once

static int fsize = 12;

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Setting 摘要
	/// </summary>
	public ref class Setting : public System::Windows::Forms::Form
	{
	public:
		Setting(void)
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
		~Setting()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::TrackBar^ fontsize;

	private: System::Windows::Forms::TextBox^ ExampleText;




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
			this->fontsize = (gcnew System::Windows::Forms::TrackBar());
			this->ExampleText = (gcnew System::Windows::Forms::TextBox());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fontsize))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16));
			this->textBox1->Location = System::Drawing::Point(12, 84);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(159, 25);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Font Size:";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Setting::textBox1_TextChanged);
			// 
			// fontsize
			// 
			this->fontsize->Location = System::Drawing::Point(177, 84);
			this->fontsize->Maximum = 18;
			this->fontsize->Minimum = 12;
			this->fontsize->Name = L"fontsize";
			this->fontsize->Size = System::Drawing::Size(385, 45);
			this->fontsize->TabIndex = 1;
			this->fontsize->Value = 12;
			this->fontsize->Scroll += gcnew System::EventHandler(this, &Setting::trackBar1_Scroll);
			// 
			// ExampleText
			// 
			this->ExampleText->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->ExampleText->Location = System::Drawing::Point(12, 315);
			this->ExampleText->Multiline = true;
			this->ExampleText->Name = L"ExampleText";
			this->ExampleText->ReadOnly = true;
			this->ExampleText->Size = System::Drawing::Size(550, 102);
			this->ExampleText->TabIndex = 3;
			this->ExampleText->Text = L"Text will look like this";
			this->ExampleText->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->ExampleText->TextChanged += gcnew System::EventHandler(this, &Setting::textBox2_TextChanged);
			// 
			// Setting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(574, 429);
			this->Controls->Add(this->ExampleText);
			this->Controls->Add(this->fontsize);
			this->Controls->Add(this->textBox1);
			this->Name = L"Setting";
			this->Text = L"Setting";
			this->Load += gcnew System::EventHandler(this, &Setting::Setting_Load);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fontsize))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void Setting_Load(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void trackBar1_Scroll(System::Object^ sender, System::EventArgs^ e) {
		fsize = fontsize->Value;
		ExampleText->Font = gcnew System::Drawing::Font(ExampleText->Font->FontFamily, fsize);
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void label1_Click_1(System::Object^ sender, System::EventArgs^ e) {
}
private: System::Void textBox2_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
