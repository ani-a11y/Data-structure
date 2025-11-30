                          // QUE-1 COUNTONG OF 0'S AND 1's


#include<iostream>
using namespace std;
int main(){
int arr[]={0,0,0,1,1,0,0,1,0,1,0,0,0,1};
int size=15;
int numZero=0;
int numOne=0;
for(int i=0;i<size;i++){
    if(arr[i]==0){
        numZero++;
        
    }
    if(arr[i]==1){
        numOne++;
    }
    
}
cout<<"number of zero :"<<numZero<<endl;
cout<<"number of ones :"<<numOne<<endl;

}

 
                        //QUE-2 PRINT DOUBLE OF ELEMENT OF ARRAYS BY TAKING INPUT
                        

#include<iostream>
using namespace std;
int main() {
    int arr[50];
    int n;
    cout<<"how many numbers you want to add :"<<endl;
    cin>>n;
    cout<<"enter elements :"<<endl;
    
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<"doubles :"<<endl;
    for(int i=0;i<n;i++){
        cout<<2*arr[i]<<endl;
    }
    return 0;
}



                       //QUE-3 PRINT THE MAX NO. OF ARRAY 
//  (Jab max number prit karwana ho to INT_MIN use krenge ,aur jan min number of array find krna ho to INT_MAX use krenge)
//int min aur max ke liye ek special hearder file hoti hai include<limits.h>


#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[]={2,5,4,67,89,90,7,8,45,67,98,45,99,100};
    int size=14;
    int max=INT_MIN;
    for(int i=0;i<size;i++){
        if(arr[i]>max){
            max=arr[i];
            
        }
    }
    cout<<"the max no. of array : "<< max << endl;
}




                         //QUE-4 PRINT THE EXTREMES OF THE array
                         
    
#include<iostream>
using namespace std;
int main()
{
    int arr[]={10,20,30,40,50,60,70,80,90};
    int size=9;
    int start=0;
    int end=size-1;
    while(true){
        if(start>end)
            break;
            cout<<arr[start]<<"    "<<arr[end]<<endl;
            
            start++;
            end--;
        
    }
    return 0;
    
}


                    //QUE-5 REVERSE OF AN ARRAY
   
   
#include<iostream>
using namespace std;
int main(){
     int arr[]={10,20,30,40,50,60,70,80,90};
  int size=9;
  int start=0;
     int end=size-1;
     while(start<=end){
         swap(arr[start],arr[end]);
         start++;
         end--;
         
     }
     for(int i=0;i<size;i++){
         cout<<arr[i]<<endl;
         
     }
     return 0;
}
                 
                    //QUE-6  PRINT THE UNIQUE ELEMENT OF VECTOR ARRAY


#include<iostream>
#include<vector>
using namespace std;
int findUnique(vector<int>arr){
    int ans=0;
    for(int i=0;i<arr.size();i++){
        ans=ans^arr[i];
    }
    return ans;
}
int main(){
    int n;
    cout<<"enter the no.of element :"<<endl;
    cin>>n;
    vector<int>arr(n);
    cout<<"enter the element :"<<endl;
    for(int i=0;i<arr.size();i++){
        cin>>arr[i];
    }
    int uniqueElement=findUnique(arr);
    cout<<"here is your element :"<<uniqueElement<<endl;
}



                        // QUE-7 UNION OF 2 ARRAYS
                        
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={1,3,5,7,9};
    int sizea=5;
    int brr[]={2,4,6,8};
    int sizeb=4;
    vector<int>ans;
    for(int i=0;i<sizea;i++){
        ans.push_back(arr[i]);
        
    }
     for(int i=0;i<sizeb;i++){
        ans.push_back(brr[i]);
     }
     cout<<"printing the union of 2 array :"<<endl;
     for(int i=0;i<ans.size();i++){
     cout<<ans[i]<< " "<<endl;
}
} 




                     // QUE-8 INTERSECTION OF 2 ARRAYS
            

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>arr{1,2,3,7,8,5};
    vector<int>brr{2,3,9,0,1};
    vector<int>ans;
    for(int i=0;i<arr.size();i++){
        int element=arr[i];
        //for every element run loop on brr
        for(int j=0;j<brr.size();j++){
            if(element==brr[j]){
                ans.push_back(element);
            }
        }
    }
    //print ans
    for(auto value:ans) {
        cout<<value<<" ";
        
    }
    cout<<endl;
    return 0;
}


  
                    // QUE-9 PAIR SUM 
                    

#include<iostream>
#include<vector>
using namespace std;
int main(){
        vector<int>arr{10,20,30,40,50,60,70};
        int sum=90;
        for(int i=0;i<arr.size();i++) {
            // cout<<"We are  at element :"<<arr[i]<<endl;
            int element1=arr[i];
            for(int j=i+1;j<arr.size();j++){
                int element2=arr[j];
                if(element1+element2==sum){
                cout<<"("<<element1<<","<< element2<<")"<<endl;
            }
        }
}
}

 
 
  
                       // QUE-10 TRIPLET PAIR OF SUM 
                       
                
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int sum=90;
    vector<int>arr{10,20,30,40,50,60,70};
    for(int i=0;i<arr.size();i++){
        int element1=arr[i];
        for(int j=i+1;j<arr.size();j++){
            int element2=arr[j];
            for(int k=j+1;k<arr.size();k++){
                int element3=arr[k];
                if(element3+element2+element1==sum){
                    cout<<element1<<","<<element2<<","<<element3<<endl;
                }
            }
        }
         
    }
   
}

          
          
                       // QUE-11 TRIPLET PAIR OF SUM BY TAKING USER INPUT
                       
// #include<iostream>
// #include<vector>
// using namespace std;
// int main()
// {
//     int n;
//     int sum;
//     sum=90;
//     cout<<"enter the no.of element :\n"<<endl;
//     cin>>n;
//     vector<int>arr(n);
//     cout<<"enter the elements"<<endl;
//     for(int i=0;i<n;i++){
//         cin>>arr[i];
//     }
//     for(int i=0;i<arr.size();i++){
//         int element1=arr[i];
//         for(int j=i+1;j<arr.size();j++){
//             int element2=arr[j];
//             for(int k=j+1;k<arr.size();k++){
//                 int element3=arr[k];
//                 if(element1+element2+element3==sum){
//                     cout<<element1<<","<<element2<<","<<element3<<endl;
//                 }
//             }
//         }
//     }
// }



             // QUE-12 SORT 0'S AND 1'S 
             
// #include<iostream>
// #include<vector>
// using namespace std;
// int main() {

// }
//          PENDING QUESTION
         
         
         

                      // TOPIC-2(D) ARRAY 
                //EXAMPLE-1
                
// #include<iostream>
// // #include<vector>
// using namespace std;
// int main() {
// int arr[3][3];
// cout<<"enter the 9 element for 3*3 matrix :"<<endl;
// for(int i=0;i<3;i++){
//     for(int j=0;j<3;j++){
//         cin>>arr[i][j];
//     }
// }
// cout<<"here is your accessing element :\n"<<arr[2][3]<<endl;
// }
     
     
                  //EXAMPLE-2
   
   
// #include<iostream>
// #include<vector>
// using namespace std;
// int main(){
    
//     int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
//     for(int i=0;i<3;i++){
//         for(int j=0;j<3;j++){
//             cout<<arr[i][j]<<""<<endl;
//         }
//         cout<<endl;
//     }
    
// }


               // TOPIC-(BINARY SEARCH)
               // QUE-13 FIND TARGET ELEMENT IN BINARY SEARCH
        
#include<iostream>
using namespace std; 
int binarySearch(int arr[],int size,int target){   
    int start=0;
    int end=size-1;
    int mid=(start+end)/2;
    while(start<=end){
        int element=arr[mid];
        if(element==target){
            return mid;
        }
        else if(target<=element){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
        
    }
    return-1;
}
int main(){
    int arr[]={0,1,2,3,4,5,6,7,8,9};
    int size=10;
    int target=7;
    int indexTarget=binarySearch(arr,size,target);
    if(indexTarget==-1){
        cout<<"element not found :"<<endl;
    }
    else{
        cout<<"element found at index :"<<indexTarget<<endl;
    }
    
}

 
    
                  //  Que- factorial program  by using loop instead of recursion
                
#include<iostream>
using namespace std;
int main(){
    int n;
    int factorial=1;
    cout<<"enter the number"<<endl;
    cin>>n;
    
    if(n<1){
        cout<<"bakchodi mat kr lawde"<<endl;
    }
        else{
            for(int i=1;i<=n;i++){
                factorial*=i;
                
            }
            cout<<"factorial of  "  << n << "  is "<< factorial <<endl;
        }
        return 0;
    
}


