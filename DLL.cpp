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
    
    ~node() {
        int val=this -> data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"memory is free from the node with data "<<val<<endl;
        
    
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
void insertathead(node* &head  , int data){
     if(head == NULL){
        node* temp = new node(data);
        head = temp;
        return;
    }
    node* temp = new node(data);
    temp->next=head;
    head->prev=temp;
    head = temp;
}

                   //INSERT AT TAIL
void insertattail(node* &tail , int data){
    if(tail == NULL){
        node* temp = new node(data);
        tail = temp;
        return;
    }
    node*temp = new node(data);
    temp -> prev = tail;
    tail -> next = temp;
    tail=temp;
}

                       //INSERT AT POSITION

void insertatposition(node* &head , node* &tail ,int position ,  int data){
    // maan lo hume first postion hi mil jaye insert karne ko
    if(position==1){
        insertathead(head , data);
        return;
    }
    // for travesring
    node* temp=head;
    int cnt=1;
    while(cnt<position-1){
        temp= temp->next;
        cnt++;
}
                  //inserting at last postion
if(temp->next==NULL){
    insertattail(tail , data);
    return;
}
//creadting node for data to insert at any specific position
node*nodetoinsert = new node(data);
nodetoinsert->next=temp->next;
temp->next->prev=nodetoinsert;
temp->next = nodetoinsert;
nodetoinsert->prev=temp;
}

                // Deletion in DLL

void Deletenode(int position , node* &head){
    if(position==1){
        node*temp = head;
        temp ->next->prev=NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }else{
        //deleting any middle or ast node
       
    node* curr = head;
    node* prev = NULL;
    int cnt=1;
    while (cnt < position)
    {
      prev = curr; // yaha hum pahli node jispe current pahle se hai uspe prev ko print karwa rhe hain ye 1st step hai
      curr = curr -> next;// ye 2nd step hai jisme hum current ko aage badha rhe hain
      cnt++;
    }
  curr -> prev =NULL;
  prev -> next = curr -> next;
  curr -> next = NULL;
  delete curr;
 
    }
}
// Main program

int main(){
    node* node1 = new node(10);
    node* head = node1;
    node* tail = node1;
    // cout<<length(head)<<endl;
insertathead(head , 11);
insertathead(head , 15);
insertathead(head , 16);
insertathead(head , 17);
insertathead(head , 18);
insertattail( tail , 20);
insertatposition(head , tail , 2 , 100); //inserting at a position
insertatposition(head , tail , 1 , 101);//inserting at head
insertatposition(head , tail , 9 , 100);//inserting at tail

Deletenode(1 , head);
Deletenode(4 , head);
Deletenode(7 , head);
print(head);
cout<<"head  "<<head ->data<<endl;
cout<<"tail  "<<tail ->data<<endl;

    return 0;
}
