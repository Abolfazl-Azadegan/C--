#include <iostream>
#include <string>


using namespace std;

int main(){

    bool somecondition1 = true; // The boolean values should be in lowercase

    if (somecondition1){
        cout << "Some condition1 is true!!\n";
    }
    else {
        cout << "Some condition1 is false!!\n";
    }

    /* If the if and else has only 1 line of code for their bodeis we can remove the {} for both them like below code*/
    /* But only if the body has 1 single line of code not more*/
    bool somecondition2 = false; // The boolean values should be in lowercase

    if (somecondition2)
        cout << "Some condition2 is true!!\n";

    else
        cout << "Some condition2 is false!!\n";

    // Another example!!
    // Below is the kinds of comarision expressions which we can use for if statement condition
    // ==     !=     >=      <=     >     <
    int x {5};
    if (x == 5){
        cout << "X is equal to 5!\n";
    }
    else if (x <= 100){
        cout << "x is equal or smaller than 100!!\n";
    }
    else{
        cout << "x is not 5 or smaller than 100!!\n";
    }

    // Another example!!
    // 0 is considered to be false and any other number than 0 even negative numbers will be regarded as true
    // Below the 0 is concidered as false and the else statement will be run
    int z {0};
    if (z){
        cout << "z is not equal to 0!\n";
    }
    else{
        cout << "z is equal to 0!\n";
    }


}




