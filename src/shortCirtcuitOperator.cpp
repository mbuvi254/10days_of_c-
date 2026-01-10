#include <iostream>
#include <string>

// C++ stops evaluating once the result is known (short-circuit evaluation)
// With &&, if the first condition is false, the second condition won't be evaluated
// With ||, if the first condition is true, the second condition won't be evaluated

int main() {
    int x = 0;  // Initialize x to 0 to demonstrate short-circuiting
    int y = 100; // y is initialized but won't be used in division if x is 0

    if (x != 0 && y / x > 2) {
        // This block will never execute because x is 0
        std::cout << "This won't be printed" << std::endl;
    } else {
        std::cout << "Short-circuiting worked! Division by zero avoided." << std::endl;
    }

    // Another example with ||
    bool isLoggedIn = true;
    bool isAdmin = false;

    // If isLoggedIn is true, isAdmin won't be checked due to short-circuiting
    if (isLoggedIn || isAdmin) {
        std::cout << "User has access" << std::endl;
    }

    return 0;
}