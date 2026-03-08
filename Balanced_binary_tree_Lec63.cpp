
                      // Que - 3 check balanced binary tree
// #include<iostream>
// #include<algorithm>
// using namespace std;
// struct Node{
//     int data;
//     Node* left;
//     Node* right;
// };
// class solution{
//     private:
//     int height(Node* node){
//         if(node ==NULL){
//             return 0;
//         }
//         int left = height(node -> left);
//         int right = height(node -> right);
        
//         int ans = max(left , right);
//         return ans;
//     }
//   public:
//   bool isbalanced(Node* node){
//       if(node==NULL){
//           return true;
          
//       }
//       bool left = isbalanced(node-> left);
//       bool right = isbalanced(node-> right);
//       bool diff = abs(height(node -> left) - height(node -> right)) <=1;
      
      
//       if(left && right && diff){
//           return true;
          
//       }else{
//           return false;
//       }
//   }
// };   


// Approach - 2 pair<int int> ka use karenge jisse height aur diameter ek sath call hoga
#include<iostream>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
class solution{
    public:
    pair<bool ,  int> isBalancedfast(Node* node){
        if(node == NULL){
            pair<bool , int> p = make_pair(true , 0);
            return p;
        }
        pair<int , int> left = isBalancedfast(node ->left);
        pair<int , int> right = isBalancedfast(node -> right);
        bool leftAns = left.first; // first(bool) - subtree balanced hai ya nahi
        bool rightAns = right.first;
        bool diff = abs(left.second - right.second) <=1; // second(int) - subtree ki height
        pair<bool , int> ans;
        ans.second = max(left.second , right.second)+1;
        if(leftAns && rightAns && diff){
            ans.first = true;
        }else{
            ans.first = false;
        }
        return ans;
    }
    bool isbalanced(Node* node){
        return isBalancedfast(node).first;
    }
};