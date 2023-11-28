#pragma once
#include "SortingAL.cpp"

namespace GUIforSIxerr {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// FindFreelancers 摘要
	/// </summary>
	public ref class FindFreelancers : public System::Windows::Forms::Form
	{
	public:
		FindFreelancers(void)
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
		~FindFreelancers()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ flnsorting;
	private: System::Windows::Forms::ComboBox^ sortby;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ filed;
	private: System::Windows::Forms::Button^ search;
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
			this->flnsorting = (gcnew System::Windows::Forms::TextBox());
			this->sortby = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->filed = (gcnew System::Windows::Forms::ComboBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->SuspendLayout();
			// 
			// flnsorting
			// 
			this->flnsorting->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->flnsorting->Location = System::Drawing::Point(12, 194);
			this->flnsorting->Multiline = true;
			this->flnsorting->Name = L"flnsorting";
			this->flnsorting->Size = System::Drawing::Size(1050, 523);
			this->flnsorting->TabIndex = 10;
			this->flnsorting->TextChanged += gcnew System::EventHandler(this, &FindFreelancers::flnsorting_TextChanged);
			// 
			// sortby
			// 
			this->sortby->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->sortby->FormattingEnabled = true;
			this->sortby->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Sort by User Name", L"Sort by Rating" });
			this->sortby->Location = System::Drawing::Point(684, 143);
			this->sortby->Name = L"sortby";
			this->sortby->Size = System::Drawing::Size(378, 28);
			this->sortby->TabIndex = 15;
			this->sortby->SelectedIndexChanged += gcnew System::EventHandler(this, &FindFreelancers::sortby_SelectedIndexChanged);
			// 
			// textBox1
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Control;
			this->textBox1->BorderStyle = System::Windows::Forms::BorderStyle::None;
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->textBox1->Location = System::Drawing::Point(12, 12);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(357, 19);
			this->textBox1->TabIndex = 16;
			this->textBox1->Text = L"Select a Field you want: ";
			this->textBox1->TextChanged += gcnew System::EventHandler(this, &FindFreelancers::textBox1_TextChanged);
			// 
			// filed
			// 
			this->filed->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->filed->FormattingEnabled = true;
			this->filed->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Database", L"Software Engineering", L"Structure Engineering" });
			this->filed->Location = System::Drawing::Point(375, 4);
			this->filed->Name = L"filed";
			this->filed->Size = System::Drawing::Size(687, 28);
			this->filed->TabIndex = 17;
			// 
			// search
			// 
			this->search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->search->Location = System::Drawing::Point(843, 75);
			this->search->Name = L"search";
			this->search->Size = System::Drawing::Size(219, 44);
			this->search->TabIndex = 18;
			this->search->Text = L"Search";
			this->search->UseVisualStyleBackColor = true;
			// 
			// FindFreelancers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 729);
			this->Controls->Add(this->search);
			this->Controls->Add(this->filed);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->sortby);
			this->Controls->Add(this->flnsorting);
			this->Name = L"FindFreelancers";
			this->Text = L"FindFreelancers";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void textBox1_TextChanged(System::Object^ sender, System::EventArgs^ e) {
	}
	private: System::Void sortby_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		
	}
private: System::Void flnsorting_TextChanged(System::Object^ sender, System::EventArgs^ e) {
}
};
}
