 #include<iostream>
 using namespace std;
void selectionSort(int arr[] , int size){

 for(int i=0;i<size-1;i++){
    int min_idx=i;
    for(int j=i+1;j<size;j++){
        if(arr[j]<arr[min_idx]){
            min_idx=j;
        }
        swap(arr[min_idx] , arr[i]);
    }
 }

} 
void printArray(int arr[] , int size){
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }
}
int main(){
    int arr[]={23,4,21,27,29,18};
    int size=6;
    cout<<"this is your original array :"<<endl;
    printArray(arr , size);
    selectionSort(arr , size);
    cout<<"here is your sorted array :"<<endl;
    printArray(arr , size);
}