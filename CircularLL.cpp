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

void deletenode(node* &tail , int value ){
    //Empty list
    if(tail == NULL){
        cout<<"list is empty , please check again "<<endl;
        
    }else{
        //non-empty
        //assuming that value is present in between linked List
        node* prev = tail;
        node* curr = prev ->next;
        
        while(curr -> data != value){
            prev = curr;
            curr = curr -> next;
        }
        prev -> next = curr -> next;
        // Only one node linked list
        if(curr == prev){
            tail = NULL;
        }
        // >=2 node linked list
       else  if(tail==curr){
            tail=prev;
        }
        curr -> next = NULL;
        delete curr;
    }
}

int main(){
    node* tail = NULL;
    //insertin in empty list
    iinsertnode(tail , 2 , 3);
    // iinsertnode(tail , 3 , 4);
    // iinsertnode(tail , 4 , 5);
    // iinsertnode(tail , 5 , 6);
    // iinsertnode(tail , 6 , 7);
    print(tail);
    deletenode(tail , 3);
       print(tail);
}





