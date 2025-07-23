#include <iostream>
using namespace std;

int main(){
    int n ;
    cout << "Enter the key : ";
    cin >> n ;
    for(int i = 0; i < n; i++){
        for(int j = 0; j < i+1; j++){
            cout << " * ";
        }
        for(int k = 0; k < (2*n-2)-(2*i); k++){
            cout << "   " ;
        }
        for(int j = 0; j < i+1; j++){
            cout << " * ";
        }
        cout << endl;
    }
    for(int l = n-1; l>= 0; l--){
        for(int m = 0; m < l+1; m++){
            cout << " * ";
        }
        for(int o = 0; o < (2*n-2)-(2*l); o++){
            cout << "   " ;
        }
        for(int m = 0; m < l+1; m++){
            cout << " * ";
        }
        cout << endl;
    }
    
    return 0;
}