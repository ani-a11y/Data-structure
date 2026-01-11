#include<iostream>
using namespace std;
 class node{
     public:
     int data;
     node* next;
     node(int data){
         this -> data = data;
         this -> next = NULL;
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


void InsertAttail(node* &tail , int data){
node* temp = new node(data);
tail -> next = temp;
tail = tail -> next;
tail=temp;
}
             // Approach 1
     
bool iscircular(node* head){
    if(head == NULL){
        return NULL;
    }
    node* temp = head -> next;
    while( temp != NULL && temp != head){
        temp = temp -> next;
        
    }
    if(temp == head){
        return true;
    }else{
        return false;
    }
}
          
 


void print(node* &head){
  node* temp=head; // Ek temporary pointer hai jisse list traverse hoga
  while(temp!=NULL){ // Jab tak null nahi hota list ke har value ka data print krte jana hai
    cout<<temp ->data<<" "; // Har node ka data print kro phir
    temp = temp -> next; // Next pr jao
  }
  cout<<endl;
}


int main(){
 // created a new node1 
  node* node1=new node(10); 
  node* head=node1;
  node* tail=node1;

  
  // Inserting a new node
  insertAtHead(head , 12);
  insertAtHead(head , 15);
  insertAtHead(head , 16);
  insertAtHead(head , 17);
  insertAtHead(head , 18);
  InsertAttail(tail , 80);
  InsertAttail(tail , 70);
  InsertAttail(tail , 72);

//   print(head);

  if(iscircular(head)){
      cout<<"circular"<<endl;
      
  }else{
      cout<<"non circular"<<endl;
  }
}