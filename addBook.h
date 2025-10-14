/************
*
*
* had to add a header file bc i couldnt use the vector
*
*
**************/


#ifndef ADDBOOK_H
#define ADDBOOK_H

#include <vector> 
#include "bookInfo.h" 


// Function Def for addBook so it can be externally accessed
void addBook(std::vector<bookInfo>& inventory, std::size_t capacity = 20); 


#endif

