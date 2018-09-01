#include<iostream>
using namespace std;
#include<fstream>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>
#include<conio.h>
long int updatebalance;
int  id()
{
 string name,parentage; 
 char phone[13],dob[8];int money; int i=1;
 ofstream fout;
 cout<<"Enter ur phone no  please write 10 digits "<<endl;
cin>>phone;
int a=strlen(phone);
if(a!=10)
{
	cout<<"The entered Phone number is incorrect please check the number and try again "<<endl;

	exit(0);
}
fout.open(phone);
cin.ignore();

cout<<"Enter your name"<<endl;
getline(cin,name);
fout<<"\nNAME= "<<name;
cout<<"Enter your parentage"<<endl;
getline(cin,parentage);
fout<<"\nPARENTAGE=  "<<parentage;
cout<<"Enter dob"<<endl;
cin>>dob;
fout<<"\nDOB=  "<<dob;
cout<<"if u want to add money to your account then press any key and if u want to exit then press  1 "<<endl;
scanf("%d",&i);
if(i!=1)
{

    cout<<"Plese enter ur ammount in numbers"<<endl;
    scanf("%ld",&money);
    
    
    fout<<"\nTOTAL BALANCE= "<<money;
    cout<<"Your Balance has been updated"<<endl;
    
}


cout<<"Current balance = "<<money;
return(money);
fout.close();
}
