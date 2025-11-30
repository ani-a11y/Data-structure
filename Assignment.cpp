
// Print the Sum of first natural number

// #include <iostream>
// #include <vector>s
// using namespace std;
// int main(){
//     int n , sum=0;
// cout<<"enter the number :"<<endl;
// cin>>n;  
//     for(int i=2;i<=n;i++){
//         sum=sum+i;
//     }
//     cout<<"the sum of first"<<n<<"natural number is :"<< sum<<endl;
//     return 0;
// }

// Print the sum of all even numbers up to n.

#include <iostream>
using namespace std; 
int main(){
      int n , sum=0;
      cout<<"enter the number "<<endl;
      cin>>n;
      for(int i=2;i<=n;i++){
        if(i%2 != 0){
            sum=sum+i;

        }
      }
      cout<<"The sum of all Evem  numbers up to "<< n <<"is :"<< sum<<endl;
      return 0;
}

