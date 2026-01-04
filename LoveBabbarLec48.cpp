
#include<iostream>
using namespace std;

// making a class thats define the structure of node
class node{
    public:
    int data;
    node* next;
    
  //lets make a constructor jisse jab naya node bane to wo initialize ho jaye
    node(int data){
      this->data=data; // to store data
      this->next=NULL; // pointer variable to store the address of next variable 
    }
    ~node(){
      int value = this -> data;
      if(this -> next != NULL ) {
        delete next;
        this -> next = NULL;
      }
      cout<<"Memory is free for node with data "<< value <<endl;
        }
};
void insertAtHead(node* &head , int data){
  //new node create
  node*temp=new node(data);
  // ab jo naya node ka next hoga wo purane head koi point krega
  temp -> next=head;
  // ab head ko naye node par shift kr dete hain 
  head=temp;
}


// ADD ELEMENT AT TAIL

void InsertAttail(node* &tail , int data){
node* temp = new node(data);
tail -> next = temp;
tail = tail -> next;
tail=temp;
} 

void print(node* &head){
  node* temp=head; // Ek temporary pointer hai jisse list traverse hoga
  while(temp!=NULL){ // Jab tak null nahi hota list ke har value ka data print krte jana hai
    cout<<temp ->data<<" "; // Har node ka data print kro phir
    temp = temp -> next; // Next pr jao
  }
  cout<<endl;
}


node* uniqueSortedList(node* head){
    //empty list
    if(head == NULL){
        return NULL;
    }
    //non empty list
    node* curr = head;
    while(curr != NULL){
        if((curr -> next != NULL) && curr -> data == curr -> next -> data){
            node* next_next =curr -> next -> next;
            node*nodetodelete = curr ->next;
            delete(nodetodelete);
        }else{
            curr = curr -> next;
        }
    }
    return head;
}


node* uniqueUnSortedList( node* head){

    if(head ==NULL){
        return NULL;
    }
    node* curr = head;
    while( curr != NULL){
        node* prev = curr;
        node* temp = curr -> next;
        
       while(temp != NULL){
           if( temp->data == curr-> data){
               node*nodetodelete = temp;
               prev ->next = temp -> next;
               temp = temp->next ;
               nodetodelete -> next = NULL;
               delete nodetodelete;
           } else{
               prev = temp;
               temp = temp -> next;
           }
       }
       curr = curr -> next;
    }
    return head;
}
int main(){

  // created a new node1 
  node* node1=new node(10); 
 
  node* head=node1;
   node* tail=node1;
  print(head);
 
  // Inserting na new node
  insertAtHead(head , 12);
  insertAtHead(head , 15);
  insertAtHead(head , 16);
  insertAtHead(head , 17);
  insertAtHead(head , 18);
   insertAtHead(head , 18);
    insertAtHead(head , 12);
  InsertAttail(tail , 80);
  InsertAttail(tail , 70);
  InsertAttail(tail , 72);
//   InsertAtPosition(head , tail , 2 , 25);
//   InsertAtPosition(head , tail , 1 , 26);


//   cout<<"head  "<<head ->data<<endl;
//   cout<<"tail  "<<tail ->data<<endl;
uniqueUnSortedList(head);
print(head);
}