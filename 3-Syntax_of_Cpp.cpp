#include <iostream>
#include <string>

int main(){
    /*----------------------------------- Note 1-----------------------------------------*/
    // Single line comment

    /*----------------------------------- Note 2-----------------------------------------*/
    /* Multi line comment
    Line 2
    Line 3
    Line 4*/

    /*----------------------------------- Note 3-----------------------------------------*/
    std::cout << "Hello World!" << std::endl; // Put comment in a line
    std::cout << "Hello World!" /*Put a comment in the line*/ << std::endl;
    std::cout << "Hello World!" /*Put a comment in 
    
    Multiple lines*/ << std::endl;

    /*----------------------------------- Note 4-----------------------------------------*/
    // Lines should end with semicolon ';'

    /*----------------------------------- Note 5-----------------------------------------*/
    std::cout << "First Hello World! \n" 
              << "Second Hello world! \n" 
              << "Third Hello world! \n" 
              << std::endl; 

    /*----------------------------------- Note 6-----------------------------------------*/
    /* By using below command we can remove 'std::' at the beginning of our commands.
    std:: means we are using standard library in our code*/

    // using namespace std; 
}

