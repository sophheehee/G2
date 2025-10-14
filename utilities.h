/***************************************************
* Programmer: Sophia Omar
* Assignment: G3 -- Add & Look Up Book
* Due Date: 14 October 2025
* Purpose: Helper functions/Utilities for Serendipity
*****************************************************/
#ifndef UTILITIES_H
#define UTILITIES_H


#include string

//Screen Related
void clearScreen(); 
void pauseEnter(); 


//Input validation and stuff
bool readInt(const char* prompt, int& out); 
bool readFloat(const char* prompt, float& out); 
int readChoice(const std::string& prompt, int min, int max); 
std::string readLine(const char* prompt); 
std::string toLowerCopy(std::string s); 


#endif
