#include <iostream>
using namespace std;

int main() {
    // cout << "SANSKAR \nGUPTA" << endl;
    double a , b;
    cout << "A = ";
    cin >> a ;
    cout << "B = ";
    cin >> b ;
    cout << "Remainder = "<< ((int)a%(int)b) << endl;
    cout << "Sum = "<< (a+b) << endl;
    cout << "Difference = "<< (a-b) << endl;
    cout << "Product = "<< (a*b) << endl;
    cout << "Division = "<< (a/b) << endl;
    return 0;
}