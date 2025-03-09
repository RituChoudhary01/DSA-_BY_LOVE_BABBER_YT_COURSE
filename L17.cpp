//bubble sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr1[6]={10,1,7,6,14,9};
      int n1 = sizeof(arr1)/sizeof(arr1[0]);
     for(int round = 1; round < n1; round++) {
        int swapCount = 0;
        for(int j =0; j< n1-round; j++) {
         if(arr1[j] > arr1[j+1]){
                swap(arr1[j], arr1[j+1]);
                swapCount++;
            }
         }
        if(swapCount == 0) {
            //sort ho chuka hai, no need to check in further rounds
            break;
        }
    }
    //For printing arr
    for(int i=0; i<n1; i++) {
        cout << arr1[i] << " ";
    }
    cout << endl;
    return 0;
}
// Stable and in-place
