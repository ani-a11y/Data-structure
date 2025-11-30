#include<iostream>
using namespace std;
void insertionsort(int arr[] , int size){
    for(int i=1;i<size;i++){
        int temp=arr[i];
        int j=i-1;
        for(;j>=0;j--){
           if(arr[j]>temp){
            arr[j+1]=arr[j];

           }
           else{
            break;
           }
        }
        arr[j+1]=temp;
    }
}
void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
        // return 0;
    }
    // return 0;
}
int main(){
    int arr[]={20,18,25,67,89,32};
    int size=6;
    printArray(arr , size);
    insertionsort(arr , size);
    cout<<"here is your sorted array"<<endl;
    printArray(arr , size);
    // return 0;
}