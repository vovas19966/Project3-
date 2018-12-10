#pragma once
#include <iostream>
#include "MainForm.h"
#include "Unit.h"
#include <string>

namespace Project3 {
	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace std;
	using namespace System::Runtime::InteropServices;

	public ref class AddForm : public System::Windows::Forms::Form
	{
		bool *_IsAdd;
		Unit *_Unit;

	private: System::Windows::Forms::Button^  Button_Exit;
	private: System::Windows::Forms::Button^  Button_Add;
	private: System::Windows::Forms::CheckBox^  CheckBox_Work;
	private: System::Windows::Forms::Label^  label7;
	private: System::Windows::Forms::Label^  label6;
	private: System::Windows::Forms::Label^  label5;
	private: System::Windows::Forms::Label^  label4;
	private: System::Windows::Forms::Label^  label3;
	private: System::Windows::Forms::Label^  label2;
	private: System::Windows::Forms::Label^  label1;
	private: System::Windows::Forms::TextBox^  TextBox_Note;
	private: System::Windows::Forms::TextBox^  TextBox_Number;
	private: System::Windows::Forms::TextBox^  TextBox_Price;
	private: System::Windows::Forms::TextBox^  TextBox_Date;
	private: System::Windows::Forms::ComboBox^  ComboBox_Countries;
	private: System::Windows::Forms::TextBox^  TextBox_Name;

	public:
		//конструктор класса
		AddForm(bool *isAdd, Unit *unit)
		{
			InitializeComponent();

			ReadCountryListFromFile(); //считывание списка стран
			_IsAdd = isAdd;
			_Unit = unit;
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~AddForm()
		{
			if (components)
			{
				delete components;
			}
		}
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
			this->Button_Exit = (gcnew System::Windows::Forms::Button());
			this->Button_Add = (gcnew System::Windows::Forms::Button());
			this->CheckBox_Work = (gcnew System::Windows::Forms::CheckBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->TextBox_Note = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Number = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Price = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Date = (gcnew System::Windows::Forms::TextBox());
			this->TextBox_Name = (gcnew System::Windows::Forms::TextBox());
			this->ComboBox_Countries = (gcnew System::Windows::Forms::ComboBox());
			this->SuspendLayout();
			// 
			// Button_Exit
			// 
			this->Button_Exit->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Button_Exit->Location = System::Drawing::Point(198, 238);
			this->Button_Exit->Name = L"Button_Exit";
			this->Button_Exit->Size = System::Drawing::Size(169, 30);
			this->Button_Exit->TabIndex = 8;
			this->Button_Exit->Text = L"Закрыть";
			this->Button_Exit->UseVisualStyleBackColor = true;
			this->Button_Exit->Click += gcnew System::EventHandler(this, &AddForm::FormClosure);
			// 
			// Button_Add
			// 
			this->Button_Add->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((System::Windows::Forms::AnchorStyles::Bottom | System::Windows::Forms::AnchorStyles::Left));
			this->Button_Add->Location = System::Drawing::Point(9, 238);
			this->Button_Add->Name = L"Button_Add";
			this->Button_Add->Size = System::Drawing::Size(169, 30);
			this->Button_Add->TabIndex = 7;
			this->Button_Add->Text = L"Добавить";
			this->Button_Add->UseVisualStyleBackColor = true;
			this->Button_Add->Click += gcnew System::EventHandler(this, &AddForm::AddNewObject);
			// 
			// CheckBox_Work
			// 
			this->CheckBox_Work->AutoSize = true;
			this->CheckBox_Work->Location = System::Drawing::Point(196, 69);
			this->CheckBox_Work->Name = L"CheckBox_Work";
			this->CheckBox_Work->Size = System::Drawing::Size(15, 14);
			this->CheckBox_Work->TabIndex = 2;
			this->CheckBox_Work->UseVisualStyleBackColor = true;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label7->Location = System::Drawing::Point(9, 183);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(81, 16);
			this->label7->TabIndex = 44;
			this->label7->Text = L"Описание";
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label6->Location = System::Drawing::Point(9, 155);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(96, 16);
			this->label6->TabIndex = 43;
			this->label6->Text = L"Количество";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label5->Location = System::Drawing::Point(9, 127);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(157, 16);
			this->label5->TabIndex = 42;
			this->label5->Text = L"Стоимость за штуку";
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label4->Location = System::Drawing::Point(9, 99);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(181, 16);
			this->label4->TabIndex = 40;
			this->label4->Text = L"Страна производитель";
			// 
			// label3
			// 
			this->label3->AutoSize = true;
			this->label3->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label3->Location = System::Drawing::Point(9, 71);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(156, 16);
			this->label3->TabIndex = 37;
			this->label3->Text = L"Работоспособность";
			// 
			// label2
			// 
			this->label2->AutoSize = true;
			this->label2->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label2->Location = System::Drawing::Point(9, 43);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(118, 16);
			this->label2->TabIndex = 34;
			this->label2->Text = L"Дата создания";
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->label1->Location = System::Drawing::Point(9, 14);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(82, 16);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Название";
			// 
			// TextBox_Note
			// 
			this->TextBox_Note->Anchor = static_cast<System::Windows::Forms::AnchorStyles>((((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Bottom)
				| System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextBox_Note->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox_Note->Location = System::Drawing::Point(196, 180);
			this->TextBox_Note->Name = L"TextBox_Note";
			this->TextBox_Note->Size = System::Drawing::Size(206, 22);
			this->TextBox_Note->TabIndex = 6;
			// 
			// TextBox_Number
			// 
			this->TextBox_Number->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextBox_Number->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox_Number->Location = System::Drawing::Point(196, 152);
			this->TextBox_Number->Name = L"TextBox_Number";
			this->TextBox_Number->Size = System::Drawing::Size(206, 22);
			this->TextBox_Number->TabIndex = 5;
			// 
			// TextBox_Price
			// 
			this->TextBox_Price->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextBox_Price->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox_Price->Location = System::Drawing::Point(196, 124);
			this->TextBox_Price->Name = L"TextBox_Price";
			this->TextBox_Price->Size = System::Drawing::Size(206, 22);
			this->TextBox_Price->TabIndex = 4;
			// 
			// TextBox_Date
			// 
			this->TextBox_Date->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextBox_Date->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox_Date->Location = System::Drawing::Point(196, 40);
			this->TextBox_Date->Name = L"TextBox_Date";
			this->TextBox_Date->Size = System::Drawing::Size(206, 22);
			this->TextBox_Date->TabIndex = 1;
			// 
			// TextBox_Name
			// 
			this->TextBox_Name->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->TextBox_Name->Font = (gcnew System::Drawing::Font(L"Microsoft Sans Serif", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(204)));
			this->TextBox_Name->Location = System::Drawing::Point(196, 11);
			this->TextBox_Name->Name = L"TextBox_Name";
			this->TextBox_Name->Size = System::Drawing::Size(206, 22);
			this->TextBox_Name->TabIndex = 0;
			// 
			// ComboBox_Countries
			// 
			this->ComboBox_Countries->Anchor = static_cast<System::Windows::Forms::AnchorStyles>(((System::Windows::Forms::AnchorStyles::Top | System::Windows::Forms::AnchorStyles::Left)
				| System::Windows::Forms::AnchorStyles::Right));
			this->ComboBox_Countries->FormattingEnabled = true;
			this->ComboBox_Countries->Location = System::Drawing::Point(196, 98);
			this->ComboBox_Countries->Name = L"ComboBox_Countries";
			this->ComboBox_Countries->Size = System::Drawing::Size(206, 21);
			this->ComboBox_Countries->TabIndex = 45;
			// 
			// AddForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(414, 281);
			this->Controls->Add(this->ComboBox_Countries);
			this->Controls->Add(this->TextBox_Note);
			this->Controls->Add(this->TextBox_Number);
			this->Controls->Add(this->TextBox_Price);
			this->Controls->Add(this->TextBox_Date);
			this->Controls->Add(this->TextBox_Name);
			this->Controls->Add(this->Button_Exit);
			this->Controls->Add(this->Button_Add);
			this->Controls->Add(this->CheckBox_Work);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->label1);
			this->MinimumSize = System::Drawing::Size(430, 320);
			this->Name = L"AddForm";
			this->Text = L"Добавить элемент";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		//событие: закрыть окно
	private: System::Void FormClosure(System::Object^  sender, System::EventArgs^  e) {
		*this->_IsAdd = false; //отмена добавления
		this->Close(); //закрытие окна
	}
		//событие: добавить элемент
		//считывание значений из формы. Передача через указатели в форму MainForm
	private: System::Void AddNewObject(System::Object^  sender, System::EventArgs^  e) {

		_Unit->_Name = (String^*)malloc(sizeof(String^)); //выделение памяти для названия
		*_Unit->_Name = TextBox_Name->Text;

		_Unit->_Date = (String^*)malloc(sizeof(String^)); //выделение памяти для даты
		*_Unit->_Date = TextBox_Date->Text;

		_Unit->_Work = CheckBox_Work->Checked; 

		_Unit->_Country = (String^*)malloc(sizeof(String^)); //выделение памяти для страны
		*_Unit->_Country = ComboBox_Countries->SelectedIndex != -1? ComboBox_Countries->SelectedItem->ToString(): ""; //TextBox_Country->Text;

		_Unit->_Price = TextBox_Price->Text != "" ? Convert::ToInt32(TextBox_Price->Text) : 0;

		_Unit->_Number = TextBox_Number->Text != "" ? Convert::ToInt32(TextBox_Number->Text) : 0;

		_Unit->_Note = (String^*)malloc(sizeof(String^)); //выделение памяти для описания
		*_Unit->_Note = TextBox_Note->Text;

		*this->_IsAdd = true; //добавление объекта
		this->Close(); //закрытие окна
	}
		//считывание из файла списка стран
	private: System::Void ReadCountryListFromFile()
	{
		StreamReader^ countriesFile = gcnew StreamReader("Countries.txt", System::Text::Encoding::Default); //файл для считывания
		
		String^ str;

		while (!countriesFile->EndOfStream) //обход файла
		{
			str = countriesFile->ReadLine(); //считывание строки
			ComboBox_Countries->Items->Add(str); //добавление объекта в список стран
		}
		countriesFile->Close();
	}
};
}
