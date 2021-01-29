/****************************
 sample application that displays a text file
****************************/

#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include <iostream>
#include <fstream>
#include <string>

using std::cout;
using std::endl;
using std::fstream;
using std::string;

int count_characters(string);
void display_file(fstream&);

#endif /* FUNCTIONS_H */
