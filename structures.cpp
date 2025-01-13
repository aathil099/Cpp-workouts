//a common example to represent two cars

#include <iostream>

struct car{
    std::string brand;
    int year;
    std::string color;
};

int main(){
    car myCar1;
    myCar1.brand="BWM";
    myCar1.year=1999;
    myCar1.color="Red";

    car myCar2;
    myCar2.brand="BENZ";
    myCar2.year=1922;
    myCar2.color="Yellow";

    car myCar3;
    myCar3.brand="Ferrari";
    myCar3.year=1822;
    myCar3.color="Green";
    
    car myCar4;
    myCar4.brand="Audi";
    myCar4.year=2022;
    myCar4.color="Blue";

    car myCar5;
    myCar5.brand="Lambo";
    myCar5.year=2023;
    myCar5.color="Orange";

    std::cout << myCar1.brand << " " << myCar1.year << " " << myCar1.color << "\n";
    std::cout << myCar2.brand << " " << myCar2.year << " " << myCar2.color << "\n";
    std::cout << myCar3.brand << " " << myCar3.year << " " << myCar3.color << "\n";
    std::cout << myCar4.brand << " " << myCar4.year << " " << myCar4.color << "\n";
    std::cout << myCar5.brand << " " << myCar5.year << " " << myCar5.color << "\n";
    
    return 0;
}
