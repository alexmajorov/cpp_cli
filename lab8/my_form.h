#pragma once

#include <vector>
#include <ctime>
#include <iostream>
#include <climits>
#include <fstream>
#include <msclr\marshal_cppstd.h>
#include <cmath>
#include <stdlib.h> 
#include "windows.h"

using namespace msclr::interop;

namespace lab22 {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ my_form
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
		/// ќсвободить все используемые ресурсы.
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
	private: System::Windows::Forms::ToolStripMenuItem^  лЅ22ToolStripMenuItem;
	private: System::Windows::Forms::ToolStripMenuItem^  лЅ23ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::TextBox^  textBox3;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::ListBox^  listBox2;
	private: System::Windows::Forms::ListBox^  listBox1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::DataGridView^  dataGridView1;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::TextBox^  textBox4;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button4;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::TextBox^  textBox5;
	private: System::Windows::Forms::TextBox^  textBox6;
	private: System::Windows::Forms::ToolStripMenuItem^  лЅ24ToolStripMenuItem;
	private: System::Windows::Forms::Button^  button5;
	private: System::Windows::Forms::Button^  button6;
	private: System::Windows::Forms::GroupBox^  groupBox4;
	private: System::Windows::Forms::Button^  button7;
	private: System::Windows::Forms::TextBox^  textBox8;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::TextBox^  textBox7;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^  chart1;
	private: System::Windows::Forms::Timer^  timer1;
	private: System::Windows::Forms::ToolStripMenuItem^  лЅ26ToolStripMenuItem;
	private: System::Windows::Forms::GroupBox^  groupBox5;
	private: System::Windows::Forms::DataGridView^  dataGridView2;
	private: System::Windows::Forms::Button^  button9;
	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::TextBox^  textBox9;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::ToolStripMenuItem^  лЅ27ToolStripMenuItem;
	private: System::ComponentModel::IContainer^  components;


	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->components = (gcnew System::ComponentModel::Container());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^  chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^  legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->menuStrip1 = (gcnew System::Windows::Forms::MenuStrip());
			this->лЅ22ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лЅ23ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лЅ24ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лЅ26ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->лЅ27ToolStripMenuItem = (gcnew System::Windows::Forms::ToolStripMenuItem());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->listBox2 = (gcnew System::Windows::Forms::ListBox());
			this->listBox1 = (gcnew System::Windows::Forms::ListBox());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->button6 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox4 = (gcnew System::Windows::Forms::GroupBox());
			this->button7 = (gcnew System::Windows::Forms::Button());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->timer1 = (gcnew System::Windows::Forms::Timer(this->components));
			this->groupBox5 = (gcnew System::Windows::Forms::GroupBox());
			this->button9 = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->dataGridView2 = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox1->SuspendLayout();
			this->menuStrip1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->groupBox4->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->groupBox5->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->BeginInit();
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
			this->groupBox1->Enabled = true;
			this->groupBox1->Location = System::Drawing::Point(12, 27);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(437, 127);
			this->groupBox1->TabIndex = 2;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"ѕреобразование строки";
			this->groupBox1->Visible = true;
			this->groupBox1->Enter += gcnew System::EventHandler(this, &my_form::groupBox1_Enter);
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(169, 89);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 2;
			this->button1->Text = L"«аменить";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &my_form::button1_Click_1);
			// 
			// menuStrip1
			// 
			this->menuStrip1->Items->AddRange(gcnew cli::array< System::Windows::Forms::ToolStripItem^  >(5) {
				this->лЅ22ToolStripMenuItem,
					this->лЅ23ToolStripMenuItem, this->лЅ24ToolStripMenuItem, this->лЅ26ToolStripMenuItem, this->лЅ27ToolStripMenuItem
			});
			this->menuStrip1->Location = System::Drawing::Point(0, 0);
			this->menuStrip1->Name = L"menuStrip1";
			this->menuStrip1->Size = System::Drawing::Size(998, 24);
			this->menuStrip1->TabIndex = 3;
			this->menuStrip1->Text = L"menuStrip1";
			// 
			// лЅ22ToolStripMenuItem
			// 
			this->лЅ22ToolStripMenuItem->Name = L"лЅ22ToolStripMenuItem";
			this->лЅ22ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->лЅ22ToolStripMenuItem->Text = L"ЋЅ 2.2";
			this->лЅ22ToolStripMenuItem->Click += gcnew System::EventHandler(this, &my_form::лЅ22ToolStripMenuItem_Click);
			// 
			// лЅ23ToolStripMenuItem
			// 
			this->лЅ23ToolStripMenuItem->Name = L"лЅ23ToolStripMenuItem";
			this->лЅ23ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->лЅ23ToolStripMenuItem->Text = L"ЋЅ 2.3";
			this->лЅ23ToolStripMenuItem->Click += gcnew System::EventHandler(this, &my_form::лЅ23ToolStripMenuItem_Click);
			// 
			// лЅ24ToolStripMenuItem
			// 
			this->лЅ24ToolStripMenuItem->Name = L"лЅ24ToolStripMenuItem";
			this->лЅ24ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->лЅ24ToolStripMenuItem->Text = L"ЋЅ 2.4";
			this->лЅ24ToolStripMenuItem->Click += gcnew System::EventHandler(this, &my_form::лЅ24ToolStripMenuItem_Click);
			// 
			// лЅ26ToolStripMenuItem
			// 
			this->лЅ26ToolStripMenuItem->Name = L"лЅ26ToolStripMenuItem";
			this->лЅ26ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->лЅ26ToolStripMenuItem->Text = L"ЋЅ 2.6";
			this->лЅ26ToolStripMenuItem->Click += gcnew System::EventHandler(this, &my_form::лЅ26ToolStripMenuItem_Click);
			// 
			// лЅ27ToolStripMenuItem
			// 
			this->лЅ27ToolStripMenuItem->Name = L"лЅ27ToolStripMenuItem";
			this->лЅ27ToolStripMenuItem->Size = System::Drawing::Size(52, 20);
			this->лЅ27ToolStripMenuItem->Text = L"ЋЅ 2.7";
			this->лЅ27ToolStripMenuItem->Click += gcnew System::EventHandler(this, &my_form::лЅ27ToolStripMenuItem_Click_1);
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->textBox3);
			this->groupBox2->Controls->Add(this->label1);
			this->groupBox2->Controls->Add(this->listBox2);
			this->groupBox2->Controls->Add(this->listBox1);
			this->groupBox2->Enabled = true;
			this->groupBox2->Location = System::Drawing::Point(18, 176);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(248, 209);
			this->groupBox2->TabIndex = 4;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"«адача на массив";
			this->groupBox2->Visible = true;
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(82, 166);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(75, 23);
			this->button2->TabIndex = 4;
			this->button2->Text = L"¬ычислить";
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
			// groupBox3
			// 
			this->groupBox3->Controls->Add(this->button6);
			this->groupBox3->Controls->Add(this->button5);
			this->groupBox3->Controls->Add(this->textBox6);
			this->groupBox3->Controls->Add(this->label4);
			this->groupBox3->Controls->Add(this->button4);
			this->groupBox3->Controls->Add(this->button3);
			this->groupBox3->Controls->Add(this->textBox5);
			this->groupBox3->Controls->Add(this->label3);
			this->groupBox3->Controls->Add(this->textBox4);
			this->groupBox3->Controls->Add(this->label2);
			this->groupBox3->Controls->Add(this->dataGridView1);
			this->groupBox3->Enabled = true;
			this->groupBox3->Location = System::Drawing::Point(289, 176);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(260, 209);
			this->groupBox3->TabIndex = 5;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"«адача на двумерный массив";
			this->groupBox3->Visible = true;
			this->groupBox3->Enter += gcnew System::EventHandler(this, &my_form::groupBox3_Enter);
			// 
			// button6
			// 
			this->button6->Location = System::Drawing::Point(170, 175);
			this->button6->Name = L"button6";
			this->button6->Size = System::Drawing::Size(75, 23);
			this->button6->TabIndex = 10;
			this->button6->Text = L"«апись";
			this->button6->UseVisualStyleBackColor = true;
			this->button6->Click += gcnew System::EventHandler(this, &my_form::button6_Click);
			// 
			// button5
			// 
			this->button5->Location = System::Drawing::Point(170, 146);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(75, 23);
			this->button5->TabIndex = 9;
			this->button5->Text = L"„тение";
			this->button5->UseVisualStyleBackColor = true;
			this->button5->Click += gcnew System::EventHandler(this, &my_form::button5_Click);
			// 
			// textBox6
			// 
			this->textBox6->Location = System::Drawing::Point(86, 172);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(74, 20);
			this->textBox6->TabIndex = 8;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(34, 175);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(46, 13);
			this->label4->TabIndex = 7;
			this->label4->Text = L"ќтвет =";
			// 
			// button4
			// 
			this->button4->Enabled = false;
			this->button4->Location = System::Drawing::Point(170, 117);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(75, 23);
			this->button4->TabIndex = 6;
			this->button4->Text = L"–ешить";
			this->button4->UseVisualStyleBackColor = true;
			this->button4->Click += gcnew System::EventHandler(this, &my_form::button4_Click);
			// 
			// button3
			// 
			this->button3->Location = System::Drawing::Point(170, 88);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(75, 23);
			this->button3->TabIndex = 5;
			this->button3->Text = L"»нициал";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &my_form::button3_Click);
			// 
			// textBox5
			// 
			this->textBox5->Location = System::Drawing::Point(196, 62);
			this->textBox5->Name = L"textBox5";
			this->textBox5->Size = System::Drawing::Size(47, 20);
			this->textBox5->TabIndex = 4;
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(167, 65);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(23, 13);
			this->label3->TabIndex = 3;
			this->label3->Text = L"C =";
			// 
			// textBox4
			// 
			this->textBox4->Location = System::Drawing::Point(197, 29);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(47, 20);
			this->textBox4->TabIndex = 2;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(167, 32);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(24, 13);
			this->label2->TabIndex = 1;
			this->label2->Text = L"R =";
			this->label2->Click += gcnew System::EventHandler(this, &my_form::label2_Click);
			// 
			// dataGridView1
			// 
			this->dataGridView1->AllowUserToAddRows = false;
			this->dataGridView1->AllowUserToDeleteRows = false;
			this->dataGridView1->AllowUserToResizeRows = false;
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(21, 29);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->Size = System::Drawing::Size(140, 131);
			this->dataGridView1->TabIndex = 0;
			this->dataGridView1->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &my_form::dataGridView1_CellContentClick);
			// 
			// groupBox4
			// 
			this->groupBox4->Controls->Add(this->button7);
			this->groupBox4->Controls->Add(this->textBox8);
			this->groupBox4->Controls->Add(this->label6);
			this->groupBox4->Controls->Add(this->textBox7);
			this->groupBox4->Controls->Add(this->label5);
			this->groupBox4->Controls->Add(this->chart1);
			this->groupBox4->Enabled = true;
			this->groupBox4->Location = System::Drawing::Point(574, 27);
			this->groupBox4->Name = L"groupBox4";
			this->groupBox4->Size = System::Drawing::Size(319, 289);
			this->groupBox4->TabIndex = 6;
			this->groupBox4->TabStop = false;
			this->groupBox4->Text = L"√рафики функций y = sin(ln(x)) и r = - a * cos(2 * fi) / cos (fi)";
			this->groupBox4->Visible = true;
			this->groupBox4->Enter += gcnew System::EventHandler(this, &my_form::groupBox4_Enter);
			// 
			// button7
			// 
			this->button7->Location = System::Drawing::Point(194, 242);
			this->button7->Name = L"button7";
			this->button7->Size = System::Drawing::Size(119, 23);
			this->button7->TabIndex = 11;
			this->button7->Text = L"ѕостроить";
			this->button7->UseVisualStyleBackColor = true;
			this->button7->Click += gcnew System::EventHandler(this, &my_form::button7_Click);
			// 
			// textBox8
			// 
			this->textBox8->Location = System::Drawing::Point(130, 244);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(47, 20);
			this->textBox8->TabIndex = 13;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(101, 247);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(23, 13);
			this->label6->TabIndex = 12;
			this->label6->Text = L"B =";
			// 
			// textBox7
			// 
			this->textBox7->Location = System::Drawing::Point(48, 244);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(47, 20);
			this->textBox7->TabIndex = 11;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(19, 247);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(23, 13);
			this->label5->TabIndex = 11;
			this->label5->Text = L"A =";
			// 
			// chart1
			// 
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(22, 26);
			this->chart1->Name = L"chart1";
			this->chart1->Size = System::Drawing::Size(291, 201);
			this->chart1->TabIndex = 0;
			this->chart1->Text = L"chart1";
			this->chart1->Click += gcnew System::EventHandler(this, &my_form::chart1_Click);
			// 
			// groupBox5
			// 
			this->groupBox5->Controls->Add(this->button9);
			this->groupBox5->Controls->Add(this->button8);
			this->groupBox5->Controls->Add(this->textBox9);
			this->groupBox5->Controls->Add(this->label7);
			this->groupBox5->Controls->Add(this->dataGridView2);
			this->groupBox5->Enabled = true;
			this->groupBox5->Location = System::Drawing::Point(574, 322);
			this->groupBox5->Name = L"groupBox5";
			this->groupBox5->Size = System::Drawing::Size(412, 74);
			this->groupBox5->TabIndex = 7;
			this->groupBox5->TabStop = false;
			this->groupBox5->Text = L"—лучайное блуждание с отражающими экранами";
			this->groupBox5->Visible = true;
			// 
			// button9
			// 
			this->button9->Location = System::Drawing::Point(219, 45);
			this->button9->Name = L"button9";
			this->button9->Size = System::Drawing::Size(75, 23);
			this->button9->TabIndex = 12;
			this->button9->Text = L"—топ";
			this->button9->UseVisualStyleBackColor = true;
			this->button9->Click += gcnew System::EventHandler(this, &my_form::button9_Click);
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(116, 45);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(75, 23);
			this->button8->TabIndex = 11;
			this->button8->Text = L"—тарт";
			this->button8->UseVisualStyleBackColor = true;
			this->button8->Click += gcnew System::EventHandler(this, &my_form::button8_Click);
			// 
			// textBox9
			// 
			this->textBox9->Location = System::Drawing::Point(48, 47);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(47, 20);
			this->textBox9->TabIndex = 11;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(19, 50);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(22, 13);
			this->label7->TabIndex = 11;
			this->label7->Text = L"p =";
			// 
			// dataGridView2
			// 
			this->dataGridView2->AllowUserToAddRows = false;
			this->dataGridView2->AllowUserToDeleteRows = false;
			this->dataGridView2->AllowUserToResizeRows = false;
			this->dataGridView2->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView2->Location = System::Drawing::Point(6, 19);
			this->dataGridView2->Name = L"dataGridView2";
			this->dataGridView2->Size = System::Drawing::Size(400, 17);
			this->dataGridView2->TabIndex = 11;
			// 
			// my_form
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(998, 408);
			this->Controls->Add(this->groupBox5);
			this->Controls->Add(this->groupBox4);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->menuStrip1);
			this->Controls->Add(this->groupBox1);
			this->MainMenuStrip = this->menuStrip1;
			this->Name = L"my_form";
			this->Text = L"ќќяи—ѕ -  урсовой проект - гр. 22¬√1 - ћайоров ј. ќ.";
			this->Load += gcnew System::EventHandler(this, &my_form::my_form_Load);
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->menuStrip1->ResumeLayout(false);
			this->menuStrip1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->groupBox4->ResumeLayout(false);
			this->groupBox4->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->groupBox5->ResumeLayout(false);
			this->groupBox5->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView2))->EndInit();
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
			if ((L'а' <= in[i] && L'€' >= in[i]) || (L'a' <= in[i] && L'z' >= in[i]))
				ans += in[i];
		}
		return ans;
	}

	private: System::Void button1_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->textBox2->Text = get_lower_case(this->textBox1->Text);
	}

	private: System::Void лЅ22ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox1->Visible = !this->groupBox1->Visible;
		this->groupBox1->Enabled = !this->groupBox1->Enabled;
		/*
		this->groupBox2->Visible = false;
		this->groupBox2->Enabled = false;
		this->groupBox3->Visible = false;
		this->groupBox3->Enabled = false;
		this->groupBox4->Visible = false;
		this->groupBox4->Enabled = false;
		this->groupBox5->Enabled = false;
		this->groupBox5->Visible = false;
		*/
	}

	private: System::Void textBox1_KeyDown(System::Object^  sender, System::Windows::Forms::KeyEventArgs^  e) {
		if (e->KeyCode == Keys::Enter)
		{
			this->textBox2->Text = get_lower_case(this->textBox1->Text);
		}
	}
	private: System::Void лЅ23ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox2->Visible = !this->groupBox2->Visible;
		this->groupBox2->Enabled = !this->groupBox2->Enabled;
		/*
		this->groupBox1->Visible = false;
		this->groupBox1->Enabled = false;
		this->groupBox3->Visible = false;
		this->groupBox3->Enabled = false;
		this->groupBox4->Visible = false;
		this->groupBox4->Enabled = false;
		this->groupBox5->Enabled = false;
		this->groupBox5->Visible = false;
		*/
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

	private: int i_prime_j_nonprime_sum(std::vector<std::vector<int>> *vec)
	{
		int ans = 0;
		for (int i = 0; i < (*vec).size(); ++i)
			for (int j = 0; j < ((*vec)[i]).size(); ++j)
				if (is_prime(i) && !is_prime(j))
					ans += (*vec)[i][j];
		return ans;
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
		srand((unsigned int)time(0));
		try {
			dataGridView1->Rows->Clear();
			dataGridView1->Refresh();
			dataGridView1->RowCount = Int32::Parse(this->textBox4->Text);
			dataGridView1->ColumnCount = Int32::Parse(this->textBox5->Text);
			for (int i = 0; i < Int32::Parse(this->textBox4->Text); ++i) 
				for (int j = 0; j < Int32::Parse(this->textBox5->Text); ++j)
				{
					int x = rand() % 100 - 50;
					dataGridView1->Rows[i]->Cells[j]->Value = x;
					dataGridView1->Columns[j]->SortMode = DataGridViewColumnSortMode::NotSortable;
					dataGridView1->AutoResizeColumns();
				}
			this->button4->Enabled = true;
		}
		catch (...) {
			this->button4->Enabled = false;
		}
	}
	private: System::Void лЅ24ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox3->Visible = !this->groupBox3->Visible;
		this->groupBox3->Enabled = !this->groupBox3->Enabled;
		/*
		this->groupBox2->Visible = false;
		this->groupBox2->Enabled = false;
		this->groupBox1->Visible = false;
		this->groupBox1->Enabled = false;
		this->groupBox4->Visible = false;
		this->groupBox4->Enabled = false;
		this->groupBox5->Enabled = false;
		this->groupBox5->Visible = false;
		*/
	}

	std::vector<std::vector<int>> *grid_vector;
	private: System::Void button4_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			grid_vector = new std::vector<std::vector<int>>(this->dataGridView1->RowCount, std::vector<int>(this->dataGridView1->ColumnCount));
			for (int i = 0; i < this->dataGridView1->RowCount; ++i) 
				for (int j = 0; j < this->dataGridView1->ColumnCount; ++j)
					(*grid_vector)[i][j] = Int32::Parse(this->dataGridView1->Rows[i]->Cells[j]->Value->ToString());
			int ans = i_prime_j_nonprime_sum(grid_vector);
			this->textBox6->Text = System::Convert::ToString(ans);
		}
		catch (...) { }
	}

	private: System::Void button5_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->InitialDirectory = "C:\\";
		openFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog->Multiselect = false;
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try {
				String^ filePath = openFileDialog->FileName;
				std::string s = marshal_as<std::string>(filePath);
				std::ifstream fin(s);
				int R, C;
				fin >> R >> C;
				dataGridView1->Rows->Clear();
				dataGridView1->Refresh();
				dataGridView1->RowCount = R;
				dataGridView1->ColumnCount = C;
				for (int i = 0; i < R; ++i)
				{
					for (int j = 0; j < C; ++j)
					{
						int x;
						fin >> x;
						dataGridView1->Rows[i]->Cells[j]->Value = x;
						dataGridView1->Columns[j]->SortMode = DataGridViewColumnSortMode::NotSortable;
						dataGridView1->AutoResizeColumns();
						std::cout<< x << " ";
					}
				}

				grid_vector = new std::vector<std::vector<int>>(this->dataGridView1->RowCount, std::vector<int>(this->dataGridView1->ColumnCount));
				for (int i = 0; i < this->dataGridView1->RowCount; ++i)
					for (int j = 0; j < this->dataGridView1->ColumnCount; ++j)
						(*grid_vector)[i][j] = Int32::Parse(this->dataGridView1->Rows[i]->Cells[j]->Value->ToString());
				
				this->button4->Enabled = true;
			} catch (...) { 
				this->button4->Enabled = false;
			}
		}
	}

	private: System::Void button6_Click(System::Object^  sender, System::EventArgs^  e) {
		OpenFileDialog^ openFileDialog = gcnew OpenFileDialog();
		openFileDialog->InitialDirectory = "C:\\";
		openFileDialog->Filter = "Text Files (*.txt)|*.txt|All Files (*.*)|*.*";
		openFileDialog->Multiselect = false;
		if (openFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK)
		{
			try {
				String^ filePath = openFileDialog->FileName;
				std::string s = marshal_as<std::string>(filePath);
				std::ofstream fout(s);
				int R = dataGridView1->RowCount, C = dataGridView1->ColumnCount;
				fout << R  << " " << C << "\n";
				for (int i = 0; i < R; ++i)
				{
					for (int j = 0; j < C; ++j)
					{
						
						int x = Int32::Parse(dataGridView1->Rows[i]->Cells[j]->Value->ToString());
						fout << x << " ";
						
						std::cout<< x << " ";
					}
					fout << "\n";
					std::cout << "\n";
				}
			}
			catch (...) {
				
			}
		}
	}

	private: System::Void groupBox4_Enter(System::Object^  sender, System::EventArgs^  e) {
	}

	private: System::Void button7_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			double a = Double::Parse(textBox7->Text->ToString());
			double b = Double::Parse(textBox8->Text->ToString());
			std::vector<double> x;
			std::vector<double> y;
			double i = (b - a) / 50;
			chart1->Series->Clear();
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = gcnew System::Windows::Forms::DataVisualization::Charting::Series();
			System::Windows::Forms::DataVisualization::Charting::Series^ series2 = gcnew System::Windows::Forms::DataVisualization::Charting::Series();
			System::Windows::Forms::DataVisualization::Charting::Series^ series3 = gcnew System::Windows::Forms::DataVisualization::Charting::Series();
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series2->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series3->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Name = L"y = sin(ln(x))";
			series2->Name = L"r = -a * cos(2 * fi) / cos(fi)";
			series3->Name = L" ";
			series3->IsVisibleInLegend = false;
			series3->Color = System::Drawing::Color::Red;
			series2->Color = System::Drawing::Color::Red;
			chart1->Series->Add(series1);
			chart1->Series->Add(series2);
			chart1->Series->Add(series3);
			chart1->Dock = DockStyle::Fill;
			const double A = -3.33019;
			while (a <= b)
			{
				double x_ = a;
				double y_ = sin(log(a));

				x.push_back(x_);
				y.push_back(y_);

				series1->Points->AddXY(a, sin(log(a)));
				series2->Points->AddXY(a,   a * sqrt((A + a) / (A - a)));
				series3->Points->AddXY(a, - a * sqrt((A + a) / (A - a)));

				a += i;
				chart1->Update();
				Sleep(100);
			}
		}
		catch (...) {}
	}

	private: System::Void лЅ26ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox4->Visible = !this->groupBox4->Visible;
		this->groupBox4->Enabled = !this->groupBox4->Enabled;
		/*
		this->groupBox1->Visible = false;
		this->groupBox1->Enabled = false;
		this->groupBox2->Visible = false;
		this->groupBox2->Enabled = false;
		this->groupBox3->Visible = false;
		this->groupBox3->Enabled = false;
		this->groupBox5->Enabled = false;
		this->groupBox5->Visible = false;
		*/
	}

	private: System::Void лЅ27ToolStripMenuItem_Click(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox5->Visible = !this->groupBox5->Visible;
		this->groupBox5->Enabled = !this->groupBox5->Enabled;
		/*
		this->groupBox1->Visible = false;
		this->groupBox1->Enabled = false;
		this->groupBox2->Visible = false;
		this->groupBox2->Enabled = false;
		this->groupBox3->Visible = false;
		this->groupBox3->Enabled = false;
		this->groupBox4->Enabled = false;
		this->groupBox4->Visible = false;
		*/
	}

	private: System::Void chart1_Click(System::Object^  sender, System::EventArgs^  e) {
	}
	
	bool flag = true;
	private: System::Void button8_Click(System::Object^  sender, System::EventArgs^  e) {
		try {
			dataGridView2->RowCount = 1;
			dataGridView2->ColumnCount = 77;

			dataGridView2->ColumnHeadersVisible = false;
			dataGridView2->RowHeadersVisible = false;
			for (int c = 0; c < dataGridView2->ColumnCount; c++)
				dataGridView2->Columns[c]->Width = 4;

			int nC = dataGridView2->ColumnCount / 2;
			dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::Red;
			srand(time(0));
			int i = 0;
			while (flag)
			{
				i++;
				//std::cout << nC << "\n";
				double p = Convert::ToDouble(textBox9->Text);
				double t = (rand() % 100 * 1.0) / 100;
				if (t<=p && nC>0)
				{
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::White;
					--nC;
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::Red;
				}
				if (t<=p && nC==0)
				{
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::White;
					++nC;
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::Red;
				}
				if (t>p && nC<dataGridView2->ColumnCount-1)
				{
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::White;
					++nC;
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::Red;
				}
				if (t>p && nC==dataGridView2->ColumnCount-1)
				{
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::White;
					--nC;
					dataGridView2->Rows[0]->Cells[nC]->Style->BackColor = Color::Red;
				}
				dataGridView2->Update();
				dataGridView2->Refresh();

				Sleep(100);
				//System::Threading::Thread::Sleep(100);
			}
		} catch (...) { }
	}
	private: System::Void button9_Click(System::Object^  sender, System::EventArgs^  e) {
		flag = false;
	}
	private: System::Void лЅ27ToolStripMenuItem_Click_1(System::Object^  sender, System::EventArgs^  e) {
		this->groupBox5->Visible = !this->groupBox5->Visible;
		this->groupBox5->Enabled = !this->groupBox5->Enabled;
		/*
		this->groupBox1->Visible = false;
		this->groupBox1->Enabled = false;
		this->groupBox2->Visible = false;
		this->groupBox2->Enabled = false;
		this->groupBox3->Visible = false;
		this->groupBox3->Enabled = false;
		this->groupBox4->Enabled = false;
		this->groupBox4->Visible = false;
		*/
	}

	};
}
