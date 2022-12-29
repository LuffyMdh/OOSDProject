#pragma once

namespace OOSDProject {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
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
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ HelloWorldLabel;
	protected:

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
			this->HelloWorldLabel = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// HelloWorldLabel
			// 
			this->HelloWorldLabel->AutoSize = true;
			this->HelloWorldLabel->Font = (gcnew System::Drawing::Font(L"Microsoft YaHei", 13.8F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(0)));
			this->HelloWorldLabel->Location = System::Drawing::Point(134, 132);
			this->HelloWorldLabel->Name = L"HelloWorldLabel";
			this->HelloWorldLabel->Size = System::Drawing::Size(162, 31);
			this->HelloWorldLabel->TabIndex = 0;
			this->HelloWorldLabel->Text = L"Hello World!";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(439, 325);
			this->Controls->Add(this->HelloWorldLabel);
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Hello World Form";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	};
}
