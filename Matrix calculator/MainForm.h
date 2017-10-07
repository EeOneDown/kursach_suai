#pragma once
#include "Matrix.h"

namespace Matrixcalculator {

	Matrix MatrixA;
	Matrix MatrixB;
	Matrix ResultMatrix;

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
	private: System::Windows::Forms::Button^  plus;
	private: System::Windows::Forms::Button^  minus;
	private: System::Windows::Forms::Button^  multiply;
	private: System::Windows::Forms::Button^  divide;







	private: System::Windows::Forms::GroupBox^  groupBox3;
	private: System::Windows::Forms::TextBox^  ColumnsResultMatrix;

	private: System::Windows::Forms::TextBox^  RowsResultMatrix;

	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::DataGridView^  dataGridViewResultMatrix;

	private: System::Windows::Forms::Label^  label6;



	private: System::Windows::Forms::Button^  TansposeMatrixA;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label8;
	private: System::Windows::Forms::Button^  TansposeMatrixB;

	private: System::Windows::Forms::Label^  label9;
	private: System::Windows::Forms::Button^  InverteMatrixA;

	private: System::Windows::Forms::Label^  label10;
	private: System::Windows::Forms::Button^  InverteMatrixB;
	private: System::Windows::Forms::Label^  label12;
	private: System::Windows::Forms::Label^  label11;
	private: System::Windows::Forms::Button^  CopyResultMatrixToMatrixB;
	private: System::Windows::Forms::Button^  CopyResultMatrixToMatrixA;
	private: System::Windows::Forms::CheckBox^  isSquareMatrixA;
	private: System::Windows::Forms::CheckBox^  isSquareMatrixB;
	private: System::Windows::Forms::ComboBox^  comboBoxGenerateMatrixA;
	private: System::Windows::Forms::Button^  GenerateMatrixA;
	private: System::Windows::Forms::Button^  GenerateMatrixB;
	private: System::Windows::Forms::ComboBox^  comboBoxGenerateMatrixB;







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
			this->GenerateMatrixA = (gcnew System::Windows::Forms::Button());
			this->comboBoxGenerateMatrixA = (gcnew System::Windows::Forms::ComboBox());
			this->isSquareMatrixA = (gcnew System::Windows::Forms::CheckBox());
			this->label9 = (gcnew System::Windows::Forms::Label());
			this->InverteMatrixA = (gcnew System::Windows::Forms::Button());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->TansposeMatrixA = (gcnew System::Windows::Forms::Button());
			this->RowsMatrixA = (gcnew System::Windows::Forms::NumericUpDown());
			this->ColumnsMatrixA = (gcnew System::Windows::Forms::NumericUpDown());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMatrixA = (gcnew System::Windows::Forms::DataGridView());
			this->groupBox2 = (gcnew System::Windows::Forms::GroupBox());
			this->GenerateMatrixB = (gcnew System::Windows::Forms::Button());
			this->isSquareMatrixB = (gcnew System::Windows::Forms::CheckBox());
			this->comboBoxGenerateMatrixB = (gcnew System::Windows::Forms::ComboBox());
			this->label10 = (gcnew System::Windows::Forms::Label());
			this->InverteMatrixB = (gcnew System::Windows::Forms::Button());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->TansposeMatrixB = (gcnew System::Windows::Forms::Button());
			this->RowsMatrixB = (gcnew System::Windows::Forms::NumericUpDown());
			this->ColumnsMatrixB = (gcnew System::Windows::Forms::NumericUpDown());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewMatrixB = (gcnew System::Windows::Forms::DataGridView());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->plus = (gcnew System::Windows::Forms::Button());
			this->minus = (gcnew System::Windows::Forms::Button());
			this->multiply = (gcnew System::Windows::Forms::Button());
			this->divide = (gcnew System::Windows::Forms::Button());
			this->groupBox3 = (gcnew System::Windows::Forms::GroupBox());
			this->label12 = (gcnew System::Windows::Forms::Label());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->CopyResultMatrixToMatrixB = (gcnew System::Windows::Forms::Button());
			this->CopyResultMatrixToMatrixA = (gcnew System::Windows::Forms::Button());
			this->ColumnsResultMatrix = (gcnew System::Windows::Forms::TextBox());
			this->RowsResultMatrix = (gcnew System::Windows::Forms::TextBox());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->dataGridViewResultMatrix = (gcnew System::Windows::Forms::DataGridView());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->groupBox1->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowsMatrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColumnsMatrixA))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrixA))->BeginInit();
			this->groupBox2->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->RowsMatrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->ColumnsMatrixB))->BeginInit();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewMatrixB))->BeginInit();
			this->groupBox3->SuspendLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResultMatrix))->BeginInit();
			this->SuspendLayout();
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox1->Controls->Add(this->GenerateMatrixA);
			this->groupBox1->Controls->Add(this->comboBoxGenerateMatrixA);
			this->groupBox1->Controls->Add(this->isSquareMatrixA);
			this->groupBox1->Controls->Add(this->label9);
			this->groupBox1->Controls->Add(this->InverteMatrixA);
			this->groupBox1->Controls->Add(this->label7);
			this->groupBox1->Controls->Add(this->TansposeMatrixA);
			this->groupBox1->Controls->Add(this->RowsMatrixA);
			this->groupBox1->Controls->Add(this->ColumnsMatrixA);
			this->groupBox1->Controls->Add(this->label2);
			this->groupBox1->Controls->Add(this->label1);
			this->groupBox1->Controls->Add(this->dataGridViewMatrixA);
			this->groupBox1->Location = System::Drawing::Point(12, 12);
			this->groupBox1->MaximumSize = System::Drawing::Size(862, 460);
			this->groupBox1->MinimumSize = System::Drawing::Size(460, 320);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(460, 320);
			this->groupBox1->TabIndex = 0;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"Matrix A";
			// 
			// GenerateMatrixA
			// 
			this->GenerateMatrixA->Location = System::Drawing::Point(355, 46);
			this->GenerateMatrixA->Name = L"GenerateMatrixA";
			this->GenerateMatrixA->Size = System::Drawing::Size(75, 23);
			this->GenerateMatrixA->TabIndex = 12;
			this->GenerateMatrixA->Text = L"Generate";
			this->GenerateMatrixA->UseVisualStyleBackColor = true;
			this->GenerateMatrixA->Click += gcnew System::EventHandler(this, &MainForm::GenerateMatrixA_Click);
			// 
			// comboBoxGenerateMatrixA
			// 
			this->comboBoxGenerateMatrixA->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Copy from B", L"Randomize", L"Randomize with sizes",
					L"Zeros"
			});
			this->comboBoxGenerateMatrixA->Location = System::Drawing::Point(333, 19);
			this->comboBoxGenerateMatrixA->Name = L"comboBoxGenerateMatrixA";
			this->comboBoxGenerateMatrixA->Size = System::Drawing::Size(121, 21);
			this->comboBoxGenerateMatrixA->TabIndex = 4;
			this->comboBoxGenerateMatrixA->Text = L"Zeros";
			this->comboBoxGenerateMatrixA->SelectionChangeCommitted += gcnew System::EventHandler(this, &MainForm::comboBox1_SelectedIndexChanged);
			// 
			// isSquareMatrixA
			// 
			this->isSquareMatrixA->AutoSize = true;
			this->isSquareMatrixA->Checked = true;
			this->isSquareMatrixA->CheckState = System::Windows::Forms::CheckState::Checked;
			this->isSquareMatrixA->Location = System::Drawing::Point(80, 58);
			this->isSquareMatrixA->Name = L"isSquareMatrixA";
			this->isSquareMatrixA->Size = System::Drawing::Size(60, 17);
			this->isSquareMatrixA->TabIndex = 11;
			this->isSquareMatrixA->Text = L"Square";
			this->isSquareMatrixA->UseVisualStyleBackColor = true;
			// 
			// label9
			// 
			this->label9->AutoSize = true;
			this->label9->Location = System::Drawing::Point(281, 13);
			this->label9->Name = L"label9";
			this->label9->Size = System::Drawing::Size(34, 13);
			this->label9->TabIndex = 10;
			this->label9->Text = L"Invert";
			// 
			// InverteMatrixA
			// 
			this->InverteMatrixA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InverteMatrixA->Location = System::Drawing::Point(278, 29);
			this->InverteMatrixA->Name = L"InverteMatrixA";
			this->InverteMatrixA->Size = System::Drawing::Size(40, 40);
			this->InverteMatrixA->TabIndex = 9;
			this->InverteMatrixA->Text = L"-1";
			this->InverteMatrixA->UseVisualStyleBackColor = true;
			this->InverteMatrixA->Click += gcnew System::EventHandler(this, &MainForm::InverteMatrixA_Click);
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Location = System::Drawing::Point(205, 13);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(57, 13);
			this->label7->TabIndex = 8;
			this->label7->Text = L"Transpose";
			// 
			// TansposeMatrixA
			// 
			this->TansposeMatrixA->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TansposeMatrixA->Location = System::Drawing::Point(212, 29);
			this->TansposeMatrixA->Name = L"TansposeMatrixA";
			this->TansposeMatrixA->Size = System::Drawing::Size(40, 40);
			this->TansposeMatrixA->TabIndex = 7;
			this->TansposeMatrixA->Text = L"T";
			this->TansposeMatrixA->UseVisualStyleBackColor = true;
			this->TansposeMatrixA->Click += gcnew System::EventHandler(this, &MainForm::TansposeMatrixA_Click);
			// 
			// RowsMatrixA
			// 
			this->RowsMatrixA->Location = System::Drawing::Point(26, 32);
			this->RowsMatrixA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->RowsMatrixA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixA->Name = L"RowsMatrixA";
			this->RowsMatrixA->Size = System::Drawing::Size(66, 20);
			this->RowsMatrixA->TabIndex = 4;
			this->RowsMatrixA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->RowsMatrixA->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixA->ValueChanged += gcnew System::EventHandler(this, &MainForm::ColumnsMatrixA_ValueChanged);
			// 
			// ColumnsMatrixA
			// 
			this->ColumnsMatrixA->Location = System::Drawing::Point(119, 32);
			this->ColumnsMatrixA->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->ColumnsMatrixA->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ColumnsMatrixA->Name = L"ColumnsMatrixA";
			this->ColumnsMatrixA->Size = System::Drawing::Size(66, 20);
			this->ColumnsMatrixA->TabIndex = 4;
			this->ColumnsMatrixA->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->dataGridViewMatrixA->AllowUserToAddRows = false;
			this->dataGridViewMatrixA->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrixA->Location = System::Drawing::Point(6, 76);
			this->dataGridViewMatrixA->Name = L"dataGridViewMatrixA";
			this->dataGridViewMatrixA->Size = System::Drawing::Size(448, 238);
			this->dataGridViewMatrixA->TabIndex = 1;
			this->dataGridViewMatrixA->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridViewMatrixA_CellValueChanged);
			// 
			// groupBox2
			// 
			this->groupBox2->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox2->Controls->Add(this->GenerateMatrixB);
			this->groupBox2->Controls->Add(this->isSquareMatrixB);
			this->groupBox2->Controls->Add(this->comboBoxGenerateMatrixB);
			this->groupBox2->Controls->Add(this->label10);
			this->groupBox2->Controls->Add(this->InverteMatrixB);
			this->groupBox2->Controls->Add(this->label8);
			this->groupBox2->Controls->Add(this->TansposeMatrixB);
			this->groupBox2->Controls->Add(this->RowsMatrixB);
			this->groupBox2->Controls->Add(this->ColumnsMatrixB);
			this->groupBox2->Controls->Add(this->label3);
			this->groupBox2->Controls->Add(this->dataGridViewMatrixB);
			this->groupBox2->Controls->Add(this->label4);
			this->groupBox2->Location = System::Drawing::Point(536, 12);
			this->groupBox2->MaximumSize = System::Drawing::Size(862, 460);
			this->groupBox2->MinimumSize = System::Drawing::Size(460, 320);
			this->groupBox2->Name = L"groupBox2";
			this->groupBox2->Size = System::Drawing::Size(460, 320);
			this->groupBox2->TabIndex = 2;
			this->groupBox2->TabStop = false;
			this->groupBox2->Text = L"Matrix B";
			// 
			// GenerateMatrixB
			// 
			this->GenerateMatrixB->Location = System::Drawing::Point(355, 46);
			this->GenerateMatrixB->Name = L"GenerateMatrixB";
			this->GenerateMatrixB->Size = System::Drawing::Size(75, 23);
			this->GenerateMatrixB->TabIndex = 12;
			this->GenerateMatrixB->Text = L"Generate";
			this->GenerateMatrixB->UseVisualStyleBackColor = true;
			this->GenerateMatrixB->Click += gcnew System::EventHandler(this, &MainForm::GenerateMatrixB_Click);
			// 
			// isSquareMatrixB
			// 
			this->isSquareMatrixB->AutoSize = true;
			this->isSquareMatrixB->Checked = true;
			this->isSquareMatrixB->CheckState = System::Windows::Forms::CheckState::Checked;
			this->isSquareMatrixB->Location = System::Drawing::Point(80, 58);
			this->isSquareMatrixB->Name = L"isSquareMatrixB";
			this->isSquareMatrixB->Size = System::Drawing::Size(60, 17);
			this->isSquareMatrixB->TabIndex = 11;
			this->isSquareMatrixB->Text = L"Square";
			this->isSquareMatrixB->UseVisualStyleBackColor = true;
			// 
			// comboBoxGenerateMatrixB
			// 
			this->comboBoxGenerateMatrixB->Items->AddRange(gcnew cli::array< System::Object^  >(4) {
				L"Copy from A", L"Randomize", L"Randomize with sizes",
					L"Zeros"
			});
			this->comboBoxGenerateMatrixB->Location = System::Drawing::Point(333, 19);
			this->comboBoxGenerateMatrixB->Name = L"comboBoxGenerateMatrixB";
			this->comboBoxGenerateMatrixB->Size = System::Drawing::Size(121, 21);
			this->comboBoxGenerateMatrixB->TabIndex = 4;
			this->comboBoxGenerateMatrixB->Text = L"Zeros";
			this->comboBoxGenerateMatrixB->SelectionChangeCommitted += gcnew System::EventHandler(this, &MainForm::comboBoxGenerateMatrixB_SelectedIndexChanged);
			// 
			// label10
			// 
			this->label10->AutoSize = true;
			this->label10->Location = System::Drawing::Point(281, 13);
			this->label10->Name = L"label10";
			this->label10->Size = System::Drawing::Size(34, 13);
			this->label10->TabIndex = 10;
			this->label10->Text = L"Invert";
			// 
			// InverteMatrixB
			// 
			this->InverteMatrixB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->InverteMatrixB->Location = System::Drawing::Point(278, 29);
			this->InverteMatrixB->Name = L"InverteMatrixB";
			this->InverteMatrixB->Size = System::Drawing::Size(40, 40);
			this->InverteMatrixB->TabIndex = 9;
			this->InverteMatrixB->Text = L"-1";
			this->InverteMatrixB->UseVisualStyleBackColor = true;
			this->InverteMatrixB->Click += gcnew System::EventHandler(this, &MainForm::InverteMatrixB_Click);
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->Location = System::Drawing::Point(205, 13);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(57, 13);
			this->label8->TabIndex = 8;
			this->label8->Text = L"Transpose";
			// 
			// TansposeMatrixB
			// 
			this->TansposeMatrixB->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TansposeMatrixB->Location = System::Drawing::Point(212, 29);
			this->TansposeMatrixB->Name = L"TansposeMatrixB";
			this->TansposeMatrixB->Size = System::Drawing::Size(40, 40);
			this->TansposeMatrixB->TabIndex = 7;
			this->TansposeMatrixB->Text = L"T";
			this->TansposeMatrixB->UseVisualStyleBackColor = true;
			this->TansposeMatrixB->Click += gcnew System::EventHandler(this, &MainForm::TansposeMatrixB_Click);
			// 
			// RowsMatrixB
			// 
			this->RowsMatrixB->Location = System::Drawing::Point(31, 32);
			this->RowsMatrixB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->RowsMatrixB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixB->Name = L"RowsMatrixB";
			this->RowsMatrixB->Size = System::Drawing::Size(66, 20);
			this->RowsMatrixB->TabIndex = 5;
			this->RowsMatrixB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			this->RowsMatrixB->Value = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->RowsMatrixB->ValueChanged += gcnew System::EventHandler(this, &MainForm::ColumnsMatrixB_ValueChanged);
			// 
			// ColumnsMatrixB
			// 
			this->ColumnsMatrixB->Location = System::Drawing::Point(124, 32);
			this->ColumnsMatrixB->Maximum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 9, 0, 0, 0 });
			this->ColumnsMatrixB->Minimum = System::Decimal(gcnew cli::array< System::Int32 >(4) { 1, 0, 0, 0 });
			this->ColumnsMatrixB->Name = L"ColumnsMatrixB";
			this->ColumnsMatrixB->Size = System::Drawing::Size(66, 20);
			this->ColumnsMatrixB->TabIndex = 6;
			this->ColumnsMatrixB->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
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
			this->dataGridViewMatrixB->AllowUserToAddRows = false;
			this->dataGridViewMatrixB->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewMatrixB->Location = System::Drawing::Point(6, 76);
			this->dataGridViewMatrixB->Name = L"dataGridViewMatrixB";
			this->dataGridViewMatrixB->Size = System::Drawing::Size(448, 238);
			this->dataGridViewMatrixB->TabIndex = 2;
			this->dataGridViewMatrixB->CellValueChanged += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::dataGridViewMatrixB_CellValueChanged);
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
			// plus
			// 
			this->plus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->plus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->plus->Location = System::Drawing::Point(479, 110);
			this->plus->Name = L"plus";
			this->plus->Size = System::Drawing::Size(50, 40);
			this->plus->TabIndex = 3;
			this->plus->Text = L"+";
			this->plus->UseVisualStyleBackColor = true;
			this->plus->Click += gcnew System::EventHandler(this, &MainForm::plus_Click);
			// 
			// minus
			// 
			this->minus->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->minus->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->minus->Location = System::Drawing::Point(479, 155);
			this->minus->Name = L"minus";
			this->minus->Size = System::Drawing::Size(50, 40);
			this->minus->TabIndex = 3;
			this->minus->Text = L"-";
			this->minus->UseVisualStyleBackColor = true;
			this->minus->Click += gcnew System::EventHandler(this, &MainForm::minus_Click);
			// 
			// multiply
			// 
			this->multiply->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->multiply->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->multiply->Location = System::Drawing::Point(479, 200);
			this->multiply->Name = L"multiply";
			this->multiply->Size = System::Drawing::Size(50, 40);
			this->multiply->TabIndex = 3;
			this->multiply->Text = L"*";
			this->multiply->UseVisualStyleBackColor = true;
			this->multiply->Click += gcnew System::EventHandler(this, &MainForm::multiply_Click);
			// 
			// divide
			// 
			this->divide->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->divide->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 16, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->divide->Location = System::Drawing::Point(479, 245);
			this->divide->Name = L"divide";
			this->divide->Size = System::Drawing::Size(50, 40);
			this->divide->TabIndex = 3;
			this->divide->Text = L"/";
			this->divide->UseVisualStyleBackColor = true;
			this->divide->Click += gcnew System::EventHandler(this, &MainForm::divide_Click);
			// 
			// groupBox3
			// 
			this->groupBox3->Anchor = System::Windows::Forms::AnchorStyles::None;
			this->groupBox3->Controls->Add(this->label12);
			this->groupBox3->Controls->Add(this->label11);
			this->groupBox3->Controls->Add(this->CopyResultMatrixToMatrixB);
			this->groupBox3->Controls->Add(this->CopyResultMatrixToMatrixA);
			this->groupBox3->Controls->Add(this->ColumnsResultMatrix);
			this->groupBox3->Controls->Add(this->RowsResultMatrix);
			this->groupBox3->Controls->Add(this->label5);
			this->groupBox3->Controls->Add(this->dataGridViewResultMatrix);
			this->groupBox3->Controls->Add(this->label6);
			this->groupBox3->Location = System::Drawing::Point(274, 349);
			this->groupBox3->MaximumSize = System::Drawing::Size(862, 460);
			this->groupBox3->MinimumSize = System::Drawing::Size(460, 320);
			this->groupBox3->Name = L"groupBox3";
			this->groupBox3->Size = System::Drawing::Size(460, 320);
			this->groupBox3->TabIndex = 2;
			this->groupBox3->TabStop = false;
			this->groupBox3->Text = L"Result Matrix";
			// 
			// label12
			// 
			this->label12->AutoSize = true;
			this->label12->Location = System::Drawing::Point(370, 25);
			this->label12->Name = L"label12";
			this->label12->Size = System::Drawing::Size(84, 13);
			this->label12->TabIndex = 8;
			this->label12->Text = L"Copy to Matrix B";
			// 
			// label11
			// 
			this->label11->AutoSize = true;
			this->label11->Location = System::Drawing::Point(7, 25);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(84, 13);
			this->label11->TabIndex = 8;
			this->label11->Text = L"Copy to Matrix A";
			// 
			// CopyResultMatrixToMatrixB
			// 
			this->CopyResultMatrixToMatrixB->Location = System::Drawing::Point(382, 38);
			this->CopyResultMatrixToMatrixB->Name = L"CopyResultMatrixToMatrixB";
			this->CopyResultMatrixToMatrixB->Size = System::Drawing::Size(72, 25);
			this->CopyResultMatrixToMatrixB->TabIndex = 7;
			this->CopyResultMatrixToMatrixB->Text = L"Copy";
			this->CopyResultMatrixToMatrixB->UseVisualStyleBackColor = true;
			this->CopyResultMatrixToMatrixB->Click += gcnew System::EventHandler(this, &MainForm::CopyResultMatrixToMatrixB_Click);
			// 
			// CopyResultMatrixToMatrixA
			// 
			this->CopyResultMatrixToMatrixA->Location = System::Drawing::Point(6, 38);
			this->CopyResultMatrixToMatrixA->Name = L"CopyResultMatrixToMatrixA";
			this->CopyResultMatrixToMatrixA->Size = System::Drawing::Size(72, 25);
			this->CopyResultMatrixToMatrixA->TabIndex = 7;
			this->CopyResultMatrixToMatrixA->Text = L"Copy";
			this->CopyResultMatrixToMatrixA->UseVisualStyleBackColor = true;
			this->CopyResultMatrixToMatrixA->Click += gcnew System::EventHandler(this, &MainForm::CopyResultMatrixToMatrixA_Click);
			// 
			// ColumnsResultMatrix
			// 
			this->ColumnsResultMatrix->Location = System::Drawing::Point(246, 41);
			this->ColumnsResultMatrix->Name = L"ColumnsResultMatrix";
			this->ColumnsResultMatrix->ReadOnly = true;
			this->ColumnsResultMatrix->Size = System::Drawing::Size(66, 20);
			this->ColumnsResultMatrix->TabIndex = 6;
			this->ColumnsResultMatrix->Text = L"0";
			this->ColumnsResultMatrix->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// RowsResultMatrix
			// 
			this->RowsResultMatrix->Location = System::Drawing::Point(155, 41);
			this->RowsResultMatrix->Name = L"RowsResultMatrix";
			this->RowsResultMatrix->ReadOnly = true;
			this->RowsResultMatrix->Size = System::Drawing::Size(66, 20);
			this->RowsResultMatrix->TabIndex = 6;
			this->RowsResultMatrix->Text = L"0";
			this->RowsResultMatrix->TextAlign = System::Windows::Forms::HorizontalAlignment::Center;
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Location = System::Drawing::Point(256, 25);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(47, 13);
			this->label5->TabIndex = 5;
			this->label5->Text = L"Columns";
			// 
			// dataGridViewResultMatrix
			// 
			this->dataGridViewResultMatrix->AllowUserToAddRows = false;
			this->dataGridViewResultMatrix->AllowUserToDeleteRows = false;
			this->dataGridViewResultMatrix->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridViewResultMatrix->ImeMode = System::Windows::Forms::ImeMode::NoControl;
			this->dataGridViewResultMatrix->Location = System::Drawing::Point(6, 76);
			this->dataGridViewResultMatrix->Name = L"dataGridViewResultMatrix";
			this->dataGridViewResultMatrix->ReadOnly = true;
			this->dataGridViewResultMatrix->Size = System::Drawing::Size(448, 238);
			this->dataGridViewResultMatrix->TabIndex = 2;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Location = System::Drawing::Point(171, 25);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(34, 13);
			this->label6->TabIndex = 4;
			this->label6->Text = L"Rows";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->AutoScroll = true;
			this->ClientSize = System::Drawing::Size(1008, 681);
			this->Controls->Add(this->divide);
			this->Controls->Add(this->multiply);
			this->Controls->Add(this->minus);
			this->Controls->Add(this->plus);
			this->Controls->Add(this->groupBox3);
			this->Controls->Add(this->groupBox2);
			this->Controls->Add(this->groupBox1);
			this->Cursor = System::Windows::Forms::Cursors::Default;
			this->FormBorderStyle = System::Windows::Forms::FormBorderStyle::Fixed3D;
			this->MaximizeBox = false;
			this->Name = L"MainForm";
			this->StartPosition = System::Windows::Forms::FormStartPosition::CenterScreen;
			this->Text = L"Matrix Calculator";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainForm_Load);
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
			this->groupBox3->ResumeLayout(false);
			this->groupBox3->PerformLayout();
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridViewResultMatrix))->EndInit();
			this->ResumeLayout(false);

		}
#pragma endregion
	// finction to check generation, generate and print matrix
	private: void generateAndPrintMatrix(Matrix & mt, System::String ^ comboBoxText,
		System::Windows::Forms::DataGridView^ dataGridView, System::Windows::Forms::NumericUpDown^ numericRows,
		System::Windows::Forms::NumericUpDown^ numericColumns, System::Windows::Forms::CheckBox^ isSquare) {
		if (comboBoxText == "Copy from A") {
			RowsMatrixB->Value = MatrixA.GetRows();
			ColumnsMatrixB->Value = MatrixA.GetColumns();

			MatrixB = MatrixA;
			printMatrix(MatrixB, dataGridViewMatrixB);
		}
		else if (comboBoxText == "Copy from B") {
			RowsMatrixA->Value = MatrixB.GetRows();
			ColumnsMatrixA->Value = MatrixB.GetColumns();

			MatrixA = MatrixB;
			printMatrix(MatrixA, dataGridViewMatrixA);
		}
		else if (comboBoxText == "Randomize") {
			int rows = Convert::ToInt32(numericRows->Text);
			int columns = Convert::ToInt32(numericColumns->Text);

			mt = Matrix(rows, columns);
			randomizeMatrixValues(mt, -1000, 1000);
			printMatrix(mt, dataGridView);
		}
		else if (comboBoxText == "Randomize with sizes") {
			int rows = rand() % 9 + 1;
			int columns = rows;
			if (!isSquare->Checked)
				columns = rand() % 9 + 1;

			numericRows->Value = rows;
			numericColumns->Value = columns;

			mt = Matrix(rows, columns);
			randomizeMatrixValues(mt, -1000, 1000);
			printMatrix(mt, dataGridView);
		}
		else if (comboBoxText == "Zeros") {
			int rows = Convert::ToInt32(numericRows->Text);
			int columns = Convert::ToInt32(numericColumns->Text);

			mt = Matrix(rows, columns);
			printMatrix(mt, dataGridView);
		}
	}

	// function to check is matrix square
	private: bool isSquare(Matrix & mt) {
		return (mt.GetRows() == mt.GetColumns());
	}

	// function to check dimensions equality of matrixes 
	private: bool isSameSizes(Matrix & mt1, Matrix & mt2) {
		return (mt1.GetRows() == mt2.GetRows() && mt1.GetColumns() == mt2.GetColumns());
	}
	
	// function to check consistency of matrixes
	private: bool isReadyToMultiply(Matrix & mt1, Matrix & mt2) {
		return (mt1.GetColumns() == mt2.GetRows());
	}
	
	// function to initialize matrix of random values
	private: void randomizeMatrixValues(Matrix & mt, double min, double max) {
		for (unsigned int i = 0; i < mt.GetRows(); i++)
			for (unsigned int j = 0; j < mt.GetColumns(); j++)
				mt.SetValue(i, j, randomDouble(min, max));
		
	}
	
	// function to generate random double number
	private: double randomDouble(double min, double max) {
		return round(((double)rand() / (double)RAND_MAX * (max - min) + min) * 1000) / 1000.;
	}

	// function to change value of matrix at user input
	private: void editMatrixValue(Matrix & mt, System::Windows::Forms::DataGridView^ dataGridView) {
		double newValue;

		if (!dataGridView->CurrentCell || !dataGridView->CurrentCell->Value)
			return;

		if (!Double::TryParse(Convert::ToString(dataGridView->CurrentCell->Value), newValue)) {
			MessageBox::Show("Matrix's elements must be numbers.", "Error!");
			dataGridView->CurrentCell->Value = "0";
		}

		int i = dataGridView->CurrentCell->RowIndex;
		int j = dataGridView->CurrentCell->ColumnIndex;

		mt.SetValue(i, j, newValue);
	}

	// function to output matrix to dataGridView
	private: void printMatrix(Matrix & mt, System::Windows::Forms::DataGridView^ dataGridView) {
		int Rows = mt.GetRows();
		int Columns = mt.GetColumns();

		dataGridView->RowCount = Rows;
		dataGridView->ColumnCount = Columns;
		dataGridView->TopLeftHeaderCell->Value = "Matrix";

		for (int i = 0; i < Rows; i++) 
			for (int j = 0; j < Columns; j++) {
				dataGridView->Rows[i]->Cells[j]->Value = mt(i, j);
				dataGridView->Columns[j]->HeaderCell->Value = Convert::ToString(j + 1);
				dataGridView->Rows[i]->HeaderCell->Value = Convert::ToString(i + 1);
			}
		dataGridView->AutoResizeRowHeadersWidth(DataGridViewRowHeadersWidthSizeMode::AutoSizeToAllHeaders);
		dataGridView->AutoResizeColumns();

	}

	// print matrixes when MainForm loads
	private: System::Void MainForm_Load(System::Object^  sender, System::EventArgs^  e) {
		printMatrix(MatrixA, dataGridViewMatrixA);
		printMatrix(MatrixB, dataGridViewMatrixB);
	}

	// change MatrixA when user changes sizes
	private: System::Void ColumnsMatrixA_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		int rows = Convert::ToInt32(RowsMatrixA->Value);
		int columns = Convert::ToInt32(ColumnsMatrixA->Value);
		if (rows == columns)
			isSquareMatrixA->Checked = true;
		else
			isSquareMatrixA->Checked = false;
	}

	// change MatrixB when user changes sizes
	private: System::Void ColumnsMatrixB_ValueChanged(System::Object^  sender, System::EventArgs^  e) {
		int rows = Convert::ToInt32(RowsMatrixB->Value);
		int columns = Convert::ToInt32(ColumnsMatrixB->Value);
		if (rows == columns)
			isSquareMatrixB->Checked = true;
		else
			isSquareMatrixB->Checked = false;
	}

	// change value of MatrixA at user input
	private: System::Void dataGridViewMatrixA_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		editMatrixValue(MatrixA, dataGridViewMatrixA);
	}

	// change value of MatrixB at user input
	private: System::Void dataGridViewMatrixB_CellValueChanged(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e) {
		editMatrixValue(MatrixB, dataGridViewMatrixB);
	}

	// transpose and print MatrixA
	private: System::Void TansposeMatrixA_Click(System::Object^  sender, System::EventArgs^  e) {
		ResultMatrix = MatrixA.Transpose();
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
	}

	// transpose and print MatrixB
	private: System::Void TansposeMatrixB_Click(System::Object^  sender, System::EventArgs^  e) {
		ResultMatrix = MatrixB.Transpose();
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
	}

	// invert and print MatrixA
	private: System::Void InverteMatrixA_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Cursor = System::Windows::Forms::Cursors::AppStarting;
		if (!isSquare(MatrixA)) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Matrix must be square.", "Error!");
			return;
		}
		double determinantA = MatrixA.GetDeterminant();
		if (!determinantA) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Matrix determinant is zero.", "Error!");
			return;
		}
		ResultMatrix = MatrixA.GetAdjugateMatrix() / determinantA;
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
		this->Cursor = System::Windows::Forms::Cursors::Default;
	}

	// invert and print MatrixB
	private: System::Void InverteMatrixB_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Cursor = System::Windows::Forms::Cursors::AppStarting;
		if (!isSquare(MatrixB)) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Matrix must be square.", "Error!");
			return;
		}
		double determinantB = MatrixB.GetDeterminant();
		if (!determinantB) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Matrix determinant is zero.", "Error!");
			return;
		}
		ResultMatrix = MatrixB.GetAdjugateMatrix() / determinantB;
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
		this->Cursor = System::Windows::Forms::Cursors::Default;
	}

	// addition of matrixes with checking
	private: System::Void plus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!isSameSizes(MatrixA, MatrixB)) {
			MessageBox::Show("The dimensions of the matrices must be equal.", "Error!");
			return;
		}
		ResultMatrix = MatrixA + MatrixB;
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
	}

	// subtraction of matrixes with checking
	private: System::Void minus_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!isSameSizes(MatrixA, MatrixB)) {
			MessageBox::Show("The dimensions of the matrices must be equal.", "Error!");
			return;
		}
		ResultMatrix = MatrixA - MatrixB;
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
	}

	// multiplication of matrixes with checking
	private: System::Void multiply_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Cursor = System::Windows::Forms::Cursors::AppStarting;
		if (MatrixB.GetRows() == 1 && MatrixB.GetColumns() == 1 && (MatrixA.GetColumns() > 1 || MatrixA.GetRows() > 1)) {
			ResultMatrix = MatrixA * MatrixB(0, 0);
			MessageBox::Show("Matrix B is number.", "Attention!");
		}
		else if (MatrixA.GetRows() == 1 && MatrixA.GetColumns() == 1 && (MatrixB.GetColumns() > 1 || MatrixB.GetRows() > 1)) {
			ResultMatrix = MatrixB * MatrixA(0, 0);
			MessageBox::Show("Matrix A is number.", "Attention!");
		}
		else if (!isReadyToMultiply(MatrixA, MatrixB)) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("The matrixes should be consistent.", "Error!");
			return;
		}
		else
			ResultMatrix = MatrixA * MatrixB;
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
		this->Cursor = System::Windows::Forms::Cursors::Default;
	}

	// division of matrixes with checking
	private: System::Void divide_Click(System::Object^  sender, System::EventArgs^  e) {
		this->Cursor = System::Windows::Forms::Cursors::AppStarting;
		if (!isSquare(MatrixB)) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Matrix must be square.", "Error!");
			return;
		}
		double determinantB = MatrixB.GetDeterminant();
		if (!determinantB) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("Matrix determinant is zero.", "Error!");
			return;
		}
		auto newMatrix = new Matrix();
		*newMatrix = MatrixB.GetAdjugateMatrix() / determinantB;
		if (MatrixB.GetRows() == 1 && MatrixB.GetColumns() == 1 && (MatrixA.GetColumns() > 1 || MatrixA.GetRows() > 1)) {
			ResultMatrix = MatrixA * (*newMatrix)(0, 0);
			MessageBox::Show("Matrix B is number.", "Attention!");
		}
		else if (!isReadyToMultiply(MatrixA, MatrixB)) {
			this->Cursor = System::Windows::Forms::Cursors::Default;
			MessageBox::Show("The matrixes should be consistent.", "Error!");
			return;
		}
		else 
			ResultMatrix = MatrixA * *newMatrix;
		RowsResultMatrix->Text = Convert::ToString(ResultMatrix.GetRows());
		ColumnsResultMatrix->Text = Convert::ToString(ResultMatrix.GetColumns());
		printMatrix(ResultMatrix, dataGridViewResultMatrix);
		this->Cursor = System::Windows::Forms::Cursors::Default;
	}

	// copy ResultMatrix to MatrixA
	private: System::Void CopyResultMatrixToMatrixA_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!ResultMatrix.GetRows() || !ResultMatrix.GetColumns()) {
			MessageBox::Show("Nothing to copy.", "Error!");
			return;
		}
		RowsMatrixA->Value = Convert::ToInt32(RowsResultMatrix->Text);
		ColumnsMatrixA->Value = Convert::ToInt32(ColumnsResultMatrix->Text);
		MatrixA = ResultMatrix;
		printMatrix(MatrixA, dataGridViewMatrixA);
	}

	// copy ResultMatrix to MatrixB
	private: System::Void CopyResultMatrixToMatrixB_Click(System::Object^  sender, System::EventArgs^  e) {
		if (!ResultMatrix.GetRows() || !ResultMatrix.GetColumns()) {
			MessageBox::Show("Nothing to copy.", "Error!");
			return;
		}
		RowsMatrixB->Value = Convert::ToInt32(RowsResultMatrix->Text);
		ColumnsMatrixB->Value = Convert::ToInt32(ColumnsResultMatrix->Text);
		MatrixB = ResultMatrix;
		printMatrix(MatrixB, dataGridViewMatrixB);
	}

	// when user select how to generate MatrixA
	private: System::Void comboBox1_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
		generateAndPrintMatrix(MatrixA, comboBoxGenerateMatrixA->SelectedItem->ToString(), dataGridViewMatrixA, 
			RowsMatrixA, ColumnsMatrixA, isSquareMatrixA);
	}

	// when user press button to regenerate MatrixA
	private: System::Void GenerateMatrixA_Click(System::Object^  sender, System::EventArgs^  e) {
		generateAndPrintMatrix(MatrixA, comboBoxGenerateMatrixA->Text, dataGridViewMatrixA, RowsMatrixA, ColumnsMatrixA, isSquareMatrixA);
	}

	// when user select how to generate MatrixB
	private: System::Void comboBoxGenerateMatrixB_SelectedIndexChanged(System::Object^  sender, System::EventArgs^  e) {
			generateAndPrintMatrix(MatrixB, comboBoxGenerateMatrixB->SelectedItem->ToString(), dataGridViewMatrixB, 
				RowsMatrixB, ColumnsMatrixB, isSquareMatrixB);
	}

	// when user press button to regenerate MatrixA
	private: System::Void GenerateMatrixB_Click(System::Object^  sender, System::EventArgs^  e) {
		generateAndPrintMatrix(MatrixB, comboBoxGenerateMatrixB->Text, dataGridViewMatrixB, RowsMatrixB, ColumnsMatrixB, isSquareMatrixB);
	}
};
}
