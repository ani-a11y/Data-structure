
                     // K Sum Paths
class Solution { 
  public:
  void solve(Node* root , int k , int &count , vector<int> &path){
      if(root==NULL){
          return ;
      }
      path.push_back(root->data);
      
      
      //left
      solve(root->left , k , count, path);
      //right
            solve(root->right , k , count, path);
            
            //check for k sum
         
            int sum = 0;
            for(int i= path.size()-1; i>=0;i--){
                sum += path[i];
                
            
            if(sum ==k){
                count++;
            }
            
            }
            path.pop_back();
            
  }
    int countAllPaths(Node *root, int k) {
        // code here
        vector<int> path;
        int count =0;
        solve(root , k , count  , path);
        return count;
    }
};
