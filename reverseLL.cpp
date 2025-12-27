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
   
};

//FUNCTION TO ADD ELEMENT AT HEAD

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


void InsertAtPosition(node* &head , node* &tail , int position , int data){
  // Insert at head
if(position==1){
  insertAtHead(head , data);
  return;
}
node* temp = head;
int count=1;
// Traverse karte hain (position - 1) tak
while(count<position-1){
  temp=temp->next;
  count++;
}
// if position is out of range 
 if(temp == NULL) {
        cout << "Position out of bounds!" << endl;
        return;
    }
//insert at tail
if(temp -> next==NULL){
  InsertAttail(tail , data);
  return; 
}
// Naya node banao
node* nodetoInsert=new node(data);
nodetoInsert ->next = temp -> next;
temp -> next = nodetoInsert;
}



// To Print linkd list
void print(node* &head){
  node* temp=head; // Ek temporary pointer hai jisse list traverse hoga
  while(temp!=NULL){ // Jab tak null nahi hota list ke har value ka data print krte jana hai
    cout<<temp ->data<<" "; // Har node ka data print kro phir
    temp = temp -> next; // Next pr jao
  }
  cout<<endl;
}

node* reversell(node* head){
    if(head ==NULL || head->next==NULL){
        return head;
    }
    node* prev = NULL;
    node* curr = head;
    node* forward = NULL;
    while(curr!=NULL){
        forward=curr->next;
        curr->next=prev; //yaha se head wali node ab aage ko nahi ulta jaake null ko point kr rhi hai
        prev=curr;
        curr=forward;
    }
    return prev; // kyuki laas me prev wala pointer naye wale head pe rahega to us naye head ko retun return krne ke liye
}
int main(){

  // created a new node1 
  node* node1=new node(1); 
 
  node* head=node1;
   node* tail=node1;
//   print(head);
 
  // Inserting na new node
  insertAtHead(head , 12);
  insertAtHead(head , 15);
  insertAtHead(head , 16);
  insertAtHead(head , 17);
  insertAtHead(head , 18);
  print(head);
head = reversell(head);
  print(head);
  

//   cout<<"head  "<<head ->data<<endl;
//   cout<<"tail  "<<tail ->data<<endl;
 
    return 0;
}