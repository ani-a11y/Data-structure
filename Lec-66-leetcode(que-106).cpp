//. Construct Binary Tree from Inorder and Postorder Traversal

class Solution {
public:
int findposition(int in[] , int element , int n){
    for(int i=0;i<n;i++){
        if(in[i] == element)
            return i;
    }
    return -1;
}
 TreeNode *solve( int in[] , int post[] , int &index , int inorderstart , int inorderend , int n){
if(index<0 || inorderstart > inorderend){
    return NULL;
}
int element = post[index--];
 TreeNode* root = new  TreeNode(element);
 int position= findposition(in , element , n);


 //recursive call
 root->right = solve(in , post , index, position+1 , inorderend , n);

 root->left = solve(in  , post , index , inorderstart , position-1 , n);

 return root;
 }
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        
        
    int n = postorder.size();
    int postorderindex = n-1;

  TreeNode* ans = solve(inorder.data(), postorder.data(), postorderindex, 0, n-1, n);

    return ans;
    }
};