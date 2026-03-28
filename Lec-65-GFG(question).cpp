                      // sum of longest bloodline

class solution{
    public:
void solve(Node* root , int sum , int &maxsum , int len , int &maxlen){
    if( root == NULL){
        if(len>maxlen){
            maxlen = len;
            maxsum = sum;
            
        }
        else if(len == maxlen){
            maxsum = max(sum , maxsum);
        }
        return;
    }
    
    sum = sum+root->data;
    len++;
    solve(root->left , sum , maxsum , len , maxlen);
    solve(root->right , sum , maxsum , len , maxlen);
}
int sumoflongrootToLeafPath(Node* root){
    int len = 0;
    int maxlen = 0;
    int sum = 0;
    int maxsum =0;
    solve(root , sum , maxsum , len , maxlen);
    return maxsum; 
}
};
