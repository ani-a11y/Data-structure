#include<iostream>
using namespace std;

void bubblesort (int arr[] , int size){
    for(int i=0;i<size;i++){
        for(int j=0;j<size-1;j++){
            if(arr[j]>arr[j+1]){
                swap(arr[j] , arr[j+1]);
            }
        }
    }
}

void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
    
}
int main(){
    int arr[]={5,7,3,9,1,6};
    int size=6;
    bubblesort(arr , size);
  
    cout<<"sorted array :"<<endl;
    printArray(arr , size);
}



