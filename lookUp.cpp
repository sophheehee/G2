/*************
*
* functions for lookUpBook function
*
****************/
#include <iostream>
#include <limits>
#include <vector> 
#include "invmenu.h"
#include "bookInfo.h"
#include "utilities.h"
using namespace std; 

//Header Functions 
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

//Search Functions 
//SEARCH BY TITLE
//void searchTitle(){


//} 

//SEARCH BY ISBN
//void searchISBN(); 


//Main driver 
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
