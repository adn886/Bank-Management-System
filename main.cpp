//.......bank management main................


#include<stdio.h>
#include<iostream>
#include<conio.h>
#include "newaccount.h"
#include "addmoney.h"
#include "display.h"
#include<string>
using namespace std;

//***********Globalvaribles*********//
long int ak;

//**********prototypes***********
int id();
void addmoneyy();
void display();

int main()
{
int choice;
cout<<"....Welcome to our Bank and thanks for showing interest....\n........Lets get started........."<<endl;
cout<<"  ..........MAIN MENU........... "<<endl;
cout<<"To Select any option press numbers that are displayed before options";
cout<<"\n 1. Create new account";
cout<<"\n 2. Update details and balance of your account";
cout<<"\n 3. Display details of your account";
cout<<"\n 4. Press to exit";
cout<<"Enter your choice\n";
cin>>choice;
switch(choice)
{
	
 case 1:
    ak =id();
        break;
case 2:
       addmoneyy(ak); 
	   break;
case 3: 
       display();
case 4: exit (0);
        break;
default:  cout<<"Enter a valid choice";
}
}
