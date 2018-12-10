#pragma once

using namespace System;
using namespace System::ComponentModel;
using namespace System::Collections;
using namespace System::Windows::Forms;
using namespace System::Data;
using namespace System::Drawing;
using namespace System;
using namespace System::Windows::Forms;
using namespace std;
using namespace System::IO;

public struct Unit
{
public: String^ *_Name; //имя устройства
public: String^ *_Date; //дата создания
public: bool _Work; //работоспособность
public: String^ *_Country; //страна производитель
public: int _Price; //стоимость за штуку
public: int _Number; //количество
public: String^ *_Note; //описание

public: Unit* next;
public: Unit* previous;
};
//
//
//class Unit
//{
//public: String^ *_Name; //имя устройства
//public: String^ *_Date; //дата создания
//public: bool _Work; //работоспособность
//public: String^ *_Country; //страна производитель
//public: int _Price; //стоимость за штуку
//public: int _Number; //количество
//public: String^ *_Note; //описание
//
//public: Unit* next;
//public: Unit* previous;
//
//public: Unit(void)
//{
//	_Name = (String^*)malloc(sizeof(String^)); //выделение памяти для названия
//	_Date = (String^*)malloc(sizeof(String^)); //выделение памяти для даты
//	_Country = (String^*)malloc(sizeof(String^)); //выделение памяти для страны
//	_Note = (String^*)malloc(sizeof(String^)); //выделение памяти для описания
//}
//
//public: ~Unit(void)
//{
//	_Name = (String^*)realloc(_Name, sizeof(String^)); //очистка памяти для названия
//	_Date = (String^*)realloc(_Date, sizeof(String^)); //очистка памяти для даты
//	_Country = (String^*)realloc(_Country, sizeof(String^)); //очистка памяти для страны
//	_Note = (String^*)realloc(_Note, sizeof(String^)); //очистка памяти для описания
//}
//};