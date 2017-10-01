#pragma once
#include "Matrix.h"

namespace Matrixcalculator {

	Matrix MatrixA;
	Matrix MatrixB;

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// —водка дл€ MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	public:
		MainForm(void)
		{
			MatrixA = Matrix(1, 1);
			MatrixB = Matrix(1, 1);
			// printMatrix(MatrixA, dataGridViewMatrixA);
			// printMatrix(MatrixB, dataGridViewMatrixB);
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ќсвободить все используемые ресурсы.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::DataGridView^  dataGridViewMatrixA;

	private: System::Windows::Forms::GroupBox^  groupBox2;
	private: System::Windows::Forms::DataGridView^  dataGridViewMatrixB;

	private: System::Windows::Forms::NumericUpDown^  RowsMatrixA;
	private: System::Windows::Forms::NumericUpDown^  ColumnsMatrixA;


	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::NumericUpDown^  RowsMatrixB;
	private: System::Windows::Forms::NumericUpDown^  ColumnsMatrixB;



	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  button2;
	private: System::Windows::Forms::Button^  button3;
	private: System::Windows::Forms::Button^  button4;

	protected:

	protected:

	protected:

	private:
		/// <summary>
		/// ќб€зательна€ переменна€ конструктора.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// “ребуемый метод дл€ поддержки конструктора Ч не измен€йте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->RowsMatrixA = (gcnew System::Windows::Forms::NumericUpDown());
			this->ColumnsMatrixA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMatrixA = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->RowsMatrixB = (gcnew System::Windows::Forms::NumericUpDown());
			this->ColumnsMatrixB = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMatrixB = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowsMatrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColumnsMatrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrixA))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowsMatrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColumnsMatrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrixB))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Controls->Add(this->RowsMatrixA);
			this->groupBox1->Controls->Add(this->ColumnsMatrixA);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dataGridViewMatrixA);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(460, 320);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Matrix A";
			// 
			// RowsMatrixA
			// 
			this->RowsMatrixA->Location = System::Drawing::Point(26, 32);
			this->RowsMatrixA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->RowsMatrixA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixA->Name = L"RowsMatrixA";
			this->RowsMatrixA->Size = System::Drawing::Size(66, 20);
			this->RowsMatrixA->TabIndex = 4;
			this->RowsMatrixA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixA->ValueChanged += gcnew System::EventHandler(this, &MainForm::ColumnsMatrixA_ValueChanged);
			// 
			// ColumnsMatrixA
			// 
			this->ColumnsMatrixA->Location = System::Drawing::Point(119, 32);
			this->ColumnsMatrixA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->ColumnsMatrixA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ColumnsMatrixA->Name = L"ColumnsMatrixA";
			this->ColumnsMatrixA->Size = System::Drawing::Size(66, 20);
			this->ColumnsMatrixA->TabIndex = 4;
			this->ColumnsMatrixA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ColumnsMatrixA->ValueChanged += gcnew System::EventHandler(this, &MainForm::ColumnsMatrixA_ValueChanged);
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Location = System::Drawing::Point(123, 16);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(47, 13);
			this->label2->TabIndex = 3;
			this->label2->Text = L"Columns";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(38, 16);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(34, 13);
			this->label1->TabIndex = 2;
			this->label1->Text = L"Rows";
			// 
			// dataGridViewMatrixA
			// 
			this->dataGridViewMatrixA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrixA->Location = System::Drawing::Point(6, 76);
			this->dataGridViewMatrixA->Name = L"dataGridViewMatrixA";
			this->dataGridViewMatrixA->Size = System::Drawing::Size(448, 238);
			this->dataGridViewMatrixA->TabIndex = 1;
			// 
			// groupBox2
			// 
			this->groupBox2->Controls->Add(this->RowsMatrixB);
			this->groupBox2->Controls->Add(this->ColumnsMatrixB);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->dataGridViewMatrixB);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(536, 12);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(460, 320);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Matrix B";
			// 
			// RowsMatrixB
			// 
			this->RowsMatrixB->Location = System::Drawing::Point(31, 32);
			this->RowsMatrixB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->RowsMatrixB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixB->Name = L"RowsMatrixB";
			this->RowsMatrixB->Size = System::Drawing::Size(66, 20);
			this->RowsMatrixB->TabIndex = 5;
			this->RowsMatrixB->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixB->ValueChanged += gcnew System::EventHandler(this, &MainForm::ColumnsMatrixB_ValueChanged);
			// 
			// ColumnsMatrixB
			// 
			this->ColumnsMatrixB->Location = System::Drawing::Point(124, 32);
			this->ColumnsMatrixB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 30, 0, 0, 0 });
			this->ColumnsMatrixB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ColumnsMatrixB->Name = L"ColumnsMatrixB";
			this->ColumnsMatrixB->Size = System::Drawing::Size(66, 20);
			this->ColumnsMatrixB->TabIndex = 6;
			this->ColumnsMatrixB->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ColumnsMatrixB->ValueChanged += gcnew System::EventHandler(this, &MainForm::ColumnsMatrixB_ValueChanged);
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Location = System::Drawing::Point(126, 16);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(47, 13);
			this->label3->TabIndex = 5;
			this->label3->Text = L"Columns";
			// 
			// dataGridViewMatrixB
			// 
			this->dataGridViewMatrixB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrixB->Location = System::Drawing::Point(6, 76);
			this->dataGridViewMatrixB->Name = L"dataGridViewMatrixB";
			this->dataGridViewMatrixB->Size = System::Drawing::Size(448, 238);
			this->dataGridViewMatrixB->TabIndex = 2;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Location = System::Drawing::Point(41, 16);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(34, 13);
			this->label4->TabIndex = 4;
			this->label4->Text = L"Rows";
			// 
			// button1
			// 
			this->button1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button1->Location = System::Drawing::Point(479, 111);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(51, 39);
			this->button1->TabIndex = 3;
			this->button1->Text = L"+";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// button2
			// 
			this->button2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button2->Location = System::Drawing::Point(479, 156);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(51, 39);
			this->button2->TabIndex = 3;
			this->button2->Text = L"-";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// button3
			// 
			this->button3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button3->Location = System::Drawing::Point(479, 201);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(51, 39);
			this->button3->TabIndex = 3;
			this->button3->Text = L"*";
			this->button3->UseVisualStyleBackColor = true;
			// 
			// button4
			// 
			this->button4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->button4->Location = System::Drawing::Point(479, 246);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(51, 39);
			this->button4->TabIndex = 3;
			this->button4->Text = L"/";
			this->button4->UseVisualStyleBackColor = true;
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Name = L"MainForm";
			this->Text = L"Matrix Calculator";
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowsMatrixA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColumnsMatrixA))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrixA))->EndInit();
			this->groupBox2->ResumeLayout(false);
			this->groupBox2->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowsMatrixB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColumnsMatrixB))->EndInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrixB))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	private: void printMatrix(Matrix & mt, System::Windows::Forms::DataGridView ^ dataGridView) {
		int Rows = mt.GetRows();
		int Columns = mt.GetColumns();

		dataGridView->RowCount = Rows;
		dataGridView->ColumnCount = Columns;

		for (int i = 0; i < Rows; i++) 
			for (int j = 0; j < Columns; j++) {
				dataGridView->TopLeftHeaderCell->Value = "Matrix";
				dataGridView->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
				dataGridView->Rows[i]->Cells[j]->Value = mt(i, j);
			}
		dataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView->AutoResizeColumns();

	}
	private: System::Void ColumnsMatrixA_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		int rows = Convert::ToInt32(RowsMatrixA->Value);
		int columns = Convert::ToInt32(ColumnsMatrixA->Value);
		MatrixA = Matrix(rows, columns);
		
		printMatrix(MatrixA, dataGridViewMatrixA);
	}
	private: System::Void ColumnsMatrixB_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		int rows = Convert::ToInt32(RowsMatrixB->Value);
		int columns = Convert::ToInt32(ColumnsMatrixB->Value);
		MatrixB = Matrix(rows, columns);

		printMatrix(MatrixB, dataGridViewMatrixB);
	}
};
}
