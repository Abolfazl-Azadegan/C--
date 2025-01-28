#include <iostream>
#include <string>

using namespace std;

int main(){

    int x {5};
    double y {1.01};
    char z {'A'};

    cout << "x is: " << sizeof(x) << " Bytes!!\n";
    cout << "y is: " << sizeof(y) << " Bytes!!\n";
    cout << "z is: " << sizeof(z) << " Bytes!!\n";
    cout << "--------------------------------------------------------\n";
    cout << "int is: " << sizeof(int) << " Bytes!!\n";
    cout << "double is: " << sizeof(double) << " bytes!!\n";
    cout << "char is: " << sizeof(char) << " Bytes!!\n";
    cout << "float is: " << sizeof(float) << " Bytes!!\n";
    cout << "--------------------------------------------------------\n";

    x = 10;
    y = 3;
    int result = x/y;

    cout << "The result is: " << result << endl; 
    cout << "MAX INT size is: " << INT_MAX << endl;
    cout << "MIN INT size is: " << INT_MIN << endl;
}