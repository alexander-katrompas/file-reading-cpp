/****************************
 sample application that displays a text file
****************************/

#include "functions.h"

int count_characters(string line){
    int count = 0;
    while(line[count] != '\0'){
        count++;
    }
    return count;
}

void display_file(fstream &fin) {
    /* this is a c++ style string. it is actually an object and you need
       to #include <string> to use it. */
    string line;
    // this will be used to count words per line and display them
    int character_count = 0;

    /* this while loop is doing two things at once. it is performing a getline
    from the file and placeing each line one at a time in the string called 'line'.
    getline is also acting as a flag to stop the loop. when the end of file is
    reached, getline will return false and stop the loop */
    while (getline(fin, line)) {
        // get the character count
        character_count = count_characters(line);
        // output the line along with it's character count (including spaces)
        cout << line << " [" << character_count << " chars]" << endl;
    }
}

