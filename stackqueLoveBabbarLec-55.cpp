   

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