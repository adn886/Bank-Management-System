//.......bank management main................

#include<stdio.h>
#include<iostream>
//#include<conio.h>
#include "newaccount.h"
#include "addmoney.h"
#include "display.h"
#include "delete.h"
#include<string>
using namespace std;

//***********Globalvaribles*********//
long int ak;

//**********prototypes***********
int id();
void addmoneyy();
void display();
void del();

int main()
{
int choice,ch;
cout<<"....Welcome to our Bank and thanks for showing interest....\n........Lets get started........."<<endl;
do{

cout<<"  ..........MAIN MENU........... "<<endl;
cout<<"To Select any option press numbers that are displayed before options";
cout<<"\n 1. Create new account";
cout<<"\n 2. Update details and balance of your account";
cout<<"\n 3. Display details of your account";
cout<<"\n 4. Delete your account";
cout<<"\n 5. Press to exit\n";
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
       break;
case 4: del();
        break;
case 5: exit (0);
        break;
default:  cout<<"Enter a valid choice"<<endl;
}
cout<<endl<<"TO continue press 1 else any other key to exit"<<endl;
cin>>ch;
}while(ch==1);

}
