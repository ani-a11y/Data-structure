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

//FUNCTION TO ADD ELEMENT AT HEAD

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




//  FUCTION TO ADD ELEMENT AT MIDDLE

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

void deletenode(int position , node* &head){
  //deleting first or start node
  if(position==1){
    node* temp = head;
    head = head -> next;
    //memory free  krte hain 
    temp -> next = NULL;
    delete temp; 

  } else{
    //deletion any middle or last node
    node* curr = head;
    node* prev = NULL;
    int cnt=1;
    while (cnt < position)
    {
      prev = curr; // yaha hum pahli node jispe current pahle se hai uspe prev ko print karwa rhe hain ye 1st step hai
      curr = curr -> next;// ye 2nd step hai jisme hum current ko aage badha rhe hain
      cnt++;
    }
    prev -> next = curr -> next;
    curr ->next=NULL;
    delete curr;
  }
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
  InsertAttail(tail , 80);
  InsertAttail(tail , 70);
  InsertAttail(tail , 72);
  InsertAtPosition(head , tail , 2 , 25);
  InsertAtPosition(head , tail , 1 , 26);


  cout<<"head  "<<head ->data<<endl;
  cout<<"tail  "<<tail ->data<<endl;
  
  deletenode(2 , head);
    deletenode(3 , head);
      deletenode(4 , head);
        deletenode(5 , head);
print(head);
  print(head); // Insert krne ke baad dobara update krke print krenge
    cout<<"head  "<<head ->data<<endl;
  cout<<"tail  "<<tail ->data<<endl;


   deletenode(7 , head);
   print(head);

   deletenode(3 , head);
   print(head);
  //    cout<<"head  "<<head ->data<<endl;
  // cout<<"tail  "<<tail ->data<<endl;
    return 0;
}