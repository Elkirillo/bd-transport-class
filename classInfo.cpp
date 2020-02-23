#include "classInfo.h"

DTS::DTS() : number(0), brand(""){}
DTS::~DTS() {}

passBus::passBus() : DTS (){}
//метод заполнения информацией об данном транспорте
void passBus::filling() 
{
	cout<< "Enter number of passanger bus: " << endl;
	//цикл на проверку ввода
	while (true)
	{
		cin >> number;
		//условие на проверку ввода
		if (!cin)
		{
			cout <<"Wrong value, please use integer value\n";
			cin.clear();
			//продолжаем до тех пор, пока не дойдем перехода на другую строку
			while (cin.get() != '\n');
		} 
		else 
			break;
	}
	cout<< "Enter brand of passanger bus: " << endl;
	cin >> brand;
}
//метод вывода информации о данном транспорте
void passBus::Getinfo()
{
	cout << "Numb of passBus: " << number << endl;
	cout << "Brand of passBus: " << brand << endl;
}
passBus::~passBus(){}

repairBus::repairBus() : DTS (){}
//метод заполнения информацией об данном транспорте
void repairBus::filling() 
{
	cout<< "Enter number of repair Bus: " << endl;
	//цикл проверки на корректный ввод
	while (true)
	{
		cin >> number;
		if (!cin)
		{
			cout <<"Wrong value, please use integer value\n";
			cin.clear();
			//продолжаем до тех пор, пока не дойдем перехода на другую строку
			while (cin.get() != '\n');
		} 
		else 
			break;
	}
	cout<< "Enter brand of repair Bus: " << endl;
	cin >> brand;
}
//метод вывода информации о данном транспорте
void repairBus::Getinfo()
{
	cout << "Numb of repairBus: " << number << endl;
	cout << "Brand of repairBus: " << brand << endl;
}
repairBus::~repairBus(){}

miniBus::miniBus(): DTS (){}
//метод заполнения информацией об данном транспорте
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
void miniBus::Getinfo()
{
	cout << "Numb of miniBus: " << number << endl;
	cout << "Brand of miniBus: " << brand << endl;
}
miniBus::~miniBus(){}

tractor::tractor() : DTS (){}
//метод заполнения информацией об данном транспорте
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
//метод вывода информации о данном транспорте
void tractor::Getinfo()
{
	cout << "Numb of tractor: " << number << endl;
	cout << "Brand of tractor: " << brand << endl;
}
tractor::~tractor() {}
