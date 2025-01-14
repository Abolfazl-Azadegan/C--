#include <iostream>
#include <string>

using namespace std;

int main(){
    int x1 = 5;
    int x2 {5};
    int x3(5);
    int x4 = {5};

    cout << "The x1 is: " << x1 << endl;
    cout << "The x2 is: " << x2 << endl;
    cout << "The x3 is: " << x3 << endl;
    cout << "The x4 is: " << x4 << endl;

    // Below code will remove the number after decimal point and keep the real number so it will do the auto type casting.
    int y1 = 5.1;
    // Below code will avoid any unintended type casting
    // This will generate error
    // int y2 {5.1};
    int y3(5.1);
    // This will generate error
    // int y2 {5.1};
    // int y4 = {5.1};

    cout << "The y1 is: " << y1 << endl;
    //cout << "The y2 is: " << y2 << endl;
    cout << "The y3 is: " << y3 << endl;
    //cout << "The y4 is: " << y4 << endl;

    /* This way of declaring variables is the most common way*/
    // int x2 {5};

}

