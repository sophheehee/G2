//COPY
/***********************************
* Programmer: Sophia Omar
* Assignment: G2 - Serendipity Menu
* Due Date: 23 September 2025
* Purpose: Inventory Menu Function 
*    Definitions
************************************/
#include <iostream>
#include "invmenu.h"
using namespace std; 



//Function Definitions for Menu and Header (Sophie)
void displayInvList(){
	cout <<"What would you like to do?\n";
	cout << "1. Search for a Book\n"; 
	cout << "2. Add a Book\n"; 
	cout << "3. Edit a Book\n";
	cout << "4. Delete a Book\n";
	cout << "5. Return to Main Menu\n\n"; 
	cout << "Enter Your Choice (1-5): "; 

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
		cin >> choice; 

		//Menu Choice 
		switch(choice){
		case 1:
			//lookUpBook()
			break; 
		case 2: 
			//addBook()
			break; 
		case 3:
			//editBookl()
			break; 
		case 4:
			//deleteBook()
			break; 
		case 5: 
			//Exit Menu
			break; 
		
		default:
			cout << "Your choice is invalid. Please enter a choice from 1-5.";
			 cin.get(); // pauses so message is seen 

		}
		
		if (choice !=5) {
			cout <<"\n\nPress Enter to Continue..."; 
			cin.ignore(); 
			cin.get(); // pause again before clearing 
			cout << "\033[H\033[2J";
		}

	} while (choice != 5); 
}
