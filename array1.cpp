#include <iostream>
#include <limits.h>
using namespace std;



// void printArray(int arr[], int size){
//   for(int i=0; i <size; i++){
//     cout << arr[i] << " ";
//   }
//   cout << endl;
// }
// void inc(int arr[], int size){
//   arr[0] = arr[0] +10;

//   printArray(arr,size);
  
// }
// bool find(int arr[], int size , int key){
//   for (int i =0; i <size; i++){
//     if (arr[i] == key)
//        return true;
   
//   }

//      return false;
  
// }

// bool find (int arr[], int size, int key){
//   for (int i =0; i<size; i++){
//     if (arr[i] == key)
//       return true;
//   }
//   return false;
// }
int main() {
       int arr[8] ={10,20,30,40,50,60,70,80};
  int size =8;
  int start = 0;
  int end = size-1; 
  while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
  }
  for (int i =0; i < size; i ++){
    cout << arr[i]<< " ";
  }
  
  //   int arr[8] ={10,20,30,40,50,60,70,80};
  // int size =8;
  // int start = 0;
  // int end = size-1;

  // while (true){
  //   if(start > end)
  //     break;
  //   if(start==end){
  //      cout << arr[start]<<" ";
  //   }
  //   else{
  //   cout << arr[start]<<" ";
  //   cout << arr[end]<<" ";
  //   }

  //   start++;
  //   end--;
  // }

  
//   int arr[8] ={10,20,30,40,50,60,70};
//   int size =7;
//   int start = 0;
//   int end = size-1;
//   while (true){
//     if (start == end) {
//       cout << arr[start]<<" ";

//     }
//     else{
//        cout << arr[start]<<" ";
//     cout << arr[end]<<" ";
//     start++;
//     end--;
//     }
//   }

  // int arr[8] ={10,20,30,40,50,60,70,80};
  // int size =8;
  // int start = 0;
  // int end = size-1;

  // while (true){
  //   if(start > end)
  //     break;
  //   cout << arr[start]<<" ";
  //   cout << arr[end]<<" ";
  //   start++;
  //   end--;
  // }

  
  // int arr[]= {2,3,4,5,6,7,8,0,9,0};
  // int size = 10;
  // int maxi = INT_MIN;
  // for (int i =0; i <size; i++){
  //   if (arr[i]>maxi){
  //     maxi=arr[i];
  //   }
  // }
  // cout << maxi;

  // int arr[] = {0,1,0,1,0,1,0,1,0,1,0,1,0};
  // int size = 13;
  // int Numone =0;
  // int Numzero=0;

  // for (int i =0; i <size; i++){
  //   if (arr[i] == 0){
  //   Numzero++;
  //   }
  //   if (arr[i] == 1){
  //     Numone++;
  //   }
  // }
  // cout << "the countion of zero ::" << Numzero << endl;
  //  cout << "the countion of one ::" << Numone << endl;
  // int arr[] = {2,3,4,5,6,7} ;
  // int size = 6;
  // cout << "enter the value of key :: " << endl;
  // int key ;
  // cin >> key;
  // bool ans = find(arr, size ,key);
  //   if (ans == true){
  //     cout << "Found "<< endl;
  //   }
  //   else {
  //        cout << "Not Found "<< endl;
  //     }
  

  // int arr[8] = {1,2,3,4,5,6,7,8};
  // int size =8;
  // cout <<" Enter  the value of key ::" <<endl;
  // int key;
  // cin >> key;
  // bool flag = 0;
  // for (int i =0; i < size; i++){
  //   if (arr[i] == key){
  //    flag =1;
  //   }

  // }
  // if(flag ){
  //   cout << "Present" << endl;
  // }
  // else{
  //   cout << " not present" << endl;
  // }
  
    

  // int arr[5] = {1,2,3,4,5} ;
  // int size = 5;
  // cout << "enter the value of key: " << endl;
  // int key;
  // cin >> key;

  // if(find(arr,size,key))
  // {
  //   cout << "Found" << endl;
  // }
  // else{
  //   cout << "not found"<< endl;
  // }
    
  
  
  // int arr[]= {5,6};
  // int size = 2;
  // inc (arr, size);

  // printArray(arr, size);
  

 // int arr[10] = {0};
 //  for (int i=0; i <10; i++){
 //    cout << arr[i] << " ";
 //  }
  // int arr[10] = {1,2};
  // for (int i=0; i <10; i++){
  //   cout << arr[i] << " ";
  // }
  // int arr [5] = {1,2,3,4,5};
  // for(int i=0; i<5; i++){
  //     arr[i]=1;
  // }
  //  for (int i =0; i<5; i++){
  //    cout << arr[i] << " ";
  //  }
// int arr[10];
//   cout<<"Enter the value of array"<< endl;
//   for(int i =0; i <10 ; i++){
//     cin>> arr[i];
//   }
//   cout << "printing the value in array"<< endl;
//   for(int i=0; i<10; i++){
//     cout << arr[i]<< " "<< endl;
//   }
  // int arr[500];
  // int n; 
  // cout << "How many numbers you want to add in arry"<< endl;
  // cin >>n;
  // cout << "enter the numbers " << endl;
  // for (int i =0; i<n; i++){
  //   cin >> arr[i];
  // }
  // cout << "Double :";
  // for(int i =0; i<n; i++){
  //   cout << 2* arr[i] << " ";
  // }
}