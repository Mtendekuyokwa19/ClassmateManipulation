#include <iostream>
#include "./headerFiles/table.h"
#include "./headerFiles/collectdata.h"
#include "./headerFiles/collectdata.cpp"
using namespace std;
int main() {

	classmate newStudent;
	cout<<"--------------------Welcome--------------------\n";
	cout<<"What operation do you want to run? \n";
	cout<<"1.Enter new record \n 2.get records with N and M \n";
	int choice;
	cin>>choice;
	
switch (choice)
{
case 1:
	cout<<"how many records do ou wanna enter"<<endl;
	int NumberofRecords;
	cin>>NumberofRecords;
	collectdata(newStudent,NumberofRecords);
	break;
case 2:
	nameclass();
	break;
default:
	break;
}
nameclass();


	return 0;
}
