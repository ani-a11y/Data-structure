#include<iostream>
#include <fstream>
using namespace std;
int main(){
    char arr[100];
    cout<<"Enter your name and age"<<endl;
    cin.getline(arr , 100);
    ofstream myfile("xyx.txt");
    myfile<<arr;
    myfile.close();
    cout<<"file writing operation performed successfully "<<endl;
    return 0;
}