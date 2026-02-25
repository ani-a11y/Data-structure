#include<iostream>
#include<queue>
#include<stack>
using namespace std;

void reverse(queue<int> &q ){
    stack<int> s;
    while(!q.empty()){
        int element = q.front();
        q.pop();
        s.push(element);
    }
    while(!s.empty()){
        int element =s.top();
        s.pop();
        q.push(element);
    }
    // return q;
}
void printQueue(queue<int> q){   // copy pass
    while(!q.empty()){
        cout<<q.front()<<" ";
        q.pop();
    }
    cout<<endl;
}

int main(){
    queue<int> q; //object declarartion
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"original queue  : "<<endl;
    printQueue(q);
    reverse(q);
    
    cout<<"reverse queue : "<<endl;
    printQueue(q);
    return 0;
}
