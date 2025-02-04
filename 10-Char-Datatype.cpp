#include <iostream>


using namespace std;

int main(){

    char c {'A'};
    int cAsNumber {c};

    cout << "c is: " << c << endl;
    cout << "cAsNumber is:" << cAsNumber << endl;


/* Here, the value of c (a char) is assigned to cAsNumber (an int).
When a char is assigned to an int, it is implicitly converted to its numeric (ASCII) value.
c has the character 'A', which corresponds to the numeric value 65.
This numeric value is used to initialize cAsNumber.*/


//Explicit Casting:
//You could explicitly cast the char to an int for clarity:

    int cAsNumbers = static_cast<int>(c);

//Reversing the Process:
//If you wanted to convert the number back to a character:
    char newChar = static_cast<char>(cAsNumber);
    cout << newChar << endl; // Prints 'A'


    cout << "The min of char is: " << CHAR_MIN << endl;
    cout << "The max of char is: " << CHAR_MAX << endl;

    // for (int i=CHAR_MIN; i<=CHAR_MAX; i++){
    //     char iAsChar = i;
    //     cout << i << ": " << iAsChar << endl;
    // }

    cout << "The min of unsigned char is: " << UCHAR_MAX << endl;
    cout << "The max of unsigned char is: " << UCHAR_MAX << endl;

    for (int j=0; j<=UCHAR_MAX; j++){
        unsigned char jAsChar = j;
        cout << j << ": " << jAsChar << endl;
    }



}

