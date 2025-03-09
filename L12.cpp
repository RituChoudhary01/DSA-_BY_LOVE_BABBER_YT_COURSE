/* Binary Search
 Binary search shirf monotonic array par lgate h.
 Algo:
 1.Find Mid
 2.compare mid element od array with key 
 if arr[mid]==key return true
 if arr[mid]>key to left part me search krege or right part ko discard kar dege.
 Nhi to right part me search krege or left part ko discart kar dege.
 ager array ka size < 0 jo jaega to return false;
 T.C.=O(logn)
*/
#include<iostream>
#include<vector>
using namespace std;
int binarySearch(vector<int>arr,int target){
    int start = 0;
    int end = arr.size()-1;
    int mid;
    while(start<=end){
      mid = start+(end-start)/2;
      if(arr[mid]==target)
       return mid;
    //    left part me search krege
      else if(arr[mid]>target){
       end = mid-1;
      }
    //   right part me search krege
      else start = mid+1;
    }
     return -1;
}
int main(){
    int n;
    cout<<"Enter the size of vector: "<<endl;
    cin>>n;
    vector<int>arr;
    cout<<"Enter the element in vector: "<<endl;
    for(int i=0;i<n;i++){
        int input;
        cin>>input;
        arr.push_back(input);
    }
    int target;
    cout<<"Enter the value of Key in monotonic order: "<<endl;
    cin>>target;
    int ans = binarySearch(arr,target);
    if(ans == -1){
        cout<<"Key is not present"<<endl;
    }
    else{
        cout<<"Key is present at index "<<ans<<endl;
    }
    return 0;
}