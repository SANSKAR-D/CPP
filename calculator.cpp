#include <iostream>
using namespace std;

int main(){
    int date1 = 22;
    int month1 = 7;
    int year1 = 2025;
    int date,month,year;
    cout << "ENTER DATE :";
    cin >> date ;
    cout << "ENTER MONTH :";
    cin >> month ;
    cout << "ENTER YEAR :";
    cin >> year ;
    if (date1 >= date){
        if (month1 >= month ){
            cout << "YOU ARE " << (year1-year) << " YEARS-" << (month1-month) << " MONTHS OLD";
        }else{
            cout << "YOU ARE " << ((year1-year)-1) << " YEARS-" << (12-(month-month1)) << " MONTHS OLD";     
        }
    }else{
        if (month1 >= month ){
            cout << "YOU ARE " << (year1-year) << " YEARS-" << ((month1-month)-1) << " MONTHS OLD";
        }else{
            cout << "YOU ARE " << ((year1-year)-1) << " YEARS-" << ((12-(month-month1))-1) << " MONTHS OLD";     
        }
    }
    cout << endl;
    return 0;
}