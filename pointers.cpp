#include <iostream>

int main() {
    int var = 20;   // Declare an integer variable
    int *ptr;       // Declare a pointer variable

    ptr = &var;     // Store the address of var in the pointer variable

    std::cout << "Value of var: " << var << std::endl;
    std::cout << "Address of var: " << &var << std::endl;
    std::cout << "Value stored in ptr (address of var): " << ptr << std::endl;
    std::cout << "Value pointed to by ptr: " << *ptr << std::endl;

    return 0;
}