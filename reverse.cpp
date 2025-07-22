#include <iostream>
using namespace std;

int main(){
    int reverse = 0;
    int n;
    cout << "Enter the no : ";
    cin >> n;
    while(n > 0){
        reverse = ((reverse*10) + (n%10));
        n /= 10;
    }
    cout << "REVERSED NO IS : " << reverse << endl;
    
    return 0;
}