#include <iostream>
using namespace std;


int fib(int n){
    int j = 1;
    int i = 0;
    for(int k = 0;k < n; k++){
        int sum = (i+j);
        cout << i <<" ";
        i = j;
        j = sum;
    }          
}
int main(){
    fib(10);
    return 0;
}