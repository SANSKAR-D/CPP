#include <iostream>
using namespace std;

void unique(int arr[],int size,int arrN[],int &sizeN){
    for(int i = 0; i < size; i++){
        bool unique = true;
        for(int j = 0; j < size; j++){
            if(i != j && arr[i] == arr[j]){
                unique = false;
                break;
        }
    }
    if (unique){
        arrN[sizeN++] = arr[i];
}
    }
};

int main(){
    int arr[]={1,2,3,4,5,1,2,3,4};
    int size = (sizeof(arr)/sizeof(int));
    int sizeN = 0;
    int arrN[100];
    unique(arr,size,arrN,sizeN);
    for(int i = 0; i < sizeN; i++){
        cout << arrN[i] << " ";
    }
    cout << endl;
    return 0;
}
