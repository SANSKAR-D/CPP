#include <iostream>
using namespace std;

int main(){
    int date1 = 22;
    int month1 = 7;
    int year1 = 2025;
    int date,month,year;
    cout << "ENTER DATE MONTH YEAR :";
    cin >> date >> month >> year;
    if (date1 >= 22 && month1 >=7){
        cout << "YOU ARE " << (year1-year) << "YEARS" << (month1-month) << "MONTHS" << (date1-date) << "DAYS OLD";
    }
    
    return 0;
}