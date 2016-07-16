#include <iostream>
#include <string>
#include <windows.h>

using namespace std;
int main()
{
char t;
string Username="";
string Password="";
bool LoginSuccess=false;

HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);           
SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);

cout<<"\n Please LOGIN"<<endl;
do
{ 
    cout<<"\n Username: ";
    cin>>Username;
    cout<<" Password: ";
    cin>>Password;
    
    if(Username=="saksakmo" && Password=="sabagamo")
             {  
               cout<<" LOGIN SUCCESS\n" ;
			   LoginSuccess=true;
	                                            }           
	else
	         {
	           cout<<"Incorrect username or password"<<endl;
	           cout<<"Please TRY Again \n";	         	
			                                     }         
	}	
while(!LoginSuccess) ;

	  int a;

   for (a=1;a<=10;a=a+1)
   
   {
   	    system("CLS");
        HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);           
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<"\n\t\t\t\t\t  :::COMPUTER PROGRAMMING 1:::"<<endl;
        cout<<"\t\t\t\t\t\t   ::CS-102::"<<endl;
		cout<<"========================================================================================================================"<<endl;
		
		SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout<<"\n\n";
		cout<<"\t\t\t\t _______________________________________________"<<endl;
		cout<<"\t\t\t\t|                Team Kaen :D                   |"<<endl;
		cout<<"\t\t\t\t| #Donabelle Oprido   (Pakaen Queen)            |"<<endl;
		cout<<"\t\t\t\t| #Joshua Jamangal    (Kaen King)               |"<<endl;
		cout<<"\t\t\t\t| #Mark James Llanes  (Dakilang Nota)           |"<<endl;
		cout<<"\t\t\t\t| #Arjay Laygo        (Dakilang Borla)          |"<<endl;
		cout<<"\t\t\t\t| #Geline Evangelista (Busog Lusog)             |"<<endl;
		cout<<"\t\t\t\t|_______________________________________________|\n\n\n\n"<<endl;
	    Sleep(700);
	    system("CLS");
          
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<"\n\t\t\t\t\t  :::COMPUTER PROGRAMMING 1:::"<<endl;
        cout<<"\t\t\t\t\t\t   ::CS-102::"<<endl;
		cout<<"========================================================================================================================"<<endl;
		
		SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout<<"\n\n";
		cout<<"\t\t\t\t _______________________________________________"<<endl;
		cout<<"\t\t\t\t|                Team Kaen :D                   |"<<endl;
		cout<<"\t\t\t\t| #Donabelle Oprido   (Pakaen Queen)            |"<<endl;
		cout<<"\t\t\t\t| #Joshua Jamangal    (Kaen King)               |"<<endl;
		cout<<"\t\t\t\t| #Mark James Llanes  (Dakilang Nota)           |"<<endl;
		cout<<"\t\t\t\t| #Arjay Laygo        (Dakilang Borla)          |"<<endl;
		cout<<"\t\t\t\t| #Geline Evangelista (Busog Lusog)             |"<<endl;
		cout<<"\t\t\t\t|_______________________________________________|\n\n\n\n"<<endl;
	    Sleep(700);
	    
	    system("CLS");         
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
        cout<<"\n\t\t\t\t\t  :::COMPUTER PROGRAMMING 1:::"<<endl;
        cout<<"\t\t\t\t\t\t   ::CS-102::"<<endl;
		cout<<"========================================================================================================================"<<endl;
		
		SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout<<"\n\n";
		cout<<"\t\t\t\t _______________________________________________"<<endl;
		cout<<"\t\t\t\t|                Team Kaen :D                   |"<<endl;
		cout<<"\t\t\t\t| #Donabelle Oprido   (Pakaen Queen)            |"<<endl;
		cout<<"\t\t\t\t| #Joshua Jamangal    (Kaen King)               |"<<endl;
		cout<<"\t\t\t\t| #Mark James Llanes  (Dakilang Nota)           |"<<endl;
		cout<<"\t\t\t\t| #Arjay Laygo        (Dakilang Borla)          |"<<endl;
		cout<<"\t\t\t\t| #Geline Evangelista (Busog Lusog)             |"<<endl;
		cout<<"\t\t\t\t|_______________________________________________|\n\n\n\n"<<endl;
	    Sleep(700);
	}
	
    
	
	
	system ("pause");
	return 0;	
	}
        
