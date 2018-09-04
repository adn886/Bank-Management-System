#include<fstream>
#include<iostream>
using namespace std;
void addmoneyy(long int add)
{
	ofstream ob;
	char ch[12];long int n[10]; long int k,m;
	cout<<"\n please enter your phone no.";
	cin>>ch;
	  
	ob.open(ch,ios::app);
	if(!ob)
	{
	
	cout<<"u enter wrong no.";
	exit(0);
        }
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
    cout<<"\n enter amount u want to add\n";
    cin>>k;
    	m=k+add;
   ob<<"\nDATE OF ADDING MONEY TO ACCOUNT= ";
//////////////date////////// 
   ob<< asctime(ti)<<endl;
///////////////////////////////////   
	
	ob<<"\n new ammount u added= "<<k;

	ob<<"\n total Balance= "<<m;
	ob.close();
}
