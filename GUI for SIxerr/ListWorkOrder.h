#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;


namespace GUIforSIxerr {

	/// <summary>
	/// Summary for ListWorkOrder
	/// </summary>
	public ref class ListWorkOrder : public System::Windows::Forms::UserControl
	{
	public:
		ListWorkOrder(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~ListWorkOrder()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::PictureBox^ pictureBox1;
	private: System::Windows::Forms::Label^ WorkOrderTitle;
	private: System::Windows::Forms::Label^ DescriptionWorkOrder;
	protected:



	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->pictureBox1 = (gcnew System::Windows::Forms::PictureBox());
			this->WorkOrderTitle = (gcnew System::Windows::Forms::Label());
			this->DescriptionWorkOrder = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->BeginInit();
			this->SuspendLayout();
			// 
			// pictureBox1
			// 
			this->pictureBox1->Location = System::Drawing::Point(27, 22);
			this->pictureBox1->Name = L"pictureBox1";
			this->pictureBox1->Size = System::Drawing::Size(101, 96);
			this->pictureBox1->SizeMode = System::Windows::Forms::PictureBoxSizeMode::Zoom;
			this->pictureBox1->TabIndex = 0;
			this->pictureBox1->TabStop = false;
			// 
			// WorkOrderTitle
			// 
			this->WorkOrderTitle->AutoEllipsis = true;
			this->WorkOrderTitle->Location = System::Drawing::Point(173, 22);
			this->WorkOrderTitle->Name = L"WorkOrderTitle";
			this->WorkOrderTitle->Size = System::Drawing::Size(518, 27);
			this->WorkOrderTitle->TabIndex = 1;
			this->WorkOrderTitle->Text = L"Title";
			this->WorkOrderTitle->Click += gcnew System::EventHandler(this, &ListWorkOrder::label1_Click);
			// 
			// DescriptionWorkOrder
			// 
			this->DescriptionWorkOrder->AutoEllipsis = true;
			this->DescriptionWorkOrder->Location = System::Drawing::Point(176, 64);
			this->DescriptionWorkOrder->Name = L"DescriptionWorkOrder";
			this->DescriptionWorkOrder->Size = System::Drawing::Size(515, 54);
			this->DescriptionWorkOrder->TabIndex = 2;
			this->DescriptionWorkOrder->Text = L"Description";
			// 
			// ListWorkOrder
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->Controls->Add(this->DescriptionWorkOrder);
			this->Controls->Add(this->WorkOrderTitle);
			this->Controls->Add(this->pictureBox1);
			this->Name = L"ListWorkOrder";
			this->Size = System::Drawing::Size(723, 151);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->pictureBox1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
	}
	};
}
