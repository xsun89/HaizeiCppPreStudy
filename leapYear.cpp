//
// Created by Xin Sun on 2020-12-15.
//
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
bool isLipYear(int year){

    if((year % 100 != 0 && year % 4 == 0) ||
       year % 400 == 0){
        return true;
    }else{
        return false;
    }

}
int main()
{
    int year, month, day;
    char c = '-';
    cin >> year >> c >> month >> c >> day;
    if((month == 1 ||
        month == 3 ||
        month == 5 ||
        month == 7 ||
        month == 8 ||
        month == 10 ||
        month == 12) && day > 0 && day <= 31)
    {
        cout << "YES" << endl;
    }else if((month == 4 ||
              month == 6 ||
              month == 9 ||
              month == 11) && day > 0 && day <= 30){
        cout << "YES" <<endl;
    }else if(month == 2 && isLipYear(year)
             && day > 0 && day <= 29){
        cout << "YES";
    }else if(month == 2 && !isLipYear(year) && day > 0 && day <= 28){
        cout << "YES";
    }else{
        cout << "NO";
    }
    return 0;
}
