#include <iostream>
#include <string>

/*
| Operator | Meaning           | Example | Equivalent to |
| -------- | ----------------- | ------- | ------------- |
| `=`      | Assign            | x = y   | x = y         |
| `+=`     | Add & assign      | x += y  | x = x + y     |
| `-=`     | Subtract & assign | x -= y  | x = x - y     |
| `*=`     | Multiply & assign | x *= y  | x = x * y     |
| `/=`     | Divide & assign   | x /= y  | x = x / y     |
| `%=`     | Modulus & assign  | x %= y  | x = x % y     |
*/

int main() {
    int x, y;
    
    // Basic assignment
    x = 10;
    std::cout << "After x = 10, x = " << x << std::endl;
    
    // Add and assign
    x += 5;  // x = x + 5
    std::cout << "After x += 5, x = " << x << std::endl;
    
    // Subtract and assign
    x -= 3;  // x = x - 3
    std::cout << "After x -= 3, x = " << x << std::endl;
    
    // Multiply and assign
    x *= 2;  // x = x * 2
    std::cout << "After x *= 2, x = " << x << std::endl;
    
    // Divide and assign
    x /= 4;  // x = x / 4
    std::cout << "After x /= 4, x = " << x << std::endl;
    
    // Modulus and assign
    y = 7;
    y %= 3;  // y = y % 3
    std::cout << "After y %= 3, y = " << y << std::endl;
    
    // Chaining assignment operators
    int a, b, c;
    a = b = c = 10;  // All variables get the value 10
    std::cout << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    
    return 0;
}