
                      // Que - 3 check balanced binary tree
#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
class solution{
    private:
    int height(Node* node){
        if(node ==NULL){
            return 0;
        }
        int left = height(node -> left);
        int right = height(node -> right);
        
        int ans = max(left , right);
        return ans;
    }
  public:
  bool isbalanced(Node* node){
      if(node==NULL){
          return true;
          
      }
      bool left = isbalanced(node-> left);
      bool right = isbalanced(node-> right);
      bool diff = abs(height(node -> left) - height(node -> right)) <=1;
      
      
      if(left && right && diff){
          return true;
          
      }else{
          return false;
      }
  }
};   