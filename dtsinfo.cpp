#include <iostream>
#include <string>
using std::cin;
using std::cout;
using std::endl;
using std::string;
//������������� ������������ �������� ������ "���������"
class DTS 
{
	public: 
		DTS () : number(0), brand("") {}
		//����������� �����, ������� ��������� ��������� ���������� ������� 
		virtual void filling() =0 ;
        //�����, ������� ������� ���������� �� ��������� ����������
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
//�����, ����������� �� �������� ������, "������������ �������"
class passBus : public DTS 
{
	public:
		passBus () : DTS () {}
		//����� ���������� ����������� �� ������ ���������� 
		void filling () override{
			cout<< "Enter number of passanger bus: " << endl;
			//���� �� �������� �����
			while (true)
				{
					cin >> number;
					//������� �� �������� �����
					if (!cin)
					{
						cout <<"Wrong value, please use integer value\n";
						cin.clear();
						//���������� �� ��� ���, ���� �� ������ �������� �� ������ ������
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
//�����, ����������� �� �������� ������, "��������� �������"
class repairBus : public DTS 
{
	public:
		repairBus () : DTS () {}
		//����� ���������� ����������� �� ������ ���������� 
		void filling () override
		{
			cout<< "Enter number of repair Bus: " << endl;
			//���� �������� �� ���������� ���� 
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
//�����, ����������� �� �������� ������, "�����-�������"
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
//�����, ����������� �� �������� ������, "�������"
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


void version (){
	cout << "c++ standard 11\n:";
}
//����������� �������� ��� bash ������
char* logotip="\x1b[0;43m                                                             \x1b[0m\n"
	 		  "\x1b[0;45m                                                             \x1b[0m\n"
	 		  "\x1b[0;46m                                                             \x1b[0m\n";
int main (int argc, char** argv)
{
	//�������� ������� �������� ������ "���������"
    DTS* arr[4]={new passBus(), new repairBus(), new miniBus(), new tractor()};
  
    
	cout << logotip;
	version ();
	//���� ���������� � ����������
	arr[0]->filling();
	arr[1]->filling();
	arr[2]->filling();
	arr[3]->filling();
	//����� ���������� � ���������� 
	arr[0]->Getinfo();
	arr[1]->Getinfo();
	arr[2]->Getinfo();
	arr[3]->Getinfo();
	delete [] arr;
	return 0;
}
