#include <iostream>

int main(){
    int sort_array[] = {5, 27, 1, 9, 12, 17, 3, 6, 11, 4}; // 4 bytes
    int i, j;    

    std::cout << "intial array:" << '\n';

    for(i=0;i< sizeof(sort_array) / sizeof(sort_array[0]);i++){
        std::cout <<"[" <<sort_array[i] <<"]";
    }
    std::cout <<"\n";
    int low_index,temp;

    for(i=0;i< sizeof(sort_array) / sizeof(sort_array[0]);i++){
        low_index = i;
        
        for(j=i+1;j< sizeof(sort_array) / sizeof(sort_array[0]);j++){
     
            if(sort_array[j]<sort_array[low_index]){
                low_index=j;
            }

        }
        temp=sort_array[low_index];
        sort_array[low_index]=sort_array[i];
        sort_array[i]=temp;
        
    }
    // Final sorted array
    std::cout <<"Sorted array:" << "\n";
   
    for (i = 0; i< sizeof(sort_array) / sizeof(sort_array[0]); i++) {
        std::cout <<"[" <<sort_array[i] <<"]";
    }
    std::cout <<"\n";
    return 0;
}