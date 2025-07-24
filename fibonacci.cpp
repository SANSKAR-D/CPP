#include <iostream>
using namespace std;


int fib(int n){
    int j = 0;
    int i = 0;
    for(int k = 0;k <n; k++){
        if (i==0){
            cout << i << " ";
            i++;
        }
        else{
            int sum = (i+j);
            cout << sum <<" ";
            if (k > 1){
                j = i;
            }
            i = sum;
        }
    }          
}
int main(){
    fib(20);
    return 0;
}