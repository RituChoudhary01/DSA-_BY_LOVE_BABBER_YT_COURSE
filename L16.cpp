//Selection sort
#include<iostream>
#include<vector>
using namespace std;
int main(){
//   Q1.Selection Sort
    int arr[5]={5,4,3,2,1};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0; i<n-1; i++) {
      int minIndex = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[i], arr[minIndex]);
      }
    // for printing arr
    for(int i=0; i<n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
//T.C:O(n^2) S.C:O(n);
/*H.W selection sort is stable or not
Selection Sort is not a stable sorting algorithm.
Draw flow chart of selection sort.
*/