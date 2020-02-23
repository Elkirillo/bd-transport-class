#include "classInfo.h"

DTS::DTS() 
{
 	number=0;
	brand="";
}

void DTS::Getinfo() 
{
	cout << "Numb of DTS: " << number << endl;
	cout << "Brand of DTS: " << brand << endl;
}

DTS::~DTS() {}

passBus::passBus() : DTS (){}

void passBus::filling() 
{
	cout<< "Enter number of passanger bus: " << endl;
	//???? ?? ???????? ?????
	while (true)
	{
		cin >> number;
		//??????? ?? ???????? ?????
		if (!cin)
		{
			cout <<"Wrong value, please use integer value\n";
			cin.clear();
			//?????????? ?? ??? ???, ???? ?? ?????? ???????? ?? ?????? ??????
			while (cin.get() != '\n');
		} 
		else 
			break;
	}
	cout<< "Enter brand of passanger bus: " << endl;
	cin >> brand;
}

passBus::~passBus(){}
//????? ?????????? ??????????? ?? ?????? ??????????
repairBus::repairBus() : DTS (){}
void repairBus::filling() 
{
	cout<< "Enter number of repair Bus: " << endl;
	//???? ???????? ?? ?????????? ????
	while (true)
	{
		cin >> number;
		if (!cin)
		{
			cout <<"Wrong value, please use integer value\n";
			cin.clear();
			while (cin.get() != '\n');
		} 
		else 
			break;
	}
	cout<< "Enter brand of repair Bus: " << endl;
	cin >> brand;
}

repairBus::~repairBus(){}

miniBus::miniBus(): DTS (){}

void miniBus::filling() 
{
	cout<< "Enter number of minibus: " << endl;
	while (true)
	{
		cin >> number;
		if (!cin)
		{
			cout <<"Wrong value, please use integer value\n";
			cin.clear();
			while (cin.get() != '\n');
		} 
		else 
			break;
	}
	cout<< "Enter brand of minibus: " << endl;
	cin >> brand;
}

miniBus::~miniBus(){}

tractor::tractor() : DTS (){}

void tractor::filling () 
{
	cout<< "Enter number of tractor: " << endl;
	while (true)
	{
		cin >> number;
		if (!cin)
		{
			cout <<"Wrong value, please use integer value\n";
			cin.clear();
			while (cin.get() != '\n');
		} 
		else 
			break;
	}
	cout<< "Enter brand of tractor: " << endl;
	cin >> brand;
}

tractor::~tractor() {}
