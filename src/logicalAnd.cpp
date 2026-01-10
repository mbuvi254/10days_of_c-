#include <iostream>
#include <string>

// Returns true only if ALL conditions are true.

int age = 20;
bool canVote=true;

int main(){
    if(age>=18 && canVote){
        std::cout << age << " " << "User Can Vote" << std::endl;
    } else{
        std::cout << age << " " << "User Can't Vote" << std::endl;
    }
    
    
    return 0;
}