#include <iostream>
using namespace std;

int main(){
    int factorial = 1;
    int n;
    cout << "ENTER NO FOR FACTORIAL : ";
    cin >> n;
    for(int i = n; i > 0; i--){
        factorial *= i;
    }
    cout << "FACTORIAL OF NO : " << factorial << endl;
    return 0;
}