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


//Approach 2 - pair<int , int > ka use karenge jisse height aur diameter ek sath call hoga

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
pair<int , int> diameterFast(Node* node){
    //base case
    if(node == NULL){
  pair<int , int> p = make_pair(0 , 0);
  return p;
    }
    pair<int , int> left = diameterFast(node -> left);
    pair<int , int> right = diameterFast(node -> right);
    
    int op1 = left.first;  // first - diameter
    int op2 = right.first; 
    int op3 = left.second + right.second +1; // second - height
    
    pair<int , int> ans;
    ans.first = max(op1 , max(op2 , op3));
    ans.second =max(left.second , right.second);
    return ans;
}
  int diameter(Node* node) {
return diameterFast(node).first;
} 


};
