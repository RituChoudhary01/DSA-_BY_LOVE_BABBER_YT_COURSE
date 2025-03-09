//Quick Sort
#include<iostream>
using namespace std;
int partion(int arr[],int start,int end){
    int pivot = arr[start];
    int cnt = 0;
    for(int i=start+1;i<=end;i++){
     if(arr[i]<=pivot){
        cnt++;
     }
    }
    int pivotIndex = start+cnt;
    swap(arr[start],arr[pivotIndex]);
    int l=start,r=end;
   while(l<pivotIndex && r>pivotIndex){
    while(arr[l]<=pivot) l++;
    while(arr[r]>pivot)r--;
    if(l<pivotIndex && r>pivotIndex){
        swap(arr[l++],arr[r--]);
    }
  }
  return pivotIndex;
}
void quickSort(int arr[],int start,int end){
    if(start>=end) return;
    int p = partion(arr,start,end);
    quickSort(arr,start,p-1);
    quickSort(arr,p+1,end);
}
int main(){
    int arr[]={23,34,12,-90,67,-45,34};
    int n = sizeof(arr)/sizeof(arr[0]);
    quickSort(arr,0,n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
