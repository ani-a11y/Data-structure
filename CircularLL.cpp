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
int main(){
    
}