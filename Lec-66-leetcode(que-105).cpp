//Construct Binary Tree from Preorder and Inorder Traversal

class Solution {
public:
int findposition(int in[] , int element , int n){
    for(int i=0;i<n;i++){
        if(in[i] == element)
            return i;
    }
    return -1;
}
 TreeNode *solve( int in[] , int pre[] , int &index , int inorderstart , int inorderend , int n){
if(index>=n || inorderstart > inorderend){
    return NULL;
}
int element = pre[index++];
 TreeNode* root = new  TreeNode(element);
 int position= findposition(in , element , n);


 //recursive call
 root->left = solve(in  , pre , index , inorderstart , position-1 , n);

 root->right = solve(in , pre , index, position+1 , inorderend , n);
 return root;
 }
    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        
    int n = preorder.size();
    int index = 0;

    TreeNode* ans = solve(inorder.data(), preorder.data(), index, 0, n-1, n);

    return ans;
    }
};