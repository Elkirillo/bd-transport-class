#include "classInfo.h"
 
int main (int argc, char** argv)
{
	DTS* arr[4]={new passBus(), new repairBus(), new miniBus(), new tractor()};
	//заполнение информацией
	for (int i=0;i<4;i++)
	{
		arr[i]->filling();
	}
	//вывод информации
	for (int i=0;i<4;i++)
	{
		arr[i]->Getinfo();
	}
	delete [] arr;
	return 0;
}
