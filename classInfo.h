#pragma once
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;

class DTS 
{
	public: 
		DTS ();
		//����������� �����, ������� ��������� ��������� ���������� ������� 
		virtual void filling() =0 ;
        //�����, ������� ������� ���������� �� ��������� ����������
		void Getinfo();
		virtual ~DTS ();
	protected:
		int number;
		string brand;
		
};
//�����, ����������� �� �������� ������, "������������ �������"
class passBus : public DTS 
{
	public:
		passBus ();
		//����� ���������� ����������� �� ������ ���������� 
		void filling () override;
		~passBus () override;
	
};
//�����, ����������� �� �������� ������, "��������� �������"
class repairBus : public DTS 
{
	public:
		repairBus ();
		//����� ���������� ����������� �� ������ ���������� 
		void filling () override;
		~repairBus () override;
};
//�����, ����������� �� �������� ������, "�����-�������"
class miniBus : public DTS 
{
	public:
		miniBus ();
		void filling () override;
	~miniBus () override;
};
//�����, ����������� �� �������� ������, "�������"
class tractor : public DTS 
{
	public:
		tractor ();
		void filling () override;
		~tractor () override;
	
};
