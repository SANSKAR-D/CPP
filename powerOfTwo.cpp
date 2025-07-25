#include <iostream>
using namespace std;
bool powerOfTwo(int n){
    if (n > 0){
        if ((n & (n-1))==0){
            return true;
        }
        else{
            return false;
        }
    }else{
        return false;
    }
}
int main() {
    int n;
    cin >> n;
    cout << boolalpha << powerOfTwo(n) <<endl;
    return 0;
}
    