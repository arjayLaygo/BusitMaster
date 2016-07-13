#include<iostream>
#include<windows.h>
using namespace std;
int main()
{
HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);           
SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int x;
	for(x=1;x<100;x=x+2)
	{
		system("cls");
		cout<<"\n\n\n\n\n________________________________________________________________________________________________________________________\n"<<endl;
		cout<<"______          ______          ______        ______        ______        ______        ______        ______        ____\n"<<endl;
		cout<<"________________________________________________________________________________________________________________________\n"<<endl;
		system("cls");
		cout<<"\n\n\n\n\n________________________________________________________________________________________________________________________\n"<<endl;
		cout<<"        ______          ______         ______        ______        ______        ______        ______        ______     \n"<<endl;
		cout<<"________________________________________________________________________________________________________________________\n"<<endl;
		Sleep(700);
		
	}

	//steady movement na yung kalsada.. tapusin nyo na ang oto at ipapasok natin dito!!
	//busit kayo... mag push na!!
	

	system("pause");
	return 0;
}
