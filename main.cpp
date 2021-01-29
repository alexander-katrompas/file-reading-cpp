/****************************
 sample application that displays a text file
****************************/

#include "main.h"

int main(int argc, char** argv) {

    // create a file handle to work with a file
    fstream myfile; // to use this, you must #include <fstream> in main.h
  
    /* attempt to open the file. notice this does not check to see if argv[1] exists,
    creating a potential crash. how would you fix this? */
    myfile.open(argv[1]);
    
    // check to see if the open operation was successful
    if (myfile.is_open()) {
        // if it was, display the file by calling a function in the functions module
        display_file(myfile);
        // close the file
        myfile.close();
    } else {
        // if it was not valid, display error
        cout << "invalid filename: badfile" << endl;
    }

    cout << endl;

    return 0;
}

