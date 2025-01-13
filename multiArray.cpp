#include <iostream>
#include <string>

void fun1();
void fun2();

int main(){
    fun1();
    std::cout<<"\n";
    fun2();
    return 0;
}

void fun1(){
    int i,j;

    std::string letters[2][4]={
        {"A","B","C","D"},
        {"E","F","G","H"} 
    };

    for(i=0;i<2;i++){
        //std::cout<<"begin letters["<< i << "]" <<"["<< j << "]" <<"\n";
        
        for(j=0;j<4;j++){
            std::cout<< letters[i][j];
        }
        std::cout<<"\n";
    }
}

void fun2(){
    int i,j,k;

    std::string letters[2][2][2]={
        {
            {"A","B"},
            {"C","D"} 
        },
        {
            {"E","F"},
            {"G","H"}
        },
        
    };

    for(i=0;i<2;i++){
        //std::cout<<"begin letters["<< i << "]" <<"["<< j << "]" <<"\n";
        
        for(j=0;j<2;j++){
            
            for(k=0;k<2;k++){
                std::cout<< letters[i][j][k];
               
            }
            std::cout<<"\n";
        }
        std::cout<<"\n";
    }
}