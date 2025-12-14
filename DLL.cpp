#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* prev;
    node* next;

    //constructor
    node(int data){
        this -> data = data;
        this -> prev = NULL;
        this -> next = NULL;
    }

};  
// traverse out doubly linked list
void print(node* head){
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data<< "  ";
        temp = temp -> next;
    }
    cout<<endl;
}


 int length(node* head){
    int len=0;
    node* temp = head;
    while(temp != NULL)
    {
        len++;
        temp = temp -> next;
    }
   return len;
}


//INSERT AT HEAD
void insertathead(node* &head , int data){
    node* temp = new node(data);
    temp->next=head;
    head->prev=temp;
    head = temp;
}

//INSERT AT TAIL
void insertattail(node* &tail , int data){
    node* temp = new node(data);
     temp -> prev =  tail;
    tail -> next = temp;
  
}

int main(){
    node* node1 = new node(10);
    node* head = node1;
    print(head);
    cout<<length(head)<<endl;
    insertathead(head , 11);
    print(head);


    return 0;
}