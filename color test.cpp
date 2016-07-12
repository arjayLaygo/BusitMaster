#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	
HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);           
SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
 cout<<"GREEN TEXT"<<endl;
 SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
 cout<<"BLUE TEXT"<<endl;
 
 
 system("pause");
 return 0;	
		
	 // system("color f1"); //paltan yung number para sa iba pang kulay..this is a background color
	
}
