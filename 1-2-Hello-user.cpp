#include <iostream>
#include <conio.h>
#include <climits>


using namespace std;

main(){

    cout << "Hello World!!!" << endl;
    cout << "Hello" << "Ali" << endl;
    cout << "Hello" << '\t' << "Mamad" << endl;
    cout << "Hello" << '\n' << "Jafar" << endl;
    cout << "Hello" << '\b' << "Zafar" << endl; // Move cursor 1 step back
    cout << "Hello" << '\a' << '\t' << "Ghazal" << endl; // Move cursor 1 step back
    int a = 42769;
    int b = 2147483749;
    cout << "a*2=" << a*2 << endl;
    cout << "b= " << b << endl;
    cout << "Minimum int value: " << INT_MIN << endl;
    cout << "Maximum int value: " << INT_MAX << endl;

    int user_name = getch();

}