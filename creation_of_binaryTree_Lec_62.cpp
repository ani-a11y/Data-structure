                  
                                      // TREE

// Creation of a BINARY TREE

#include<iostream>
#include<queue>
using namespace std;
class node{
    public:
   int data;
   node* right;
   node*left;
 
   node(int d){ //constructor
       this -> data =d;
       this -> right =NULL;
       this -> left =NULL;
   }
};
   node* buildtree(node* root){
       cout<<"Enter the data :"<<endl;
       int data;
       cin >>data;
       
              //tree me null wali node ko -1  se likhte hain
        if(data == -1){
            return NULL;
        }
        
       root = new node(data); // yaha constructor call ho jyega 
       

        
        cout<<"enter the data for inserting in left of "<<data<<endl;
        root -> left = buildtree(root -> left);
        
        cout<<"enter the data for inserting in right of "<<data<<endl;
        root -> right = buildtree(root -> right);
        
        return root; 
   }
void levelOrderTrversal(node* root){
    queue<node*>q; // queue me node ka address store krenge
    if(root == NULL){ // empty tree check
        return;
    }
    q.push(root); //root ko queueu me daal denge
    q.push(NULL);
    
    while(!q.empty()){
        node* temp =q.front();
        // cout <<temp -> data <<" "<<endl;
        q.pop();
        
        
        if(temp == NULL){ //mtlb ek level complete ho gya
            cout<< endl; // to new line me jyenge
            if(!q.empty()){ // agar queue me aur nodes hain
                q.push(NULL); //to next level ke liye NULL daal do
            }
        }else 
        {
            
        cout <<temp -> data <<" "<<endl; // current node print kr do
        
        // aur uske left aur right child ko queue me daal do
        if(temp -> left){ 
            q.push(temp -> left);
        }
        if(temp -> right){
            q.push(temp -> right);
        }
    }
}
}


void inorder(node* root){
 if(root==NULL){
     return;
     
 }   
 inorder(root->left);
 cout<<root->data<< " "<<endl;
 inorder(root -> right);
}

void preorder(node* root){
 if(root==NULL){
     return;
     
 }
  cout<<root->data<< " "<<endl;
 preorder(root->left);
 preorder(root -> right);
}


void postorder(node* root){
 if(root==NULL){
     return;
     
 }
 
 preorder(root->left);
 preorder(root -> right);
  cout<<root->data<< " "<<endl;
}

int main(){
     node* root = NULL;
     
    
     
     //Creating tree
     root = buildtree(root);
     
     
     // 1 3  7 -1 -1 11 -1 -1 5 17 -1 -1 -1
     //levelOrderTrversal
     
     cout<<"printing the level order traversal output :"<<endl;
    levelOrderTrversal(root);
    
    cout<<"Inoder traversal is "<<endl;
    inorder(root);
    
    cout<<"preoder traversal is "<<endl;
    preorder(root);
    
    cout<<"postorder traversal is "<<endl;
    postorder(root);
     return 0;
     
}