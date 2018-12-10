#pragma once
#include "AddForm.h"
#include "Unit.h"
#include <iostream>
#include <fstream>
#include <string>

namespace Project3 {

	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing; 
	using namespace System;
	using namespace System::Windows::Forms;
	using namespace std;
	using namespace System::IO;

	/// <summary>
	/// ������ ��� MainForm
	/// </summary>
	public ref class MainForm : public System::Windows::Forms::Form
	{
	private: System::Windows::Forms::GroupBox^  groupBox1;
	private: System::Windows::Forms::Button^  Button_CancelSearch;
	private: System::Windows::Forms::Button^  Button_DeleteAll;			 
	private: System::Windows::Forms::Button^  Button_SortingByName;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column_Name;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column_Date;
	private: System::Windows::Forms::DataGridViewCheckBoxColumn^  Column_Work;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column_Country;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column_Price;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column_Number;
	private: System::Windows::Forms::DataGridViewTextBoxColumn^  Column_Note;
	private: System::Windows::Forms::DataGridViewButtonColumn^  Column_Delete;
	private: System::Windows::Forms::TextBox^  TextBox_Name;

	public:
		MainForm(void)
		{
			InitializeComponent();
		}

	protected:
		/// <summary>
		/// ���������� ��� ������������ �������.
		/// </summary>
		~MainForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  Button_Add;
	private: System::Windows::Forms::DataGridView^  DataGridView;
	private: System::Windows::Forms::Button^  Button_Open;
	private: System::Windows::Forms::Button^  Button_Search;
	private: System::Windows::Forms::Button^  Button_Exit;
	private: System::Windows::Forms::Button^  Button_Save;
	private: System::Windows::Forms::OpenFileDialog^  OpenFileDialog;
	private: System::Windows::Forms::SaveFileDialog^  SaveFileDialog;

	private:
		/// <summary>
		/// ������������ ���������� ������������.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// ��������� ����� ��� ��������� ������������ � �� ��������� 
		/// ���������� ����� ������ � ������� ��������� ����.
		/// </summary>
		void InitializeComponent(void)
		{
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle3 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			System::Windows::Forms::DataGridViewCellStyle^  dataGridViewCellStyle4 = (gcnew System::Windows::Forms::DataGridViewCellStyle());
			this->Button_Add = (gcnew System::Windows::Forms::Button());
			this->DataGridView = (gcnew System::Windows::Forms::DataGridView());
			this->Button_Open = (gcnew System::Windows::Forms::Button());
			this->Button_Search = (gcnew System::Windows::Forms::Button());
			this->Button_Exit = (gcnew System::Windows::Forms::Button());
			this->Button_Save = (gcnew System::Windows::Forms::Button());
			this->OpenFileDialog = (gcnew System::Windows::Forms::OpenFileDialog());
			this->SaveFileDialog = (gcnew System::Windows::Forms::SaveFileDialog());
			this->groupBox1 = (gcnew System::Windows::Forms::GroupBox());
			this->Button_CancelSearch = (gcnew System::Windows::Forms::Button());
			this->TextBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->Button_DeleteAll = (gcnew System::Windows::Forms::Button());
			this->Button_SortingByName = (gcnew System::Windows::Forms::Button());
			this->Column_Name = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Date = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Work = (gcnew System::Windows::Forms::DataGridViewCheckBoxColumn());
			this->Column_Country = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Price = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Number = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Note = (gcnew System::Windows::Forms::DataGridViewTextBoxColumn());
			this->Column_Delete = (gcnew System::Windows::Forms::DataGridViewButtonColumn());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView))->BeginInit();
			this->groupBox1->SuspendLayout();
			this->SuspendLayout();
			// 
			// Button_Add
			// 
			this->Button_Add->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Button_Add->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Add->Location = System::Drawing::Point(923, 48);
			this->Button_Add->Name = L"Button_Add";
			this->Button_Add->Size = System::Drawing::Size(169, 30);
			this->Button_Add->TabIndex = 1;
			this->Button_Add->Text = L"��������";
			this->Button_Add->UseVisualStyleBackColor = true;
			this->Button_Add->Click += gcnew System::EventHandler(this, &MainForm::AddNewObject);
			// 
			// DataGridView
			// 
			this->DataGridView->AllowUserToAddRows = false;
			this->DataGridView->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->DataGridView->BackgroundColor = System::Drawing::Color::White;
			this->DataGridView->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->DataGridView->Columns->AddRange(gcnew cli::array< System::Windows::Forms::DataGridViewColumn^  >(8) {
				this->Column_Name,
					this->Column_Date, this->Column_Work, this->Column_Country, this->Column_Price, this->Column_Number, this->Column_Note, this->Column_Delete
			});
			this->DataGridView->Location = System::Drawing::Point(12, 12);
			this->DataGridView->Name = L"DataGridView";
			this->DataGridView->RowHeadersVisible = false;
			this->DataGridView->Size = System::Drawing::Size(905, 387);
			this->DataGridView->TabIndex = 1;
			this->DataGridView->CellContentClick += gcnew System::Windows::Forms::DataGridViewCellEventHandler(this, &MainForm::DeleteObject);
			// 
			// Button_Open
			// 
			this->Button_Open->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Button_Open->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Open->Location = System::Drawing::Point(923, 12);
			this->Button_Open->Name = L"Button_Open";
			this->Button_Open->Size = System::Drawing::Size(169, 30);
			this->Button_Open->TabIndex = 0;
			this->Button_Open->Text = L"�������";
			this->Button_Open->UseVisualStyleBackColor = true;
			this->Button_Open->Click += gcnew System::EventHandler(this, &MainForm::LoadFromFile);
			// 
			// Button_Search
			// 
			this->Button_Search->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Button_Search->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Search->Location = System::Drawing::Point(6, 47);
			this->Button_Search->Name = L"Button_Search";
			this->Button_Search->Size = System::Drawing::Size(156, 30);
			this->Button_Search->TabIndex = 2;
			this->Button_Search->Text = L"�����";
			this->Button_Search->UseVisualStyleBackColor = true;
			this->Button_Search->Click += gcnew System::EventHandler(this, &MainForm::Search);
			// 
			// Button_Exit
			// 
			this->Button_Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Button_Exit->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Exit->ForeColor = System::Drawing::Color::Red;
			this->Button_Exit->Location = System::Drawing::Point(923, 156);
			this->Button_Exit->Name = L"Button_Exit";
			this->Button_Exit->Size = System::Drawing::Size(169, 30);
			this->Button_Exit->TabIndex = 4;
			this->Button_Exit->Text = L"�������";
			this->Button_Exit->UseVisualStyleBackColor = true;
			this->Button_Exit->Click += gcnew System::EventHandler(this, &MainForm::ProjectClosure);
			// 
			// Button_Save
			// 
			this->Button_Save->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Button_Save->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_Save->Location = System::Drawing::Point(923, 84);
			this->Button_Save->Name = L"Button_Save";
			this->Button_Save->Size = System::Drawing::Size(169, 30);
			this->Button_Save->TabIndex = 3;
			this->Button_Save->Text = L"���������";
			this->Button_Save->UseVisualStyleBackColor = true;
			this->Button_Save->Click += gcnew System::EventHandler(this, &MainForm::SaveToFile);
			// 
			// OpenFileDialog
			// 
			this->OpenFileDialog->FileName = L"openFileDialog1";
			// 
			// groupBox1
			// 
			this->groupBox1->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->groupBox1->Controls->Add(this->Button_CancelSearch);
			this->groupBox1->Controls->Add(this->TextBox_Name);
			this->groupBox1->Controls->Add(this->Button_Search);
			this->groupBox1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->groupBox1->Location = System::Drawing::Point(923, 192);
			this->groupBox1->Name = L"groupBox1";
			this->groupBox1->Size = System::Drawing::Size(169, 125);
			this->groupBox1->TabIndex = 6;
			this->groupBox1->TabStop = false;
			this->groupBox1->Text = L"����� �� ��������";
			// 
			// Button_CancelSearch
			// 
			this->Button_CancelSearch->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->Button_CancelSearch->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_CancelSearch->ForeColor = System::Drawing::Color::Red;
			this->Button_CancelSearch->Location = System::Drawing::Point(6, 83);
			this->Button_CancelSearch->Name = L"Button_CancelSearch";
			this->Button_CancelSearch->Size = System::Drawing::Size(156, 30);
			this->Button_CancelSearch->TabIndex = 3;
			this->Button_CancelSearch->Text = L"�������� �����";
			this->Button_CancelSearch->UseVisualStyleBackColor = true;
			this->Button_CancelSearch->Visible = false;
			this->Button_CancelSearch->Click += gcnew System::EventHandler(this, &MainForm::CancelSearch);
			// 
			// TextBox_Name
			// 
			this->TextBox_Name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextBox_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox_Name->Location = System::Drawing::Point(6, 21);
			this->TextBox_Name->Name = L"TextBox_Name";
			this->TextBox_Name->Size = System::Drawing::Size(156, 21);
			this->TextBox_Name->TabIndex = 0;
			// 
			// Button_DeleteAll
			// 
			this->Button_DeleteAll->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Button_DeleteAll->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_DeleteAll->Location = System::Drawing::Point(923, 120);
			this->Button_DeleteAll->Name = L"Button_DeleteAll";
			this->Button_DeleteAll->Size = System::Drawing::Size(169, 30);
			this->Button_DeleteAll->TabIndex = 7;
			this->Button_DeleteAll->Text = L"������� ���";
			this->Button_DeleteAll->UseVisualStyleBackColor = true;
			this->Button_DeleteAll->Click += gcnew System::EventHandler(this, &MainForm::DeleteAllObject);
			// 
			// Button_SortingByName
			// 
			this->Button_SortingByName->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Right));
			this->Button_SortingByName->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->Button_SortingByName->Location = System::Drawing::Point(929, 323);
			this->Button_SortingByName->Name = L"Button_SortingByName";
			this->Button_SortingByName->Size = System::Drawing::Size(156, 41);
			this->Button_SortingByName->TabIndex = 8;
			this->Button_SortingByName->Text = L"���������� �� ��������";
			this->Button_SortingByName->UseVisualStyleBackColor = true;
			this->Button_SortingByName->Click += gcnew System::EventHandler(this, &MainForm::SortingByName);
			// 
			// Column_Name
			// 
			this->Column_Name->HeaderText = L"��������";
			this->Column_Name->Name = L"Column_Name";
			this->Column_Name->ToolTipText = L"��������";
			// 
			// Column_Date
			// 
			this->Column_Date->HeaderText = L"����";
			this->Column_Date->Name = L"Column_Date";
			this->Column_Date->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			// 
			// Column_Work
			// 
			this->Column_Work->HeaderText = L"�����������������";
			this->Column_Work->Name = L"Column_Work";
			this->Column_Work->Resizable = System::Windows::Forms::DataGridViewTriState::True;
			this->Column_Work->SortMode = System::Windows::Forms::DataGridViewColumnSortMode::Automatic;
			this->Column_Work->Width = 150;
			// 
			// Column_Country
			// 
			this->Column_Country->HeaderText = L"������";
			this->Column_Country->Name = L"Column_Country";
			// 
			// Column_Price
			// 
			dataGridViewCellStyle3->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			this->Column_Price->DefaultCellStyle = dataGridViewCellStyle3;
			this->Column_Price->HeaderText = L"����";
			this->Column_Price->Name = L"Column_Price";
			// 
			// Column_Number
			// 
			dataGridViewCellStyle4->Alignment = System::Windows::Forms::DataGridViewContentAlignment::TopRight;
			this->Column_Number->DefaultCellStyle = dataGridViewCellStyle4;
			this->Column_Number->HeaderText = L"���-��";
			this->Column_Number->Name = L"Column_Number";
			// 
			// Column_Note
			// 
			this->Column_Note->HeaderText = L"��������";
			this->Column_Note->Name = L"Column_Note";
			this->Column_Note->Width = 150;
			// 
			// Column_Delete
			// 
			this->Column_Delete->HeaderText = L"";
			this->Column_Delete->Name = L"Column_Delete";
			this->Column_Delete->Resizable = System::Windows::Forms::DataGridViewTriState::False;
			this->Column_Delete->Text = L"";
			// 
			// MainForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1104, 411);
			this->Controls->Add(this->Button_SortingByName);
			this->Controls->Add(this->Button_DeleteAll);
			this->Controls->Add(this->groupBox1);
			this->Controls->Add(this->Button_Save);
			this->Controls->Add(this->Button_Exit);
			this->Controls->Add(this->Button_Open);
			this->Controls->Add(this->DataGridView);
			this->Controls->Add(this->Button_Add);
			this->MinimumSize = System::Drawing::Size(1120, 450);
			this->Name = L"MainForm";
			this->Text = L"����������� �����������";
			this->Load += gcnew System::EventHandler(this, &MainForm::MainFormLoading);
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->DataGridView))->EndInit();
			this->groupBox1->ResumeLayout(false);
			this->groupBox1->PerformLayout();
			this->ResumeLayout(false);

		}
#pragma endregion
		

		//�������: �������� ���� MainForm
	private: System::Void MainFormLoading(System::Object^  sender, System::EventArgs^  e)
	{
		this->OpenFileDialog->Filter = "(*.txt)|*.txt";
		this->SaveFileDialog->Filter = "(*.txt)|*.txt";
	}

		//�������: ������� ����
	private: System::Void LoadFromFile(System::Object^  sender, System::EventArgs^  e)
	{
		CancelSearch(sender, e); //������ ������

		if (OpenFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) //����� ����� (��� ������)
		{
			StreamReader^ stream = gcnew StreamReader(OpenFileDialog->FileName, System::Text::Encoding::Default); //���� ��� ����������

			Unit* newUnit = (Unit *)malloc(sizeof(Unit)); //��������� ������ ��� �������

			newUnit->_Name = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ��������
			newUnit->_Date = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ����
			newUnit->_Country = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ������
			newUnit->_Note = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ��������

			while (!stream->EndOfStream) //����� �����
			{
				*newUnit->_Name = stream->ReadLine(); //���������� �������� �������
				*newUnit->_Date = stream->ReadLine(); //���������� ���� ������������ ��������
				newUnit->_Work = Convert::ToBoolean(stream->ReadLine());//[0] == '0' ? false : true;
				*newUnit->_Country = stream->ReadLine(); //���������� �������� ������ �������������
				newUnit->_Price = Convert::ToInt32(stream->ReadLine()); //���������� ��������� �������
				newUnit->_Number = Convert::ToInt32(stream->ReadLine()); //���������� ���������� ���������� ��������
				String^ str = stream->ReadLine(); //���������� ��������� ������
				while (str != "----------" && !stream->EndOfStream) //���������� �������� �������
				{
					*newUnit->_Note = str; //���������� ����� �������� �������
					str = stream->ReadLine(); //���������� ��������� ������
				}
				AddNewRow(newUnit); //����� � ������� 
			}
			stream->Close();
		}
	}

		//�������: �������� ����� �������
	private: System::Void AddNewObject(System::Object^  sender, System::EventArgs^  e)
	{
		CancelSearch(sender, e); //������ ������

		bool IsAddNewRow = false; //����������� �� ����� ������

		Unit* newUnit = (Unit *)malloc(sizeof(Unit)); //��������� ������ ��� �������

		//����������� ���� ��� ����� ���������� � ����� ��������
		AddForm^ newAddForm = gcnew AddForm(&IsAddNewRow, newUnit);
		newAddForm->ShowDialog(); //����������� �����

		//����� ���������� � �������
		if (IsAddNewRow)
		{
			AddNewRow(newUnit); //����� � ������� 
		}
		delete newUnit; //��������� newUnit
	}

		//�������: ��������� � �������
	private: System::Void SaveToFile(System::Object^  sender, System::EventArgs^  e)
	{
		if (SaveFileDialog->ShowDialog() == System::Windows::Forms::DialogResult::OK) //����� ����� (��� ������)
		{
			StreamWriter^ stream = gcnew StreamWriter(SaveFileDialog->FileName); //���� ��� ����������

			int a = DataGridView->Rows->Count;
			for (int i = 0; i < a; i++) //����� �������
			{
				stream->WriteLine(DataGridView[0, i]->Value); //����� �������� ������� � ����
				stream->WriteLine(DataGridView[1, i]->Value); //����� ���� ������������ � ����
				stream->WriteLine(DataGridView[2, i]->Value); //����� ����������������� � ����
				stream->WriteLine(DataGridView[3, i]->Value); //����� �������� ������ ������������� � ����
				stream->WriteLine(DataGridView[4, i]->Value); //����� ��������� ������� � ����
				stream->WriteLine(DataGridView[5, i]->Value); //����� ���������� ���������� �������� � ����
				stream->WriteLine(DataGridView[6, i]->Value); //����� �������� ������� � ����
				stream->WriteLine("----------"); //����� �����������
			}
			stream->Close();
		}
	}

		//�������: ������� ����
	private: System::Void ProjectClosure(System::Object^  sender, System::EventArgs^  e)
	{
		this->Close();
	}

		//����� �� ��������
	private: System::Void Search(System::Object^  sender, System::EventArgs^  e)
	{
		if (TextBox_Name->Text != "")
		{
			int a = DataGridView->Rows->Count; //���������� ��������� � �������
			String^ nameForSearch = TextBox_Name->Text; //������ (���) ��� ������
			for (int i = 0; i < a; i++) //����� ���� ���������
			{
				String^ name = DataGridView[0,i]->Value->ToString(); //��� ��������
				if (!name->Contains(nameForSearch)) //���� �� ������ ��������� � ������
					DataGridView->Rows[i]->Visible = false; //������ ������ �������
			}
			Button_CancelSearch->Visible = true; //����������� ������ ������ ������
		}
	}
		//������ ������
	private: System::Void CancelSearch(System::Object^  sender, System::EventArgs^  e)
	{
		int a = DataGridView->Rows->Count; //���������� ��������� � �������
		for (int i = 0; i < a; i++) //����� ���� ���������
		{
			DataGridView->Rows[i]->Visible = true; //����������� ��������
		}
		Button_CancelSearch->Visible = false; //������� ������ ������ ������
	}

		//������� ��� ������
	private: System::Void DeleteAllObject(System::Object^  sender, System::EventArgs^  e) {

		int a = DataGridView->Rows->Count; //���������� ��������� � �������
		for (int i = 0; i < a; i++) //����� ���� ���������
		{
			DataGridView->Rows->RemoveAt(0); //�������� ������� ������
		}
	}
			 
		//�������: �������� ������
	private: System::Void DeleteObject(System::Object^  sender, System::Windows::Forms::DataGridViewCellEventArgs^  e)
	{
		if (e->ColumnIndex == 7 && e->RowIndex >= 0)
		{
			DataGridView->Rows->RemoveAt(e->RowIndex); //�������� ��������� ������
		}
	}

			 //���������� �� ��������
	private: System::Void SortingByName(System::Object^  sender, System::EventArgs^  e) {
		Unit* firstUnit = ReadFromTable(); //���������� ������ �� �������

		//������ �� ������ � ��������� ������� ���������������� ������
		Unit* newFirstUnit = NULL;
		Unit* newLastUnit = NULL;
		
		//����������
		while (firstUnit != NULL)
		{
			Unit* minUnit = firstUnit;
			Unit* thisUnit = firstUnit->next;

			//����� ������������ ��������
			while (thisUnit != NULL)
			{
				if (String::Compare(*minUnit->_Name, *thisUnit->_Name) > 0)
					minUnit = thisUnit;
				thisUnit = thisUnit->next;
			}

			//�������� ������������ �������� �� ������� ������
			//���� ����������� ������ ������� ������ � ������, �� ��������� ������ ������ ���������� ������
			if (minUnit == firstUnit) firstUnit = minUnit->next;
			//���� ���������� ������ ����� ��������� �����������
			if (minUnit->previous != NULL)
				minUnit->previous->next = minUnit->next;
			//���� ���������� ������ ����� ���������� ������������
			if (minUnit->next != NULL)
				minUnit->next->previous = minUnit->previous;
			minUnit->next = NULL;
			minUnit->previous = NULL;

			//�������� ������ ������
			//���� ��������������� ������ ����, �� minUnit �������� ������ � ����� ������
			if (newFirstUnit == NULL) newFirstUnit = minUnit;
			else
			{
				//��������� ������� � ����� ������
				newLastUnit->next = minUnit;
				minUnit->previous = newLastUnit;
			}
			//minUnit �������� ��������� � ����� ������
			newLastUnit = minUnit;
		}

		//�������� ������� �� �������
		DeleteAllObject(sender, e);

		//����� ���������������� ������ � �������
		while (newFirstUnit != NULL)
		{
			//����� �������� � ����� ������ �������
			AddNewRow(newFirstUnit);
			//������� �� ��������� ������ ������
			newFirstUnit = newFirstUnit->next;
			//�������� ����������� (������������ ������)
			delete newFirstUnit->previous;
		}
	}
			 //���������� �� �������
	private: Unit* ReadFromTable()
	{
		Unit* firstUnit = NULL; //������ �� ������ �������
		Unit* lastUnit = NULL; //������ �� ��������� �������

		//���������� ��������� � �������
		for (int i = 0; i < DataGridView->RowCount; i++)
		{
			Unit * unit = (Unit *)malloc(sizeof(Unit));

			unit->_Name = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ��������
			*unit->_Name = DataGridView->Rows[i]->Cells[0]->Value->ToString();

			unit->_Date = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ����
			*unit->_Date = DataGridView->Rows[i]->Cells[1]->Value->ToString();

			unit->_Work = Convert::ToBoolean(DataGridView->Rows[i]->Cells[2]->Value);

			unit->_Country = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ������
			*unit->_Country = DataGridView->Rows[i]->Cells[3]->Value->ToString(); //TextBox_Country->Text;

			unit->_Price = Convert::ToInt32(DataGridView->Rows[i]->Cells[4]->Value);

			unit->_Number = Convert::ToInt32(DataGridView->Rows[i]->Cells[5]->Value);

			unit->_Note = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ��������
			*unit->_Note = DataGridView->Rows[i]->Cells[6]->Value->ToString();

			unit->next = NULL;
			unit->previous = NULL;

			if (firstUnit == NULL)
			{
				firstUnit = unit;
			}
			else
			{
				lastUnit->next = unit;
				unit->previous = lastUnit;
			}
			lastUnit = unit;
		}
		return firstUnit;
	}

		//���������� ����� ������ � ������� 
	private: System::Void AddNewRow(Unit *unit)
	{
		DataGridView->Rows->Add(*unit->_Name, *unit->_Date, unit->_Work, *unit->_Country, unit->_Price, unit->_Number, *unit->_Note, "�������"); //�������� ����� ������� ������� (� ������� ����)
	}
};
}
