
                 // Factorial program by recursion


#include <iostream>
using namespace std;
int factorial(int n){
if(n==0)
return 1;
return n*factorial(n-1);
}
int main()
{
  int n;
  cout<<"enter the number :"<<endl;
  cin>>n;
  int ans=factorial(n);
  cout<<"factorial is "<<ans<<endl;

    return 0;
}



                // Reach home problem by recursion

#include<iostream>
using namespace std;
void reachHome(int src,int dest){
    cout<<"source "<< src  << "destination " <<dest<<endl;
    //base case
    if(src==dest){
        cout<<"pahuch gayya"<<endl;
        return;
        
    }
    //processing------- ek ek step badhte jao
    src++;
    //recursive call
    reachHome(src,dest);
}
    int main(){
        int dest=10;
        int src=1;
        // cout<<endl;
        reachHome(src,dest);
    }



                              // Say Digit by recursion


#include<iostream>
using namespace std;
void sayDigit(int n,string arr[]){
    if(n==0)
    return;
    int digit=n%10;
    n=n/10;
    //recursive call
    sayDigit(n,arr);
    cout<<arr[digit]<<" ";
}
    int main(){
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;
    cout<<endl;
    sayDigit(n,arr);
    cout<<endl;
    }



              // Fibonacci series by recurion


#include <iostream>
using namespace std;
int fibonacci(int n){
  if(n==0)
    return 0;
  if(n==1)
  return 1;

  return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
  int n;
  cout<<"enter the number"<<endl;
  cin>>n;
  cout<<"fibonacci series "<<endl;
  for(int i=0;i<n;i++){
    cout<<fibonacci(i)<<endl;
  }
  return 0;
}