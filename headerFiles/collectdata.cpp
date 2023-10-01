#include "table.h"
#include <iostream>
#include <fstream>

using namespace std;

void collectdata (classmate newstudent,int rerun){


    
    ofstream recordbook;

recordbook.open("recordbook.txt",ios::app);

for (int i = 0; i < rerun; i++)
{
  
cout<<"-----------------------New Student--------------------------\n";
cout<<"1.Enter firstName "<<endl;
cin>>newstudent.firstName;
recordbook<<newstudent.firstName<<" ";

cout<<"2.Enter Surname "<<endl;
cin>>newstudent.surname;
recordbook<<newstudent.surname<<" ";

cout<<"3.Enter Age "<<endl;
cin>>newstudent.age;
recordbook<<newstudent.age<<" ";

cout<<"4.Enter district"<<endl;
cin>>newstudent.district;
recordbook<<newstudent.district<<" ";

cout<<"5.Enter Phonenumber "<<endl;
cin>>newstudent.phoneNumber;
recordbook<<newstudent.phoneNumber<<" "<<endl;


}




recordbook.close();
}

void nameclass(){

ifstream recordbook;
recordbook.open("recordbook.txt");
string line;
while (!recordbook.eof())
{
 getline(recordbook,line);
   string letter=line.substr(0,1);

    if(letter=="M"|letter=="N"){


        cout<<line<<endl;
    }

}
recordbook.close();


}


