#include<iostream>
using namespace std;
#include<fstream>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<string>


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
cout<<"Enter your name"<<endl;
cin.ignore();
getline(cin,name);
//............time ..........


     // Declaring argument for time()
    time_t tt;
 
    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;

    // Applying time()
    time (&tt);
 
    // Using localtime()
   ti = localtime(&tt);
   
//.............................


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
    fout<<"\nDATE OF ADDING MONEY TO ACCOUNT= ";
//////////////date////////// 
   fout<< asctime(ti)<<endl;
///////////////////////////////////   
 cin>>money;
    
    
    fout<<"\nTOTAL BALANCE= "<<money<<endl<<"DATE=";
    cout<<"\nYour Balance has been updated"<<endl;
  
}


cout<<"Current balance = "<<money;
return(money);
fout.close();
}
