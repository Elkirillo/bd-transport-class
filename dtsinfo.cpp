#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
//инициализация абстрактного базового класса "транспорт"
class DTS 
{
	public: 
		DTS () : number(0), brand("") {}
		//виртуальный метод, который реализует интерфейс заполнения данными
		virtual void filling() =0 ;
        	//метод, который выводит информацию об требуемом транспорте
		void Getinfo() 
			{
				cout << "Numb of DTS: " << number << endl;
				cout << "Brand of DTS: " << brand << endl;
			}
		virtual ~DTS () {}
	protected:
		int number;
		string brand;
		
};
//класс, производный от базового класса, "пассажирский автобус"
class passBus : public DTS 
{
	public:
		passBus () : DTS () {}
		//метод заполнения информацией об данном транспорте
		void filling () override{
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
		~passBus () override {}
	
};
//класс, производный от базового класса, "ремонтный автобус"
class repairBus : public DTS 
{
	public:
		repairBus () : DTS () {}
		//метод заполнения информацией об данном транспорте
		void filling () override
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
					while (cin.get() != '\n');
				} 
				else 
					break;
			}
			cout<< "Enter brand of repair Bus: " << endl;
			cin >> brand;
		}
		~repairBus () override {}
};
//класс, производный от базового класса, "микро-автобус"
class miniBus : public DTS 
{
	public:
		miniBus () : DTS () {}
		void filling () override
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
	~miniBus () override {}
};
//класс, производный от базового класса, "трактор"
class tractor : public DTS {
	public:
		tractor () : DTS () {}
		void filling () override
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
		~tractor () override {}
};
//организация логотипа для bash систем
char* logotip="\x1b[0;43m                                                             \x1b[0m\n"
	 		  "\x1b[0;45m                                                             \x1b[0m\n"
	 		  "\x1b[0;46m                                                             \x1b[0m\n";
int main (int argc, char** argv)
{
	//создание массива объектов класса "транспорт"
	DTS* arr[4]={new passBus(), new repairBus(), new miniBus(), new tractor()};
	cout << logotip;
	//ввод информации о транспорте
	arr[0]->filling();
	arr[1]->filling();
	arr[2]->filling();
	arr[3]->filling();
	//вывод информации о транспорте
	arr[0]->Getinfo();
	arr[1]->Getinfo();
	arr[2]->Getinfo();
	arr[3]->Getinfo();
	delete [] arr;
	return 0;
}
