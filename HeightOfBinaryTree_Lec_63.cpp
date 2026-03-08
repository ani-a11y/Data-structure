                          // Height of binary tree
 //  Approach - 1  recursive approach
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
  int height(struct Node* node){
      if(node==NULL){
          return -1;
      }
      int left = height(node->left);
      int right =height(node ->right);
      int ans =max(left , right) +1;
      return ans;
  }
  
};

                 
// Approach - 2 iterative approach

// this code is tottaly copies by chat gpt that contains lot of doubts

#include<iostream>
#include<queue>
using namespace std;

struct Node{
    int data;
    Node* left;
    Node* right;

    Node(int val){
        data = val;
        left = NULL;
        right = NULL;
    }
};

int height(Node* root) {
    if (root == NULL)
        return -1;   // edges ke hisaab se

    queue<Node*> q;
    q.push(root);
    int height = -1;

    while (!q.empty()) {
        int size = q.size();
        height++;

        while (size--) {
            Node* temp = q.front();
            q.pop();

            if (temp->left)
                q.push(temp->left);
            if (temp->right)
                q.push(temp->right);
        }
    }

    return height;
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);

    cout << "Height (edges): " << height(root);
}
