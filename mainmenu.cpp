/******************************************
* insert proper header here
*
*
*
********************************************/
#include <iostream>
#include "invmenu.h"
#include "reports.h"
using namespace std; 

//Function Prototypes
void displayHeader(); 
void displayMainList(); 
void clear(); 


int main(){
	//Variable Declarations
		int choice;  //Switch for menu


//note to self, don't forget input validation (no choice outside of range)
	switch(choice){
		case 1:
			//displayCashierHeader()
			break; 
		case 2: 
			//displayInvMenu
			break; 
		case 3:
			break; 
		default:
			cout << "Your choice is invalid";
			

	}


}

//Displays Main Menu Header
void displayMainHeader(){
		cout <<"SERENDIPITY BOOKSELLERS\n";
		cout <<"Main Menu\n\n"; 
	
}
//Displays Menu Options
void displayMainList(){
	cout <<"What would you like to do?\n";
	cout << "1. Cashier\n"; 
	cout << "2. Inventory\n"; 
	cout << "3. Reports\n";
	cout << "4. Exit\n\n"
}	cout << "Enter Your Choice (1-4): "; 

//Clears screen
void clear(){
	cout << "\033[H\033[2J";
}
