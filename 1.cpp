#include <iostream>
using namespace std;

int main() {
    char ch ;
    cout << "GIVE THE CHARACTER : ";
    cin >> ch ;
    cout << (ch <= 90 && ch >= 65 ? "UPPERCASE" : "LOWERCASE") << endl;
    return 0;
}