#pragma once

#include <vector>
#include <ctime>
#include <iostream>
#include <climits>

namespace lab22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для my_form
	/// </summary>
	public ref class my_form : public System::Windows::Forms::Form
	{
	public:
		my_form(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~my_form()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^  textBox1;
	protected:
	private: System::Windows::Forms::TextBox^  textBox2;
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::MenuStrip^  menuStrip1;
	private: System::Windows::Forms::ToolStripMenuItem^  лБ22ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  лБ23ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;













	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->лБ22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лБ23ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->SuspendLayout();
			// 
			// textBox1
			// 
			this->textBox1->Location = System::Drawing::Point(6, 26);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(405, 20);
			this->textBox1->TabIndex = 0;
			this->textBox1->KeyDown += gcnew System::Windows::Forms::KeyEventHandler(this, &my_form::textBox1_KeyDown);
			// 
			// textBox2
			// 
			this->textBox2->Location = System::Drawing::Point(6, 63);
			this->textBox2->Name = L"textBox2";
			this->textBox2->ReadOnly = true;
			this->textBox2->Size = System::Drawing::Size(405, 20);
			this->textBox2->TabIndex = 1;
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->button1);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->textBox2);
			this->groupBox1->Enabled = false;
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(417, 127);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Преобразование строки";
			this->groupBox1->Visible = false;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &my_form::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(169, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"Заменить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &my_form::button1_Click_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(2) {
				this->лБ22ToolStripMenuItem,
					this->лБ23ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(445, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// лБ22ToolStripMenuItem
			// 
			this->лБ22ToolStripMenuItem->Name = L"лБ22ToolStripMenuItem";
			this->лБ22ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->лБ22ToolStripMenuItem->Text = L"ЛБ 2.2";
			this->лБ22ToolStripMenuItem->Click += gcnew System::EventHandler(this, &my_form::лБ22ToolStripMenuItem_Click);
			// 
			// лБ23ToolStripMenuItem
			// 
			this->лБ23ToolStripMenuItem->Name = L"лБ23ToolStripMenuItem";
			this->лБ23ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->лБ23ToolStripMenuItem->Text = L"ЛБ 2.3";
			this->лБ23ToolStripMenuItem->Click += gcnew System::EventHandler(this, &my_form::лБ23ToolStripMenuItem_Click);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Enabled = false;
			this->groupBox2->Location = System::Drawing::Point(12, 27);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(248, 209);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Задача на массив";
			this->groupBox2->Visible = false;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(82, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &my_form::button2_Click);
			// 
			// textBox3
			// 
			this->textBox3->Location = System::Drawing::Point(71, 140);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(37, 20);
			this->textBox3->TabIndex = 3;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(26, 143);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(27, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"N = ";
			// 
			// listBox2
			// 
			this->listBox2->FormattingEnabled = true;
			this->listBox2->Location = System::Drawing::Point(131, 29);
			this->listBox2->Name = L"listBox2";
			this->listBox2->Size = System::Drawing::Size(75, 95);
			this->listBox2->TabIndex = 1;
			// 
			// listBox1
			// 
			this->listBox1->FormattingEnabled = true;
			this->listBox1->Location = System::Drawing::Point(29, 29);
			this->listBox1->Name = L"listBox1";
			this->listBox1->Size = System::Drawing::Size(79, 95);
			this->listBox1->TabIndex = 0;
			// 
			// my_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(445, 408);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"my_form";
			this->Text = L"ООЯиСП - Курсовой проект - гр. 22ВГ1 - Майоров А. О.";
			this->Load += gcnew System::EventHandler(this, &my_form::my_form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}

#pragma endregion

	private: System::Void my_form_Load(System::Object^  sender, System::EventArgs^  e) {
	}

	System::String ^get_lower_case(System::String^ in)
	{
		System::String ^ans = "";
		for (int i = 0; i < in->Length; ++i)
		{
			if ((L'а' <= in[i] && L'я' >= in[i]) || (L'a' <= in[i] && L'z' >= in[i]))
				ans += in[i];
		}
		return ans;
	}

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->textBox2->Text = get_lower_case(this->textBox1->Text);
	}

	private: System::Void лБ22ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox1->Visible = !this->groupBox1->Visible;
		this->groupBox1->Enabled = !this->groupBox1->Enabled;
		this->groupBox2->Visible = false;
		this->groupBox2->Enabled = false;
	}

	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter)
		{
			this->textBox2->Text = get_lower_case(this->textBox1->Text);
		}
	}
	private: System::Void лБ23ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox2->Visible = !this->groupBox2->Visible;
		this->groupBox2->Enabled = !this->groupBox2->Enabled;
		this->groupBox1->Visible = false;
		this->groupBox1->Enabled = false;
	}

	private: int is_prime(int n)
	{
		if (n <= 1)
			return 0;
		for (int i = 2; i <= n / 2; i++)
			if (n % i == 0)
				return 0;
		return 1;
	}

	private: int max_among_prime_indices(std::vector<int> * vec)
	{
		int ans = INT_MIN;
		for (int i = 0; i < vec->size(); ++i)
			if (is_prime(i))
				if (ans < (*vec)[i])
					ans = (*vec)[i];
		return ans;
	}

	private: System::Void button2_Click(System::Object^  sender, System::EventArgs^  e) {
		srand((unsigned int)time(0));
		std::vector<int> *listbox1_vector = new std::vector<int>;
		try {
			listBox1->Items->Clear();
			listBox2->Items->Clear();
			for (int i = 0; i < Int32::Parse(this->textBox3->Text); ++i) {
				int x = rand() % 100 - 50;
				listBox1->Items->Add(System::Convert::ToString(x));
				listbox1_vector->push_back(x);
			}
			listBox2->Items->Add(System::Convert::ToString(max_among_prime_indices(listbox1_vector)));
		}
		catch(...) { }	
	}
private: System::Void groupBox1_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void groupBox3_Enter(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void dataGridView1_CellContentClick(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
}
private: System::Void label2_Click(System::Object^  sender, System::EventArgs^  e) {
}
private: System::Void button3_Click(System::Object^  sender, System::EventArgs^  e) {
}

};
}
