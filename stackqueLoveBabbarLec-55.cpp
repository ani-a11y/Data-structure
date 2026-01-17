   
          // Que - 1 - REVERSE STRING USING  A STACK


#include<iostream>
#include<stack>
using namespace std;
int main(){
    string str = "love";
    stack<char>s;
    for(int i = 0; i<str.length();i++){
        char ch = str[i];
        s.push(ch);
    }
    string ans =" ";
    while(!s.empty()){
        char ch = s.top();
        ans.push_back(ch);
        s.pop();
    }
    cout<<"answer is "<<ans<<endl;
}


      // REVERSE INTEGER ARRAY  USING STACK
           
           
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main(){
    int arr[] = {1,2,3,4};
    int n = 4;

    stack<int> s;

    for(int i = 0; i < n; i++){
        s.push(arr[i]);
    }

    vector<int> ans;

    while(!s.empty()){
        ans.push_back(s.top());
        s.pop();
    }

    for(int x : ans){
        cout << x << " ";
    }
}


              // Que - 2 - DELETE OF MODDLE ELEMENT OF STACK
#include<iostream>
#include<stack>
using namespace std;
class stac {
    public:
void middle(stack<int> s , int count , int size){
    if(count == size/2){
        s.pop();
        return ;
    }
    int num = s.top();
    s.pop();
    //recursive call
    middle(s , count+1 , size);
    
    s.push(num);
}
};
int main(){
  stac obj;
    stack<int> s;
    s.push(5);
    s.push(15);
    s.push(20);
    s.push(25);
    s.push(30);
    
cout<<"stack before deleting the middle element : \n" <<endl;
while(!s.empty()){
    cout<<s.top()<<endl;
    s.pop();
}
     
     
}

             // Que - 3 - CHECK VALID PARANTHESIS

#include <iostream>
using namespace std;
class stack {
    public:
    bool validparanthesis(string expresession){
        stack<char> s;
        for(int i=0; i<expresession.length(); i++){
   char ch = expresession[i];
   // agar opening bracket  to stack me daal denge
   // agar closing bracket hai to stack ke top se check krenge aur poop operation krenge
   if(ch=='(' || ch=='{' || ch=='['){
    s.push(ch);
   }else{
    // wo closing bracket hoga to hum use stack ke top se match krenge ki uska hi opening bracket hai ki nahi

    //pahle ek baar empty stack wali condition check kr lenge ki kahi stack empty toh nahi hai
    if(s.empty()){
        char top = s.top();
        if(ch==')' && top =='(') ||
        (ch=='}' && top =='{') ||
        (ch==']' && top =='[')
        {
            s.pop();
        }else{
            //for closingbracket
            return false;
        }
    }else{
        return false;
    }
   }
        }
        if(s.empty())
        return true;
        else
        return false;
    }
};


 // Que - 4 - INSERT ELEMENT AT THE BOTTOM OF THE STACK
                    

#include <iostream>
#include <stack>
using namespace std;
class dekho{
    public:
void solve(stack<int> &s, int x) {
    if (s.empty()) {
        s.push(x);
        return;
    }

    int num = s.top();
    s.pop();

    solve(s, x);

    s.push(num);
}
};
int main() {
    stack<int> s;

    // stack me elements daal rahe hain
    s.push(10);
    s.push(20);
    s.push(30);

    int x = 40; // ye wo element jo hume stack ke bottom me dalna hai
    dekho obj;
    obj.solve(s, x); // is fucnction ki help se stack ke bottom me element dalenge

    // check karne ke liye stack print karo
    cout << "Stack elements (top to bottom): " << endl;
    while (!s.empty()) {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}



                  //  Que - 5 - REVERSE A STACK

#include<iostream>
#include<stack>
using namespace std;

void insertatbottom(stack<int> &s , int x){
    if(s.empty()){
        s.push(x);
        return ;
    }
    int num = s.top();
    s.pop();
    //recursive call
    insertatbottom( s , x);
    s.push(num);
}
void reversestack(stack<int> &s ){
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    // now recusrsive call
    reversestack(s);
    insertatbottom( s , num);
}

 int main(){
     stack<int> s;
     s.push(5);
     s.push(10);
     s.push(15);
     s.push(20);
     cout<<"before reverse"<<endl;
     stack<int> temp = s;
     while(!temp.empty()){
         cout<<temp.top()<<" "<<endl;
         temp.pop();
     }
     cout<<"after reverse"<<endl;
    
     reversestack(s);
    //  cout<<" after reverse "<<endl;
     while(!s.empty()){
         cout<<s.top()<<endl;
         s.pop();
     }
     return 0;
 }


                        // Que - 6 - SORT A STACK

                        
#include<iostream> 
#include<stack>
using namespace std;

    void sortedinsert(stack<int> &s , int x){
      if(s.empty() || (!s.empty() && s.top()<x)){
      s.push(x);
      return;
  }          
  int num = s.top();
  s.pop();
  sortedinsert(s , x );
    s.push(num);
  }
void sortedstack(stack<int> &s){
    //base case
    if(s.empty()){
        return;
    }
    int num = s.top();
    s.pop();
    //recusrsive call
    sortedstack(s);
    sortedinsert(s , num);
   
    
}
 int main(){
     stack<int > s;
     s.push(20);
     s.push(1);
     s.push(5);
     s.push(3);
     cout<<"before sorting"<<endl;
     stack<int > temp = s;
     while(!temp.empty()){
         cout<<temp.top()<<endl;
         temp.pop();
     }
     sortedstack(s);
     cout<<"after sorting"<<endl;
     while(!s.empty()){
         cout<<s.top()<<endl;
         s.pop();
     }
     
 }


                   //  Que - 7 - REDUNDANT BRACKET

#include<iostream>
#include<stack>
using namespace std;
class stac{
  public:
  bool findredundantbracket(string &s){
      stack<char> st;
      for(int i=0; i<s.length() ; i++){
          char ch = s[i];
          if(ch == '(' || ch=='+' || ch=='-' || ch == '*' || ch == '/'){
              st.push(ch);
          } else {
              // character ya to koi closing bracket')' hai ya koi lower case character
              if(ch==')'){
                  bool isredundant = true;
                  while(st.top() != '('){ // while case me hai ki tab tak pop kro jab tak koi opening bracket na mil jaye
                      char top = st.top();
                      if( top =='+' || top =='-' || top == '*' || top == '/'){ // agar opening bracket milne se pahle koi operator mil gaya to 
                          isredundant = false; // redundant hoga hi nahi
                      }
                      st.pop();
                  }
                  st.pop();
                  if(isredundant == true)
                  return true;
              }
          }
      }
      return false;
  }
};


