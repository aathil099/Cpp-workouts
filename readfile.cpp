#include <iostream>
#include <fstream>

int main(){
    std::string myText;

    std::ifstream MyReadFile("test.txt");

    while (getline(MyReadFile, myText)){
        std::cout << myText <<"\n";
    }
    MyReadFile.close();
}
