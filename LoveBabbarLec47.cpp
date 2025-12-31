//Detect cycle is present or not on in the linked list

#include<iostream>
#include <map>
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

bool detect(node* head){

    if(head == NULL)
    return false;
    map<node* , bool> visited;
    node* temp = head;
    while(temp != NULL){
        //iss loop ka mtlb hai ki cycle present hai 
        if(visited[temp] != true) {
            cout<<"present on element "<< temp -> data<<endl;
        return true;
        }
        // Agar cycle present nahi hai
        visited[temp] = true;
        temp = temp -> next;
    }
    return false;
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


tail ->next = head -> next;



if(detect(head)){
    cout<<"cycle is present"<<endl;
}
else{
    cout<<"cycle is not presnet"<<endl;
}
// print(head);
cout<< "head "<<head -> data <<endl;
cout<< "tail "<<tail -> data <<endl;
 return 0;
}