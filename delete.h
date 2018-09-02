#include<iostream>
#include<string.h>
#include<string>
#include<stdio.h>
using namespace std;
void del()
{
      char phone[15];
  	cout<<"Enter your id "<<endl;
  		cin>>phone;
  	int a=strlen(phone);
  	if(a!=10)
  	{
  	cout<<"Invalid id please try again"<<endl;
  	exit(0);
    }
	if(remove(phone)!=0)
	{
		cout<<"The file You are searching for doesnt exit "<<endl;
	}
	else 
	{
	
	cout<<"your account has been successfully removed "<<endl;
	cout<<"  ....HOPE WE SEE YOU SOON ....THANKS FOR CHOOSING OUR BANK.."<<endl;
}
}
