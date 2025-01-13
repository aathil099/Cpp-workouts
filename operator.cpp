#include <iostream>
#include <math.h>

int main() {
    std::string firstName = "John";
    std::string lastName = "Doe";
    std::string fullName = firstName.append(lastName);

    std::cout << fullName << '\n';
    std::cout << "The length of the full name string is: " << fullName.length() <<'\n';
    std::cout << "The length of the full name string is: " << fullName.size() <<'\n';   
    return 0;
}