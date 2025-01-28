/* When you declare a variable using brace initialization, the "safe characteristics" (such as protection against narrowing conversions) 
only apply at the time of declaration/initialization. Once the variable is initialized, any subsequent assignment with = will not 
enforce those safety checks. At that point, the behavior becomes the same as if you had declared the variable using = or direct 
initialization. */

// Example to Demonstrate:

#include <iostream>
using namespace std;

int main() {
    // Brace initialization with narrowing prevention
    int x {5.5};  // Error: narrowing conversion not allowed
    int y = 5.5;  // Allowed: narrowing conversion (y becomes 5)

    int z {10};   // Brace initialization (safe at initialization)
    z = 5.5;      // No safety check: value will be truncated (z becomes 5)

    return 0;


/* Key Points:
Safety at Declaration Only:

The strict type-checking and narrowing prevention from brace initialization (int x {5.5};) are enforced only when the variable is 
declared and initialized.
After that, assigning a new value (e.g., x = value;) doesn't retain those safety features, and normal C++ assignment rules apply.
Subsequent Assignment:

After the variable is initialized, = assignment allows type conversions without restriction, including narrowing conversions.
Example:*/

    int xx {10}; // Safe initialization
    xx = 5.9;    // No safety check here, x becomes 5

/* Does It Become Equivalent to int x = 5?:

No, the initialization behavior (safety during declaration) remains different. The difference exists only at the point of 
initialization. After initialization, both brace-initialized and equals-initialized variables behave identically.
To Summarize:
Brace initialization enforces strict type-checking only at declaration.
Once the variable is initialized, subsequent assignments (via =) lose the strictness of brace initialization and follow the regular 
C++ assignment rules.
If you want the variable to maintain its "safe characteristics" throughout its lifecycle, you can use const or avoid reassigning 
values. For example: */

const int xxx {5};  // Cannot reassign, remains safe
}