//Insertion Sort
#include<iostream>
#include<vector>
using namespace std;

int main(){
 int arr2[6] = {10,1,7,6,14,9};
      int n2 = sizeof(arr2)/sizeof(arr2[0]);
      for(int round = 1; round < n2; round++){
      int val = arr2[round];
      int j = round-1;
      for(; j>=0; j--){
          if(arr2[j] > val){
              arr2[j+1] = arr2[j];
          }
          else {
              break;
          }
        }
      arr2[j+1] = val;
     }
      // For printing arr
      for(int i=0; i<n2; i++) {
         cout << arr2[i] << " ";
     }
       cout << endl;
       return 0;
}
 