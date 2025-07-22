#include <iostream>
using namespace std;

int main(){
    int product = 1;
    int sum = 0;
    int no;
    cout << "Enter the no : ";
    cin >> no;
    while (no > 0){
        sum += (no%10);
        product *= (no%10);
        no /= 10;
    }
    cout << "PRODUCT IS : " << product << " ";
    cout << "SUM IS : " << sum << endl;
    return 0;
}