/***************************************************
* Programmer: Sophia Omar
* Assignment: G2 -- Serendipity Menus
* Due Date: 23 September 2025
* Purpose: Main Menu Driver for Bookseller program
*****************************************************/
#include <iostream>
//#include "invmenu.h"
#include "reports.h"
using namespace std; 

//Function Prototypes
void displayMainHeader(); 
void displayMainList(); 
void clear(); 


int main(){
	//Variable Declarations
		int choice;  //Switch for menu

	do {
			
		//Display Header
			clear(); 
			displayMainHeader();
			displayMainList();
		//Prompt for input 
		cin >> choice; 

		//Menu Choice 
		switch(choice){
		case 1:
			//cashier()
			break; 
		case 2: 
			//invMenu(); 
			break; 
		case 3:
			clear(); 
			reports();
			break; 
		case 4:
				break; 
			//exits loop
		default:
			cout << "Your choice is invalid. Please enter a choice from 1-4.";
			 cin.get(); // pauses so message is seen 

		}
		
		if (choice !=4) {
			cout <<"\n\nPress Enter to Continue..."; 
			cin.ignore(); 
			cin.get(); // pause again before clearing 
		}

	} while (choice != 4); 

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
	cout << "4. Exit\n\n";
	cout << "Enter Your Choice (1-4): "; 
}
//Clears screen
void clear(){
	cout << "\033[H\033[2J";
}
