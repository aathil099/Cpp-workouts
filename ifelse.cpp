#include <iostream>

int main(){
int time = 20;
    
    if (time < 18) {
        std::cout << "Good day.";
    } else {
        std::cout << "Good evening.";
    }
    std::cout <<"\n";
    
    int time1 = 22;
    //variable = (condition) ? expressionTrue : expressionFalse;
    std::string result = (time1 < 18) ? "Good day." : "Good evening.";
    std::cout << result;
    std::cout <<"\n";

    int myNumbers[5] = {10, 20, 30, 40, 50};
    for (int i : myNumbers) {
        std::cout << i << ",";
    }
}