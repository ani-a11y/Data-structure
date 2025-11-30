//   #include<iostream>
//   #include<algorithm>
//   using namespace std;
//     bool isSorted(int arr[] , int size){
//         if(size==0 || size==1){
//         return true;
//         }
//         if(arr[0]>arr[1]){
//             return false;
//         }
            
                
//             bool remainingpart=isSorted(arr+1 , size-1);
//             return remainingpart;
        
//     }
//     int main(){
//         int arr[]={5,9,2,4,7,6};
//         int size=6;
//         bool ans=isSorted(arr , size);
//         if(ans){
//             cout<<"array is sorted"<<endl;
//         }else{
//             cout<<"array is not sorted"<<endl;
//         }
//     }

  #include<iostream>
  #include<algorithm>
  using namespace std;
    bool isSorted(int arr[] , int size){
        if(size==0 || size==1){
        return true;
        }
        if(arr[0]>arr[1]){
            return false;
        }
            
                
            bool remainingpart=isSorted(arr+1 , size-1);
            return remainingpart;
        
    }

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
        int arr[]={5,9,2,4,7,6};
        int size=6;
        bool ans=isSorted(arr , size);
        if(ans){
            cout<<"array is sorted"<<endl;
         }else{
            cout<<"array is not sorted"<<endl;
            selectionSort(arr , size);
            cout<<"here is your sorted array"<<endl;
            printArray(arr , size);
        }
    }


