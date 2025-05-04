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

    // Below code will remove the number after decimal point and keep the real number so it will do the narrowing conversions.
    int y1 = 5.1;
    // Below code will avoid any unintended narrowing conversions
    // Below code will generate error
    // int y2 {5.1};
    int y3(5.1);
    // Below code will generate error
    // int y4 = {5.1};

    cout << "The y1 is: " << y1 << endl;
    //cout << "The y2 is: " << y2 << endl;
    cout << "The y3 is: " << y3 << endl;
    //cout << "The y4 is: " << y4 << endl;

    /* This way of declaring variables is the most common way*/
    // int x2 {5};

}

/*----------------------------------- Note 1-----------------------------------------*/
// x1 = 5;	        Copy initialization: traditional, allows implicit conversions.
// x2 {5};	        Uniform/brace initialization (C++11+): prevents narrowing.
// x3(5);	        Direct initialization: like a constructor call.
// x4 = {5};	    Copy-list initialization: still uses braces, behaves like x2.
/*----------------------------------- Note 1-----------------------------------------*/



/*----------------------------------- Note 2-----------------------------------------*/
// ✅ x2 {5}; — Direct List Initialization

// int x2 {5};
// Called direct list initialization.
// Uses braces directly in the declaration.
// Does not allow narrowing conversions.
// Most modern and safe way to initialize.


// ✅ Example:
// int a {10};      // OK  
// int b {5.5};     // ❌ Error: narrowing conversion not allowed
/*----------------------------------- Note 2-----------------------------------------*/


/*----------------------------------- Note 3-----------------------------------------*/
// ✅ x2 = {5}; — Copy List Initialization

// int x2 = {5};
// Called copy list initialization.
// Also uses braces, but with an =.
// Behaves almost the same as direct list init.
// Also disallows narrowing conversions.
// Still modern and safe.


// ✅ Example:
// int a = {10};    // OK  
// int b = {5.5};   // ❌ Error: narrowing
/*----------------------------------- Note 3-----------------------------------------*/


/*----------------------------------- Note 4-----------------------------------------*/
// 🤔 So What's the Difference?

// Feature	                            int x2 {5};	                int x2 = {5};
// Style name	                        Direct list init	        Copy list init
// Narrowing conversions allowed?	    ❌ No	                   ❌ No
// Constructors preference	            Prefers explicit	        May prefer implicit
// Subtle use in class/complex types	Yes	                        Yes

// In practice, for primitive types like int, there’s no major difference — both are safe and equivalent in C++11 and newer.

// 🧠 Key Difference (Advanced Context):
// In class initialization, the = can make a difference with explicit constructors:

// struct MyClass {
//     explicit MyClass(int) {}
// };

// MyClass a{5};    // ✅ OK: direct list init
// MyClass b = {5}; // ❌ Error: copy list init needs implicit constructor
/*----------------------------------- Note 4-----------------------------------------*/


/*----------------------------------- Note 5-----------------------------------------*/
// Summary:

// Style	        Allows narrowing	  Recommended?
// int x = 5.1;	        Yes (unsafe)	   ❌ Old-style
// int x(5.1);	        Yes	               ⚠️ Okay
// int x{5.1};	        ❌ No	          ✅ Safe
// int x = {5.1};	    ❌ No	          ✅ Safe
/*----------------------------------- Note 5-----------------------------------------*/
