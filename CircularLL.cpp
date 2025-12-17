#include<iostream>
using namespace std;
class node{
    public:
    int data;
    node* next;
    
  //constructor
  node(int data){
      this -> data = data;
      this -> next = NULL;
  }
  ~node(){
      int value = this ->data;
      if(this -> next!=NULL){
          delete next;
          next = NULL;
      }
      cout<<"memory is free fro node with data "<<value<<endl;
  }
};
void iinsertnode(node* &tail , int element , int data){
    //Assumin that the list is empty(Empty list)
    if(tail==NULL){
        node*newnode=new node(data);
        tail = newnode;
        newnode -> next = newnode;
    }else{
        // non-empty list
        node* curr = tail;
        while(curr -> data != element) {
            curr = curr -> next;
    }
    //mtlb ab element mil chuka hai aur current usi ke ooper hai usi ko point kr rha hai
    node* temp = new node(data);
    temp -> next = curr -> next;
    curr -> next = temp;
}
}
void print(node* tail){
     if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }

    node* temp = tail;

    do{
        cout << temp->data << " ";
        temp = temp->next;
    }while(temp != tail);

    cout << endl;
}

int main(){
    node* tail = NULL;
    //insertin in empty list
    iinsertnode(tail , 2 , 3);
    iinsertnode(tail , 3 , 4);
    iinsertnode(tail , 3 , 5);
    iinsertnode(tail , 4 , 6);
    iinsertnode(tail , 5 , 7);
    print(tail);
}
