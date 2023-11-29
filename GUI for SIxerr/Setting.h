#pragma once

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
	private: System::Windows::Forms::Label^ label1;



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
			this->label1 = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->fontsize))->BeginInit();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(74, 162);
			this->textBox1->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(318, 37);
			this->textBox1->TabIndex = 0;
			this->textBox1->Text = L"Font Size:";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &Setting::textBox1_TextChanged);
			// 
			// fontsize
			// 
			this->fontsize->Location = System::Drawing::Point(488, 162);
			this->fontsize->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
			this->fontsize->Name = L"fontsize";
			this->fontsize->Size = System::Drawing::Size(494, 90);
			this->fontsize->TabIndex = 1;
			this->fontsize->Scroll += gcnew System::EventHandler(this, &Setting::trackBar1_Scroll);
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(626, 231);
			this->label1->Margin = System::Windows::Forms::Padding(6, 0, 6, 0);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(70, 25);
			this->label1->TabIndex = 2;
			this->label1->Text = L"label1";
			// 
			// Setting
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(12, 25);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1148, 825);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->fontsize);
			this->Controls->Add(this->textBox1);
			this->Margin = System::Windows::Forms::Padding(6, 6, 6, 6);
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
		int fsize = fontsize->Value;
		if (fsize > 0){
		label1->Font = gcnew System::Drawing::Font(label1->Font->FontFamily, fsize);

		}
		else{
			
		}
	}
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
