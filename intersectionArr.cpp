#include <iostream>
using namespace std;

void inter(int arr[],int size,int arrN[],int sizeN,int arrI[],int &sizeI){
    for (int i = 0; i < sizeN; i++){
        for(int j=0; j < size; j++){
            if (arrN[i] == arr[j]){
                bool exist = false;
                for(int k =0; k < sizeI; k++){
                    if (arrN[i]==arrI[k]){
                        exist = true;
                        break;
                    }
                }
                if(!exist){
                    arrI[sizeI++]=arrN[i];
                }
            }
        }
    }

    
    };

int main(){
    int arr[]={1,2,3,4,5,1,2,3,4,6};
    int size = (sizeof(arr)/sizeof(int));
    int arrN[]={1,2,3,4,5,6};
    int sizeN = (sizeof(arrN)/sizeof(int));
    int sizeI = 0;
    int arrI[100];
    inter(arr,size,arrN,sizeN,arrI,sizeI);
    for(int i = 0; i < sizeI ; i++){
        cout << arrI[i] << " ";
    }
    cout << endl;
    return 0;
}
