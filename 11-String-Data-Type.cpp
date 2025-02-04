#include <iostream>
#include <string>

using namespace std;

int main (){

    string s {"Hello World!!"};

    cout << s << endl;
    cout << "size of s is: " << sizeof(s) << endl;
    cout << "size of string is: " << sizeof(string) << endl;
    cout << "s is: " << s.size() << " characters long" << endl;
}

