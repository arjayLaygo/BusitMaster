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
		cout<<"\n\n\n\n\n_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]"<<endl;
		HANDLE h = GetStdHandle (STD_OUTPUT_HANDLE);           
        SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout<<"        _______________                                    ________________            "<<endl;
        cout<<"       /______________/|                             _____/               /\\________  "<<endl;
        cout<<"      /______________/ |______                      /----/               / /       /'  "<<endl;
        cout<<"     /_ _ _ _ _ _ _ / /     / \\____                /----/_ _ _ _ _ _ _ _/ /   >>> //   "<<endl;
        cout<<"     |              |/_____/ / >>>/,              /_____|____|____|_____\\/_______//   "<<endl;
        cout<<"     |              | \\____\\/_>>>/,                \\-----(O)__|__\\_____,(O)------'   "<<endl;
        cout<<"     |______________|_'____|____/	    "<<endl;
        cout<<"        ''\( O )-----------( O )''       "<<endl;           
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout<<"_____           _____           _____         _____         _____         _____         _____         _____         ___\n"<<endl;
		SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout<<"                  ________________                                    "<<endl;
        cout<<"            _____/               /\\________                          "<<endl;
        cout<<"           /----/               / /       /'                          "<<endl;
        cout<<"          /----/_ _ _ _ _ _ _ _/ /   >>> //                           "<<endl;
        cout<<"         /_____|____|____|_____\\/_______//                           "<<endl;
        cout<<"          \\-----(O)__|__\\_____,(O)------'                           "<<endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout<<"________________________________________________________________________________________________________________________\n"<<endl;
		Sleep(200);
		system("cls");
		cout<<"\n\n\n\n\n[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____"<<endl;
		SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
		cout<<"                  _______________                                              ________________            "<<endl;
        cout<<"                 /______________/|                                       _____/               /\\________  "<<endl;
        cout<<"                /______________/ |______                                /----/               / /       /'  "<<endl;
        cout<<"               /_ _ _ _ _ _ _ / /     / \\____                          /----/_ _ _ _ _ _ _ _/ /   >>> //   "<<endl;
        cout<<"               |              |/_____/ / >>>/,                        /_____|____|____|_____\\/_______//   "<<endl;
        cout<<"               |              | \\____\\/_>>>/,                          \\-----(O)__|__\\_____,(O)------'   "<<endl;
        cout<<"               |______________|_'____|____/	           "<<endl;
        cout<<"                  ''\( O )-----------( O )''            "<<endl;
        
		SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout<<"        ______          ______         ______        ______        ______        ______        ______        ______     "<<endl;
		SetConsoleTextAttribute(h,FOREGROUND_RED | FOREGROUND_INTENSITY);
		cout<<"                       ________________                               "<<endl;
        cout<<"                 _____/               /\\________                     "<<endl;
        cout<<"                /----/               / /       /'                     "<<endl; 
        cout<<"               /----/_ _ _ _ _ _ _ _/ /   >>> //                      "<<endl;
        cout<<"              /_____|____|____|_____\\/_______//                      "<<endl;
        cout<<"               \\-----(O)__|__\\_____,(O)------'                      "<<endl;
        SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
		cout<<"________________________________________________________________________________________________________________________\n"<<endl;
		Sleep(200);
		
	}

	//test lang ikaw na magayos dems.... ^^
	//ampangit tignan parang nagbblink lang mas maganda kung yung parang sunod sunod ...kaw na bahala ^^

	system("pause");
	return 0;
}
