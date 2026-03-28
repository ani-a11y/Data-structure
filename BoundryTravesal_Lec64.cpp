

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
struct Node{
    int data;
    Node* left;
    Node* right;
};
class solution{
public:

// pahle left fir leaf fir right me traversekrenge
//left travaersal
void traverseleft(Node* node , vector<int> &ans){
//base case
if((node == NULL) ||(node->left == NULL && node->right == NULL)){
    return;
}
    //pahle root print kr lenge
    ans.push_back(node->data);
    if(node->left){
        traverseleft(node->left , ans);
    }else{
        traverseleft(node->right , ans);
    }


}
//leaf traversal
void traverseleaf(Node* node , vector<int> &ans){
    //base case
    if(node == NULL){
        return;
    }
    if(node ->left == NULL && node ->right == NULL){
        ans.push_back(node ->data);
        return;
    }
    traverseleaf(node->left , ans);
    traverseleaf(node -> right , ans);
}

//right side ko traverse kro
void traverseright(Node* node , vector<int> &ans){
    //base case
    if((node == NULL) || (node->left == NULL && node->right ==NULL)){
        return;
    }
    if(node->right){
        traverseright(node->right  , ans);
    }else{
        traverseright(node->left , ans);
    }
    ans.push_back(node->data);
}
vector<int> boundry(Node* node ){
    vector<int> ans;
    if(node == NULL){
        return ans;
    }
    
    ans.push_back(node->data); // root add kiya
    //left part print krenge 
    traverseleft(node->left , ans);

    //leaf node print krenge
    //ab leaf node to root ke dondo side ho skati hai 
    
    // to left side ka leaf
     traverseleaf(node->left , ans);
    //right side ka leaf
    traverseleaf(node->right , ans);

    //right part traverse
    traverseright(node->right , ans);
    return ans;
}
};


