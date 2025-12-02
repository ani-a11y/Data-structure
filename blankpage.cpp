
// #include<iostream>
// using namespace std;
// class node{
//     public:
//     int data;
//     node* next;
// node(int data){

// this -> data = data;
// this -> next= NULL;
// }
// };
// void insertathead(node* &head , int data){
//      node*temp=new node(data);
//      temp -> next = head;
//      head = temp;
// }

// void insertattail(node* &tail , int data){
//     node*temp=new node(data);
//     tail ->next = temp;
//     tail = tail -> next;

// }

// void print(node* &head){
//     node* temp = head;
//     while(temp!=NULL){
//         cout<< temp -> data<<" "<<endl;
//         temp  = temp ->next;
//     }
//  }
//  int main(){
//     node* node1 = new node(5);
//      node* node2 = new node(6);
//     node* head=node1;
//     node* tail=node1;
   
//     print(head);
//     insertathead(head , 20);
//     insertattail(tail , 30);
//     print(head);
//  }




// // #include<iostream>
// // using namespace std;
// // int main()
// // {
// //     int numerator , denoinator , result;
// //     cout<<"Enter the numerator and denominator "<<endl;
// //     cin>>numerator>>denoinator;

// //     try{
// //         if(denoinator==0){
// //             throw denoinator;
// //         }
// //         result = numerator/denoinator;
// //     }
// //     catch(int exception){
// //         cout<<"Exception : divison by zero is not allowed "<<exception<<endl;
// //     }
// //     cout<<" divison is :"<<result<<endl;
    
// // }

// // #include<iostream>
// // #include<fstream>
// // using namespace std;
// // int main(){
// //     char arr[100];
// //     cout<<"Enter your name and age "<<endl;
// //     cin.getline(arr , 100);
// //     ofstream myfile("xyz.txt");
// //     myfile<<arr;
// //     myfile.close();
// //     cout<<"File wrinting ooperation performed succsefully"<<endl;
// //     return 0;
// // }

// // #include<iostream>
// // using namespace std;
// // int main(){
// //     int numerator , denominator , result;
// //     cout<<"Enter the value of numerator and numerator"<<endl;
// //     cin>>numerator>>denominator;
// //     try{
// //         if(denominator==0){
// //             throw denominator;

// //         }
// //         result=numerator/denominator;
// //     }
// //     catch(int ecxeption){
// //         cout<<" exception caught :"<<ecxeption<<endl;
// //     }
// //     cout<<"divison is :"<<result<<endl;
// // }



// #include<iostream>
// using namespace std;


// class node{
//     public:
//     int data;
//     node* next;
    
  
//     node(int data){
//       this->data=data; 
//       this->next=NULL;  
//     }
//     ~node(){
//       int value = this -> data;
//       if(this -> next != NULL ) {
//         delete next;
//         this -> next = NULL;
//       }
//       cout<<"Memory is free from node "<< value <<endl;
//         }
// };

//  void insertathead(node* &head , int data){
//      node*temp=new node(data);
//      temp -> next = head;
//      head = temp;
// }



void insertAtHead(node* &head , int data){
  node*temp = new node(data);
  temp -> next = head;
  head = temp;
} 
 