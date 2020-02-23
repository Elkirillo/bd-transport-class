#include "classInfo.h"
 
int main (int argc, char** argv)
{
	DTS* arr[4]={new passBus(), new repairBus(), new miniBus(), new tractor()};
	arr[0]->filling();
	arr[1]->filling();
	arr[2]->filling();
	arr[3]->filling();

	arr[0]->Getinfo();
	arr[1]->Getinfo();
	arr[2]->Getinfo();
	arr[3]->Getinfo();
	
	delete [] arr;
	return 0;
}
