#include <iostream>
#include <limits.h>
using namespace std;

int main(){
    int minM = INT_MAX;
    int minI = 0;
    int maxI = 0;
    int maxM = INT_MIN;
    int arr[] = {2,45,67,21};
    int size = (sizeof(arr)/sizeof(int));
    for(int i = 0; i < size; i++){
        if (minM > arr[i]){
            minI = i;
        minM = min(minM,arr[i]);
        }
        if (maxM < arr[i]){
            maxI = i;
        maxM = max(maxM,arr[i]);
        }
    }
    swap(arr[maxI],arr[minI]);
    for(int i = 0; i < size; i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}