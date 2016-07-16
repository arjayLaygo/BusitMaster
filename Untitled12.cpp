
    #include <iostream>
    #include <string>
    #include <windows.h>
    #include <process.h>
    using namespace std;
    HANDLE console = GetStdHandle(STD_OUTPUT_HANDLE);
    COORD CursorPosition;
    void gotoXY(int x, int y, string text);
    void gotoXY(int x, int y,string text);
    void clrscr(int x, int y);
    int main(int)
    
{
	
char p;
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
system("pause");

menu:
int a;
	  

   for (a=1;a<=1;a=a+1)
   
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
		int l;
    
    cout<<"\t\t\t\t Choose an Animation?"<<endl;
    cout<<"1. Highway Star\n";
    cout<<"2. Busog Lusog Cycle\n";
    cout<<"3. Flying Airplane\n\n";
    cout<<"Enter the number of your Choice: ";
    cin>>l;

switch(l)


	{	case 1:
    		system("cls");
    		cout<<"1. Highway Star\n";           
    SetConsoleTextAttribute(h,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
	int t;
	for(t=1;t<7;t=t+2)
	{
		system("cls");
		cout<<"\n\n\n\n\n_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]_____[>]"<<endl;           
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


    cout<<"Return to Main Menu <Y or N>: ";
    cin>>p;
    if((p=='Y'||p=='y'))
    {
        system("cls");
        goto menu;
	}
	else((p=='N'||p=='n'));
	{
		system("cls");
		exit(0);
	}
      case 2:
    	system("cls");
    	cout<<"2. Busog Lusog Cycle\n";
    	
    	SetConsoleTextAttribute(h,FOREGROUND_BLUE | FOREGROUND_INTENSITY);

int n;
system("cls");
for(n=1;n<2;n=n+2)
{

cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
Sleep(500);

system("CLS");

cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
Sleep(500);

system("CLS");

cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
Sleep(500);

}



for(n=1;n<2;n=n+2)
{
cout<<"                ________________"<<endl;
cout<<"                \\              /"<<endl;
cout<<"                 \\            /"<<endl;
cout<<"                  \\          /"<<endl;
cout<<"                   \\________/"<<endl;
Sleep(500);
}
system("CLS");
for(n=1;n<2;n=n+2)
{
    cout<<"                    "<<endl;
	cout<<"                     "<<endl;
	cout<<"                      "<<endl;
	cout<<"                    <> "<<endl;
	cout<<"                     \\ ||/"<<endl;
	cout<<"                      \\||"<<endl;
	cout<<"                _______||_______"<<endl;
	cout<<"                \\              /"<<endl;
	cout<<"                 \\            /"<<endl;
	cout<<"                  \\          /"<<endl;
	cout<<"                   \\________/"<<endl;
    Sleep(800);
}                   
system("cls");
for(n=1;n<2;n=n+2)
{

cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
Sleep(800);

system("CLS");

cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
Sleep(800);

system("CLS");

cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
cout<<"                       /\\ "<<endl;
cout<<"                      (..)"<<endl;
Sleep(800);

}

{
cout<<"                ________________"<<endl;
cout<<"                \\              /"<<endl;
cout<<"                 \\            /"<<endl;
cout<<"                  \\          /"<<endl;
cout<<"                   \\________/"<<endl;
Sleep(800);
}
system("CLS");
for(n=1;n<2;n=n+2)
{
    cout<<"                     "<<endl;
	cout<<"                       ||/  "<<endl;
	cout<<"                       ||/"<<endl;
	cout<<"                    <> ||"<<endl;
	cout<<"                     \\ ||/"<<endl;
	cout<<"                      \\||"<<endl;
	cout<<"                _______||_______"<<endl;
	cout<<"                \\              /"<<endl;
	cout<<"                 \\            /"<<endl;
	cout<<"                  \\          /"<<endl;
	cout<<"                   \\________/"<<endl;
	Sleep(800);
	
	cout<<"\n\n Return to Main Menu <Y or N>: ";
    cin>>p;
    if((p=='Y'||p=='y'))
    {
        system("cls");
        goto menu;
	}
	else((p=='N'||p=='n'));
	{
		system("cls");
		exit(0);
	}

}

		case 3:
	
	
        system("CLS");
        string Plane[]=
        {"                    _                                      "
        ,"                  -=\\`\\                               "
        ,"              |\\ ____\\_\\__                                 "
        ,"            -=\\c`\"\"\"\"\"\"\" \"`)                               "
        ,"               `~~~~~/ /~~`                                "
        ,"                 -==/ /                                    "
        ,"                   '-'                                     "};
        string cloud[]=
        {"                  _  _                                     "
        ,"                 ( `   )_                                  "
        ,"                (    )    `)                               "
        ,"              (_   (_ .  _) _)                             "};
		
		char holder = ' ';
        int len, x, y;
        len = Plane[0].length();
        string border(len,'\xCD');
        string shadow(len+2,'\xB2');
        SetConsoleTextAttribute(console,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
        cout << "\t  \xC9" << border << "\xBB" << endl;
        for (x=0;x<11;x++)
		cout<<"\t  \xBA                                                           \xBA\xB2"<<endl; 
        cout<<"\t  \xBA                                             _             \xBA\xB2"<<endl; 
        cout<<"\t  \xBA                                           (   )           \xBA\xB2"<<endl; 
        cout<<"\t  \xBA             _ .                         ( `  ) . )        \xBA\xB2"<<endl; 
        cout<<"\t  \xBA           (  _ )_                      (_, _(  ,_)_)      \xBA\xB2"<<endl; 
        cout<<"\t  \xBA         (_  _(_ ,)                                        \xBA\xB2"<<endl; 
        cout << "\t  \xC8" << border << "\xBC\xB2" << endl;
        cout << "\t   " << shadow << endl;
		do{
			SetConsoleTextAttribute(console,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
            for (y=0;y<7;y++)
            {
            	SetConsoleTextAttribute(console,FOREGROUND_GREEN | FOREGROUND_INTENSITY);
                gotoXY(11,1+y,Plane[y]);
            }
            
            for (x=0;x<4;x++)
            {
            	SetConsoleTextAttribute(console,FOREGROUND_BLUE | FOREGROUND_INTENSITY);
                gotoXY(11,8+x,cloud[x]);
            }
            for (y=0;y<7;y++)
            {
            	
                holder = Plane[y][len];
                for (x=len;x>0;x--)
                {
                    Plane[y][x]=Plane[y][x-1];
                }
                Plane[y][0]=holder;
            }
            for (y=0;y<4;y++)
            {
                holder = cloud[y][0];
                for (x=0;x<len;x++)
                {
                    cloud[y][x]=cloud[y][x+1];
                }
                cloud[y][len]=holder;
            }
    Sleep(1); 

    }while(true);
}
    return 0;
    
    }
 void clrscr()
    {
    system("pause");
	}
	void gotoXY(int x, int y, string text)
    {
        CursorPosition.X = x;
        CursorPosition.Y = y;
        SetConsoleCursorPosition(console,CursorPosition);
        cout << text; 
    }
    void gotoXY(int x, int y)
    {
        CursorPosition.X = x;
        CursorPosition.Y = y; 
    }
   
