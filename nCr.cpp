#include <iostream>
using namespace std;

int factorial(int n){
    int fact = 1;
    for (int i = n; i > 0; i--){
        fact *= i;
    }
    return fact;
}

int nCr(int n,int r){
    int factN = factorial(n);
    int factR = factorial(r);
    int factNMR = factorial(n-r);
    return factN/(factR*factNMR);
}


int main(){
    cout << nCr(8,1) << endl;
    return 0;
}