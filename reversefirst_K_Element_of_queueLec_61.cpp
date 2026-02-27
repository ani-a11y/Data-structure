#include<iostream>
#include<stack>
#include<queue>
using namespace std;

queue<int>modifyque(queue<int> q ,int k){
    stack<int> s;
    
    // step-1 pop first k element from Q and put it into stack
    for(int i=0;i<k;i++){
        int val=q.front();
        q.pop();
        s.push(val);
    }
    
    // step - 2 fetch val from stack and push into q
    while(!s.empty()){
        int val =s.top();
        s.pop();
        q.push(val);
    }
    //step -3 fetch first (n-k) element from q and push back
    int t=  q.size()-k;
    while(t--){
        int val = q.front();
        q.pop();
        q.push(val);
    }
    return q;
}
int main(){
    queue<int> q; //object declaration
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    int k=3;
    
    cout << "Original Queue: ";
    queue<int> temp = q;   // copy for printing
    while(!temp.empty()){
        cout << temp.front() << " ";
        temp.pop();
    }
    cout << endl;

    q = modifyque(q, k);

    cout << "Queue after reversing first " << k << " elements: ";
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }

    return 0;

}
