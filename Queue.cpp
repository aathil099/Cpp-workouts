#include <iostream>

struct node{
    int x;
    int y;
    struct node* next;    
};

struct node* create_node(int xx, int yy);       //function protypes
void addQ(int x, int y);                         //function protypes
void print_Queue();                              //function protypes
void removeQ();                                  //function protypes

struct node* top=NULL;                           //global pointer set as NULL

int main(){
    addQ(1,2);
    addQ(3,4);
    addQ(5,6);
    addQ(7,8);
    addQ(9,10);

    print_Queue();
    removeQ();
    removeQ();
    removeQ();
    

    std::cout<<"**************\n";
    std::cout<<"After removing\n";
    std::cout<<"**************\n";

    print_Queue();
    std::cout<<"\n";

    return 0;
}

struct node* create_node(int xx, int yy){
    struct node* tmp;
    tmp=(struct node*)malloc(sizeof(struct node));
    tmp->next=NULL;
    tmp->x=xx;
    tmp->y=yy;
    return(tmp);
}

void addQ(int x, int y){
    if(top==NULL){
        top=create_node(x,y);
    }else{
        struct node* ptr;
        for(ptr=top; ptr->next !=NULL; ptr=ptr->next);
        ptr->next=create_node(x,y);
    }
}

void removeQ(){
    if(top==NULL){
        std::cout<<"Queue is empty, nothing to remove\n";
        return;
    }
    struct node* temp =top;
    top=top->next;
    free(temp);
}

void print_Queue(){
    struct node* tmp;
    for(tmp=top; tmp != NULL; tmp=tmp->next){
        std::cout<<"_____________\n";
        std::cout<<"|x="<< tmp->x <<"| |y="<< tmp->y << "|\n";
        std::cout<<"_____________\n";
    }
}