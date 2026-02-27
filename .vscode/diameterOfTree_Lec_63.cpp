#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
  int data;
  Node* left;
  Node* right;
};
class anirudh{
    private :   //encapsulation
    int height(Node* node){
        if( node ==NULL){
            return 0;
        }
        int left =height(node->left);
        int right =height(node->right);
        int ans = max(left ,right)+1;
        return ans;
    }
public:

  int diameter(Node* node){
      //base case
if(node==NULL) {
    return 0;
} 
int opt1=diameter(node->left);
int opt2=diameter(node->right);
int opt3 = height(node ->left) + height(node -> right) +1;
return max(max(opt1, opt2), opt3);
  }

};