#include<iostream>
#include<stack>
#include<queue>
#include<unordered_map>
using namespace std;
class solution {
  public:
  string firstnonrepeating(string A){
      unordered_map<char , int> count; //character ki frequency count krne ke liye
      queue<char>q;
      string ans = "";
      for(int i=0;i<A.length();i++){
          char ch = A[i]; // current character
          //increase count
          count[ch]++;
          
          //Queue me push kro
          q.push(ch);
          while(!q.empty()){
              if(count[q.front()]>1){
                  // its a repeating caharacter
                  q.pop();
              }else{
                  //non repeating character mil gaya
                  ans.push_back(q.front());
                  break;
              }
          }
          if(q.empty())
          ans.push_back('#');
          
      }
      return ans;
  }
};
