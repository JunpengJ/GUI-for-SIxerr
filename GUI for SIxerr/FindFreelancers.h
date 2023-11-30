#pragma once
#include <vector>
#include "User.h"
#include "FreelanceUserControl.h"


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
			AddUserControlsFromDatabase();
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

	private: System::Windows::Forms::ComboBox^ sortby;


	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::ComboBox^ filed;
	private: System::Windows::Forms::Button^ search;
	private: System::Windows::Forms::FlowLayoutPanel^ flowLayoutPanel1;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
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
			this->sortby = (gcnew System::Windows::Forms::ComboBox());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->filed = (gcnew System::Windows::Forms::ComboBox());
			this->search = (gcnew System::Windows::Forms::Button());
			this->flowLayoutPanel1 = (gcnew System::Windows::Forms::FlowLayoutPanel());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
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
			// flowLayoutPanel1
			// 
			this->flowLayoutPanel1->BackColor = System::Drawing::SystemColors::Window;
			this->flowLayoutPanel1->FlowDirection = System::Windows::Forms::FlowDirection::TopDown;
			this->flowLayoutPanel1->Location = System::Drawing::Point(12, 226);
			this->flowLayoutPanel1->Name = L"flowLayoutPanel1";
			this->flowLayoutPanel1->Size = System::Drawing::Size(1050, 491);
			this->flowLayoutPanel1->TabIndex = 19;
			this->flowLayoutPanel1->Paint += gcnew System::Windows::Forms::PaintEventHandler(this, &FindFreelancers::flowLayoutPanel1_Paint);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(12, 195);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(154, 20);
			this->textBox2->TabIndex = 20;
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(172, 195);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(111, 20);
			this->textBox3->TabIndex = 21;
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(289, 195);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(773, 20);
			this->textBox4->TabIndex = 22;
			// 
			// FindFreelancers
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1074, 729);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->flowLayoutPanel1);
			this->Controls->Add(this->search);
			this->Controls->Add(this->filed);
			this->Controls->Add(this->textBox1);
			this->Controls->Add(this->sortby);
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
private: System::Void flowLayoutPanel1_Paint(System::Object^ sender, System::Windows::Forms::PaintEventArgs^ e) {
}
private: void AddUserControlsFromDatabase()
	{
		flowLayoutPanel1->Controls->Clear();

		for each (Freelancer freelancer in freelancerVec)
		{
			System::String^ un = gcnew System::String(freelancer.username.c_str());
			System::String^ r = freelancer.rating.ToString();
			System::String^ d = gcnew System::String(freelancer.desig.c_str());

			FreelanceUserControl^ freelanceControl = gcnew FreelanceUserControl;
			freelanceControl->SetData(un);
			freelanceControl->SetData(r);
			freelanceControl->SetData(d);

			flowLayoutPanel1->Controls->Add(freelanceControl);
		}
	}
};
}
