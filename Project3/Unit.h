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
public: String^ *_Name; //��� ����������
public: String^ *_Date; //���� ��������
public: bool _Work; //�����������������
public: String^ *_Country; //������ �������������
public: int _Price; //��������� �� �����
public: int _Number; //����������
public: String^ *_Note; //��������

public: Unit* next;
public: Unit* previous;
};
//
//
//class Unit
//{
//public: String^ *_Name; //��� ����������
//public: String^ *_Date; //���� ��������
//public: bool _Work; //�����������������
//public: String^ *_Country; //������ �������������
//public: int _Price; //��������� �� �����
//public: int _Number; //����������
//public: String^ *_Note; //��������
//
//public: Unit* next;
//public: Unit* previous;
//
//public: Unit(void)
//{
//	_Name = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ��������
//	_Date = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ����
//	_Country = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ������
//	_Note = (String^*)malloc(sizeof(String^)); //��������� ������ ��� ��������
//}
//
//public: ~Unit(void)
//{
//	_Name = (String^*)realloc(_Name, sizeof(String^)); //������� ������ ��� ��������
//	_Date = (String^*)realloc(_Date, sizeof(String^)); //������� ������ ��� ����
//	_Country = (String^*)realloc(_Country, sizeof(String^)); //������� ������ ��� ������
//	_Note = (String^*)realloc(_Note, sizeof(String^)); //������� ������ ��� ��������
//}
//};