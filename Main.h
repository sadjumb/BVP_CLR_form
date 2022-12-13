#pragma once
#include "Solution.h"

namespace BVPCLRform
{

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для Main
	/// </summary>
	public ref class Main : public System::Windows::Forms::Form
	{
	public:
		Main(void)
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
		~Main()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^ groupBox1;
	protected:
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::GroupBox^ groupBox2;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::TextBox^ textBox1;
	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::DataVisualization::Charting::Chart^ chart1;

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
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle1 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^ dataGridViewCellStyle2 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataVisualization::Charting::ChartArea^ chartArea1 = (gcnew System::Windows::Forms::DataVisualization::Charting::ChartArea());
			System::Windows::Forms::DataVisualization::Charting::Legend^ legend1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Legend());
			System::Windows::Forms::DataVisualization::Charting::Series^ series1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Series());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->chart1 = (gcnew System::Windows::Forms::DataVisualization::Charting::Chart());
			this->groupBox1->SuspendLayout();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->groupBox2);
			this->groupBox1->Controls->Add(this->textBox1);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Dock = System::Windows::Forms::DockStyle::Top;
			this->groupBox1->Location = System::Drawing::Point(0, 0);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(1579, 180);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(401, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(0, 24);
			this->label2->TabIndex = 3;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->button1);
			this->groupBox2->Controls->Add(this->button2);
			this->groupBox2->Controls->Add(this->button3);
			this->groupBox2->Location = System::Drawing::Point(33, 52);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(277, 122);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(31, 17);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(212, 29);
			this->button1->TabIndex = 4;
			this->button1->Text = L"Решить тестовую задачу";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &Main::button1_Click);
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(31, 52);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(212, 29);
			this->button2->TabIndex = 3;
			this->button2->Text = L"Решить основную задачу";
			this->button2->UseVisualStyleBackColor = true;
			this->button2->Click += gcnew System::EventHandler(this, &Main::button2_Click);
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(31, 87);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(212, 29);
			this->button3->TabIndex = 2;
			this->button3->Text = L"Показать задачи";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// textBox1
			// 
			this->textBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->textBox1->Location = System::Drawing::Point(210, 13);
			this->textBox1->Name = L"textBox1";
			this->textBox1->Size = System::Drawing::Size(101, 31);
			this->textBox1->TabIndex = 1;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 15.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(12, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(192, 25);
			this->label1->TabIndex = 0;
			this->label1->Text = L"Число разбиений:";
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			dataGridViewCellStyle1->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle1->BackColor = System::Drawing::SystemColors::Window;
			dataGridViewCellStyle1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 14.25F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle1->ForeColor = System::Drawing::SystemColors::ControlText;
			dataGridViewCellStyle1->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle1->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle1->WrapMode = System::Windows::Forms::DataGridViewTriState::False;
			this->dataGridView1->DefaultCellStyle = dataGridViewCellStyle1;
			this->dataGridView1->Dock = System::Windows::Forms::DockStyle::Left;
			this->dataGridView1->Location = System::Drawing::Point(0, 180);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->ReadOnly = true;
			dataGridViewCellStyle2->Alignment = System::Windows::Forms::DataGridViewContentAlignment::MiddleLeft;
			dataGridViewCellStyle2->BackColor = System::Drawing::SystemColors::Control;
			dataGridViewCellStyle2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 27.75F, System::Drawing::FontStyle::Regular,
				System::Drawing::GraphicsUnit::Point, static_cast<System::Byte>(204)));
			dataGridViewCellStyle2->ForeColor = System::Drawing::SystemColors::WindowText;
			dataGridViewCellStyle2->SelectionBackColor = System::Drawing::SystemColors::Highlight;
			dataGridViewCellStyle2->SelectionForeColor = System::Drawing::SystemColors::HighlightText;
			dataGridViewCellStyle2->WrapMode = System::Windows::Forms::DataGridViewTriState::True;
			this->dataGridView1->RowHeadersDefaultCellStyle = dataGridViewCellStyle2;
			this->dataGridView1->Size = System::Drawing::Size(663, 870);
			this->dataGridView1->TabIndex = 2;
			// 
			// chart1
			// 
			this->chart1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Right));
			chartArea1->Name = L"ChartArea1";
			this->chart1->ChartAreas->Add(chartArea1);
			legend1->Name = L"Legend1";
			this->chart1->Legends->Add(legend1);
			this->chart1->Location = System::Drawing::Point(669, 186);
			this->chart1->Name = L"chart1";
			series1->ChartArea = L"ChartArea1";
			series1->ChartType = System::Windows::Forms::DataVisualization::Charting::SeriesChartType::Line;
			series1->Legend = L"Legend1";
			series1->MarkerBorderColor = System::Drawing::Color::Cyan;
			series1->MarkerColor = System::Drawing::Color::Ivory;
			series1->Name = L"Series1";
			this->chart1->Series->Add(series1);
			this->chart1->Size = System::Drawing::Size(910, 853);
			this->chart1->TabIndex = 1;
			this->chart1->Text = L"chart1";
			// 
			// Main
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1579, 1050);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->chart1);
			this->Controls->Add(this->groupBox1);
			this->Name = L"Main";
			this->Text = L"Main";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->groupBox2->ResumeLayout(false);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->chart1))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		chart1->Series[0]->Points->Clear();
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
		size_t n = System::Convert::ToUInt64(textBox1->Text);
		dataGridView1->ColumnCount = 5;
		dataGridView1->RowCount = n + 2;
		dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("№ узла");
		dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x");
		dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("u(x)");
		dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("v(x)");
		dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("|u(x)-v(x)|");
		auto y = solve_test(n);
		auto y_true = get_true_test_solution(n);
		double x = 0.0;
		double step = 1.0 / n;
		double max_er = 0.0;
		double x_max_er = 0.0;
		for (size_t i = 0; i < y.size(); ++i, x += step)
		{
			chart1->Series[0]->Points->AddXY(x, y[i]);
			dataGridView1->Rows[i + 1]->Cells[0]->Value = i;
			dataGridView1->Rows[i + 1]->Cells[1]->Value = x;
			dataGridView1->Rows[i + 1]->Cells[2]->Value = y_true[i];
			dataGridView1->Rows[i + 1]->Cells[3]->Value = y[i];
			dataGridView1->Rows[i + 1]->Cells[4]->Value = fabs(y_true[i] - y[i]);
			if(fabs(y_true[i] - y[i]) > max_er)
			{
				max_er = fabs(y_true[i] - y[i]);
				x_max_er = x;
			}
		}
		String^ res = gcnew String("Для решения тестовой задачи использована сетка с числом разбиений: " + System::Convert::ToString(n) +
		                           "\nТестовая задача решена с точностью: " + System::Convert::ToString(max_er) + 
			                         "\nМаксимальное отклонение истинного решения от численного в точке: " + System::Convert::ToString(x_max_er));
		label2->Text = gcnew String(res);
	}
	private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e)
	{
		chart1->Series[0]->Points->Clear();
		dataGridView1->Rows->Clear();
		dataGridView1->Columns->Clear();
		dataGridView1->Refresh();
		size_t n = System::Convert::ToUInt64(textBox1->Text);
		dataGridView1->ColumnCount = 5;
		dataGridView1->RowCount = n + 2;
		dataGridView1->Rows[0]->Cells[0]->Value = gcnew String("№ узла");
		dataGridView1->Rows[0]->Cells[1]->Value = gcnew String("x");
		dataGridView1->Rows[0]->Cells[2]->Value = gcnew String("V(x)");
		dataGridView1->Rows[0]->Cells[3]->Value = gcnew String("v2(x)");
		dataGridView1->Rows[0]->Cells[4]->Value = gcnew String("|v2(x)-v(x)|");
		auto y = solve_main(n);
		auto y2 = solve_main(n*2);
		double x = 0.0;
		double step = 1.0 / n;
		double max_er = 0.0;
		double x_max_er = 0.0;
		for (size_t i = 0, j = 0; i < y.size(); ++i, j += 2, x += step)
		{
			chart1->Series[0]->Points->AddXY(x, y[i]);
			dataGridView1->Rows[i + 1]->Cells[0]->Value = i;
			dataGridView1->Rows[i + 1]->Cells[1]->Value = x;
			dataGridView1->Rows[i + 1]->Cells[2]->Value = y[i];
			dataGridView1->Rows[i + 1]->Cells[3]->Value = y2[j];
			dataGridView1->Rows[i + 1]->Cells[4]->Value = fabs(y2[j] - y[i]);
			if (fabs(y2[j] - y[i]) > max_er)
			{
				max_er = fabs(y2[j] - y[i]);
				x_max_er = x;
			}
		}
		String^ res = gcnew String("Для решения основной задачи использована сетка с числом разбиений: " + System::Convert::ToString(n) +
			"\nОсновная задача решена с точностью: " + System::Convert::ToString(max_er) +
			"\nМаксимальное отклонение решения с половинным шагом от одинарного в точке: " + System::Convert::ToString(x_max_er));
		label2->Text = gcnew String(res);
	}
};
}
