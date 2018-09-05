#include<fstream>
#include<iostream>
#include<string.h>
using namespace std;
void addmoneyy(long int add)
{
	ofstream ob;
	char ch[12];long int n[10]; long int k,m;
	cout<<"\n please enter your phone no.";
	cin>>ch;
	          
	ob.open(ch,ios::app);
	if(!ob||strlen(ch)!=10)
	{
	
	cout<<"u enterd wrong no or your account is not present.";
	exit(0);
        }
 //.........checking if user wants to deposit or withdraw money....
      cout<<"\n press D to Deposit \n press W to withdraw";
       cout<<"\n\n Enter your Choice";
      char choice;
      cin>>choice;
   
//.........date adding.....

     // Declaring argument for time()
    time_t tt;
 
    // Declaring variable to store return value of
    // localtime()
    struct tm * ti;

    // Applying time()
    time (&tt);
 
    // Using localtime()
   ti = localtime(&tt);
   
//..........ebnding date.........
   if(choice=='d'||choice=='D')
{
    cout<<"\n enter amount you want to Deposit\n";
    cin>>k;
    	m=k+add;
   ob<<"\nDATE OF ADDING MONEY TO ACCOUNT= ";
//////////////date////////// 
   ob<< asctime(ti)<<endl;
///////////////////////////////////   
	
	ob<<"\n new ammount u added= "<<k;

	ob<<"\n total Balance= "<<m;
//ob.close();
}
else
if(choice=='w'||choice=='W')
{
 cout<<"\n enter amount you want to withdraw\n";
    cin>>k;

 
    	m=add-k;
    if(m<0)
{
 cout<<"\n sory you cant withdraw too much ammount";
      exit(0);
}   
   ob<<"\nDATE OF Withdrawing money from your Account ACCOUNT= ";
//////////////date////////// 
   ob<< asctime(ti)<<endl;
///////////////////////////////////   
	
	ob<<"\n ammount you withdraw from tour account= "<<k;

	ob<<"\n total Balance= "<<m;
}
ob.close();
}
