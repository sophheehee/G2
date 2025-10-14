/***************************************************
* Programmer: Sophia Omar
* Assignment: G3 -- Add & Look Up Book
* Due Date: 14 October 2025
* Purpose: Utilities implementation
*****************************************************/
#include <iostream> 
#include "utilities.h" 
#include <limits>
#include <cctype> 
using namespace std; 


/*************** Screen Stuff ****************/

void clear(){ //Clears Screen
	cout << "\033[H\033[2J";
}
void pauseEnter(){ //Pauses before continuing loop
	cout <<"\nPress Enter to Continue...";
		string x; 
		getline(cin, x); //this is safer than cin.get supposedly
}

/************ Validation Tools ****************/
int readChoice(const std::string& prompt, int min, int max){ //input check
		int c; 
		while(true){
			cout << prompt; 
		if(!(cin >> c)){
			cin.clear(); 
			cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); 
			cout << "Invalid Input. Please enter a number.\n"; 
			continue; 
		}
		cin.ignore(numeric_limits<std::streamsize>::max(), '\n'); 
			if(c < min || c > max){
				cout << "Please enter a number from " <<min<<"-"<<max<<".\n";
				continue; 		
			}
				return c; 
		}
}


/********************** String/Line Tools *******************/
string readLine(const char* prompt){ //reads full line 
	cout << prompt; 
	string s; 
	getline(cin, s); 
	return s; 
}

string toLowerString(string s){ //returns full line lowercase
		for(char &c :s)
			c = static_cast<char>(std::tolower(static_cast<unsigned char>(c))); 
		return s; 
}
