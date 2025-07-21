#include <iostream>
using namespace std;

int main(){
    int sum = 0;
    int n;
    cout << "Tell the no to calculate the sum until : "<< endl;
    cin >> n;
    for(int i=1; i<=n; i+=2 ){
        sum += i;
    }
    cout << sum << endl;
    return 0;
}