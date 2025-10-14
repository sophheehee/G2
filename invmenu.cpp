/***********************************
* Programmer: Sophia Omar
* Assignment: G3 - Add & Look Up Book
* Due Date: 14 October 2025
* Purpose: Inventory Menu Function 
*    Definitions
************************************/
#include <iostream>
#include <limits>
#include <vector> 
#include "invmenu.h"
#include "bookInfo.h"
//#include "addBook.cpp"
#include "lookUp.h"
#include "utilities.h"
using namespace std; 


/******************** INV MENU FUNCTIONS *************************/
//Function Definitions for Menu and Header 
void displayInvList(){
	cout <<"What would you like to do?\n";
	cout << "1. Search for a Book\n"; 
	cout << "2. Add a Book\n"; 
	cout << "3. Edit a Book\n";
	cout << "4. Delete a Book\n";
	cout << "5. Return to Main Menu\n\n"; 

}
void displayInvHeader(){
	cout <<"SERENDIPITY BOOKSELLERS\n";
		cout <<"Inventory Menu\n\n"; 

} 
 
void invMenu(){
	//Variable Declarations
		int choice; //Menu Switch

do{
			
			displayInvHeader();
			displayInvList();
		//Prompt for input 
		choice = readChoice("Enter Choice (1-5):", 1, 5); 

		//Menu Choice 
		switch(choice){
		case 1:
			lookUpBook(database);
			break; 
		case 2: 
			//addBook(database,20);
			break; 
		case 3:
			cout << "Edit Function Not Available";
			break; 
		case 4:
			cout << "Delete Function Not Available"; 
			break; 
		case 5: 
			//Exit Menu
			break;
		}
		
		if (choice !=5) {
			cout <<"\n\nPress Enter to Continue..."; 
			cin.get(); // pause again before clearing 
			//cin.ignore();
			clear(); 
		}

	} while (choice != 5); 
}





