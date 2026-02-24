

// Que - 1 - find next smaller

void findsmaller(vector<int> &arr){
 stack<int> &st;
 st.push(-1);
 vector <int> ans(n);
 for(int i = n-1 ; i>=0 ; i--)  {
    int curr = arr[i];
    while(s.top() >= curr){
        st.pop();
    }
    ans[i]=st.top();
    st.push(curr);
 } 
 return ans;
}