#include <iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter the no for sum : ";
    cin >> n;
    int sum = 0 ;
    for(int i =1; i <= n; i++){
        if (i % 3 == 0){
            sum +=i;
        }
    }
    cout << "SUM IS : " << sum << endl;
    return 0;
}