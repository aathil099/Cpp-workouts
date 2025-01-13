#include <iostream>

//group of constants unchageable values
enum levels{
    LOW=1,
    MEDIUM,
    HIGH
};

int main(){
    levels myLevel = HIGH;
    switch (myLevel)
    {
    case 1:
        std::cout << "The level is: " << myLevel << std::endl;
        break;
    
    case 2:
        std::cout << "The level is: " << myLevel << std::endl;
        break;

    case 3:
        std::cout << "The level is: " << myLevel << std::endl;
        break;

    default:
        break;
    }

    return 0;
}