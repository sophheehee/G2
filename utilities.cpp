/***************************************************
* Programmer: Sophia Omar
* Assignment: G3 -- Add & Look Up Book
* Due Date: 14 October 2025
* Purpose: Utilities implementation
*****************************************************/
#include <iostream> 
#include "utils.h" 

#include <limits>
#include <cctype> 
using namespace std; 


/*************** Screen Stuff ****************/
void clear(){
	cout << "\033[H\033[2J";
}
void pauseEnter(){
	cout <<"\nPress Enter to Continue...";
	cin.ignore(); 
	cin.get(); 
}
