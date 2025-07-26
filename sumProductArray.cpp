#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int product = 1;
    int arr[] = {2,45,67,21};
    int size = (sizeof(arr)/sizeof(int));
    for(int i=0; i < size; i++){
        sum += arr[i];
        product *= arr[i];
    }
    cout << "sum: "<< sum <<endl;
    cout << "product: "<< product <<endl;
    return 0;
}