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
        	//виртуальный метод, который выводит информацию об требуемом транспорте
		virtual void Getinfo() = 0;
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
		//метод, который выводит информацию о транспорте
		void Getinfo() override;
		~passBus () override;
	
};
//класс, производный от базового класса, "ремонтный автобус"
class repairBus : public DTS 
{
	public:
		repairBus ();
		//метод заполнения информацией об данном транспорте
		void filling () override;
		//метод, который выводит информацию о транспорте
		void Getinfo() override;
		~repairBus () override;
};
//класс, производный от базового класса, "микро-автобус"
class miniBus : public DTS 
{
	public:
		miniBus ();
		//метод заполнения информацией об данном транспорте
		void filling () override;
		//метод, который выводит информацию о транспорте
		void Getinfo() override;
		~miniBus () override;
};
//класс, производный от базового класса, "трактор"
class tractor : public DTS 
{
	public:
		tractor ();
		//метод заполнения информацией об данном транспорте
		void filling () override;
		//метод, который выводит информацию о транспорте
		void Getinfo() override;
		~tractor () override;
	
};
