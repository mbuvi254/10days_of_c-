#include <iostream>
#include <string>

/*cin is a predefined variable that reads data from the keyboard with the extraction operator (>>).

Reads until first whitespace
| Method    | Reads spaces | Stops at      | Common use            |
| --------- | ------------ | ------------- | --------------------- |
| `cin >>`  |  No         | space/newline | usernames, numbers    |
| `getline` |  Yes        | newline       | full names, sentences |

getline(input_stream, string_variable);

cout is pronounced "see-out". Used for output, and uses the insertion operator (<<)

cin is pronounced "see-in". Used for input, and uses the extraction operator (>>)



*/
std::string username;
int age;
int main(){
    std::cout << "Enter User Username" << std::endl;
    //If you want to allow spaces in input
    std::getline(std::cin, username);
    std::cout << "Age" << std::endl;
    std::cin >> age;
    std::cout << "Username :"<< username << " " << " | Age :" << age  << std::endl;
    return 0;
}