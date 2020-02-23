#pragma once
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::string;
//Базовый класс "дорожно транспортное средство"
class DTS 
{
	public: 
		DTS ();
		//виртуальный метод, который реализует интерфейс заполнения данными
		virtual void filling() =0 ;
        	//метод, который выводит информацию об требуемом транспорте
		void Getinfo();
		virtual ~DTS ();
	protected:
		int number;
		string brand;
		
};
//класс, производный от базового класса, "пассажирский автобус"
class passBus : public DTS 
{
	public:
		passBus ();
		//метод заполнения информацией об данном транспорте
		void filling () override;
		~passBus () override;
	
};
//класс, производный от базового класса, "ремонтный автобус"
class repairBus : public DTS 
{
	public:
		repairBus ();
		//метод заполнения информацией об данном транспорте
		void filling () override;
		~repairBus () override;
};
//класс, производный от базового класса, "микро-автобус"
class miniBus : public DTS 
{
	public:
		miniBus ();
		//метод заполнения информацией об данном транспорте
		void filling () override;
	~miniBus () override;
};
//класс, производный от базового класса, "трактор"
class tractor : public DTS 
{
	public:
		tractor ();
		//метод заполнения информацией об данном транспорте
		void filling () override;
		~tractor () override;
	
};
