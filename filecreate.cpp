#include <iostream>
#include <fstream>
//using namespace std;

int main(){

    std::ofstream MyFile("test.txt");

    MyFile << "creating a text file";

    MyFile.close();


    return 0;
}