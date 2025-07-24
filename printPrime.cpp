#include <iostream>
using namespace std;

int prime(int n){
    for(int i = 2; i <= n; i++){
        bool isPrime = true;
            for (int j = 2; (j*j) <= i; j++){
                if(i%j== 0){
                    isPrime = false;
                    break;
                }
            }
            if(isPrime == true){
                cout << i << " ";
            }
    }
}


int main(){
    int n ;
    cout << "ENTER THE NO UPTO WHICH YOU WANT TO PRINT PRIME NO : ";
    cin >> n;
    prime(n);
    cout << endl;
    return 0;
}