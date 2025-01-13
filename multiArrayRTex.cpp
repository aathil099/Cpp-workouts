#include <iostream>
#include <string>

int main(){
    bool obj[4][4]={
        {"0","1","1","0"},
        {"0","1","0","1"},
        {"1","0","0","1"},
        {"0","1","1","0"}
    };
    //here we used "1" to point out there is a object
    int count =0; 
    int numberOfTurns = 0;

    while(count<4){
        int row,col;

        //Q1
        std::cout<< "Select coordinates"<<"\n";
        //printf("Select coordinates \n");
        std::cout<< "Choose a row number between 0 and 3: ";
        std::cin>>row;
        
        //Q2
        std::cout<< "Choose a column number between 0 and 3: ";
        std::cin>>col;

        // Check if a object exists in those coordinates
        if (obj[row][col]){
            //if an object detected, remove it
            obj[row][col]=0;
            //to increase the counts
            count++;
            std::cout<<"found!! "<<(4-count)<< " remaining.\n\n";
        }else{
            std::cout<<"not found!!" << "\n\n";
        }
        numberOfTurns++; 

    }
    std::cout<<"Kudos!!"<< "\n";
    std::cout<<"You won in "<<numberOfTurns<< " turns";
    return 0;
}