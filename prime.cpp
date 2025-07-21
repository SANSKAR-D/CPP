#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no to check weather the no is prime or not : ";
    cin >> n ;
    if((n == 1) || (n <= 0)){
        cout << "NONE";
    } else if(n == 2){
        cout << "Prime";
    }else{
        bool isPrime = true;
        for(int i = 2; (i*i <= n); i++ ){  
            if(n%i==0){
                isPrime = false;
                break;
            }     
        }
        if(isPrime == true){
            cout << "Prime";
        }else{
            cout << "Composite";
        }
    }
    cout << endl;

    return 0;
} 