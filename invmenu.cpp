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
using namespace std; 


/******************** INV MENU FUNCTIONS *************************/
//Function Definitions for Menu and Header 
void clearInvScreen(){
	cout << "\033[H\033[2J";
}
//  throws error for non-int input (same as in main)
void checkAlphaInv(int& choice){
	while(true){
		cin >> choice; 
	if (cin.fail()){
		cin.clear(); 
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		cout <<"\nInvalid Input! Please enter a number. \n\n";
		continue; 
		
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	break; 
}
}
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
		checkAlphaInv(choice); 

		//Menu Choice 
		switch(choice){
		case 1:
			//lookUpBook()
			break; 
		case 2: 
			//addBook()
			break; 
		case 3:
			//editBook()
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
			cin.get(); // pause again before clearing 
			//cin.ignore();
			clearInvScreen(); 
		}

	} while (choice != 5); 
}




//****************** LOOK UP BOOK RELATED FUNCTIONS *****************//
void displaySearchBy(){
	cout <<"What would you like to do?\n";
	cout << "1. Search by Title\n"; 
	cout << "2. Search by ISBN\n"; 
	cout << "3. Return to Inventory Menu\n";
	cout << "Enter Your Choice (1-3): "; 

}
void displaySearchHeader(){
		cout <<"SERENDIPITY BOOKSELLERS\n";
		cout <<"Inventory Search Menu\n\n"; 

}
//SEARCH BY TITLE
//void searchTitle(){


//} 

//SEARCH BY ISBN
//void searchISBN(); 

void lookUpBook(){
		int choice; 
 	do{
		//Display header
		displaySearchHeader(); 
		displaySearchBy(); 
		//get choice
		checkAlphaInv(choice); 

	//create switch menu
		switch(choice){
		case 1:
			//search by title
			//searchTitle();
			break; 
		case 2: 
			//search by isbn
			//searchISBN(); 
			break; 
		case 3:  //exit loop
			break; 
		default: 
			cout <<"Your choice is invalid. Please enter a choice from 1-3.";
			cin.get(); //pause 

				} 
			if(choice !=3){
				cout <<"\n\nPress Enter to Continue..."; 
				//cin.ignore(); 
				cin.get(); 
			}

	} while (choice !=3);

}

