#include<iostream>
using namespace std;
int main(){
    int numerator , denominator , result;
    cout<<"enter numerator and denominator :"<<endl;
    cin>>numerator>>denominator;
    try
    {
        if(denominator==0){
            throw denominator;
        }
        result=numerator/denominator;
    }
    catch(int exception){
        cout<<"exception : Divide by zero not allowed ."<<exception;
    }
    cout<<"division is :"<<result<<endl;
    return 0;
    
}