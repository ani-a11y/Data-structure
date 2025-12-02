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

}
// traverse out doubly linked list
void print(node* head){
    node* temp = head;
    while(temp != NULL)
    {
        cout<<temp -> data;
        temp = temp -> next;
    }
    cout<<endl;
}
int main(){
    node* node1 = new node(10);
    node* head = node1;
    print(head);



    return 0;
}