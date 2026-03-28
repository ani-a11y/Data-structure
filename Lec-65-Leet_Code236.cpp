
//lowest common acestor

class Solution {
  public:
    Node* lca(Node* root, int n1, int n2) {
        //  code here
        if(root == NULL){
            return NULL;
            
        }
        if(root->data == n1 || root->data ==n2){
            return root;
        }
        Node* leftans =lca(root->left , n1 , n2);
        Node* rightans =lca(root->right , n1 , n2);
        
        if(leftans && rightans){
            return root;
        }
        else if(leftans){
            return leftans;
        }
        else if( rightans){
            return rightans;
        } 
        else{
            return NULL;
        }
    }
};