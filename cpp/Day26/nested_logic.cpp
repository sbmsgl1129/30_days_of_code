#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int return_date, return_month, return_year;
    int actual_return_date, actual_return_month, actual_return_year;

    cin >> actual_return_date >> actual_return_month >> actual_return_year;
    cin >> return_date >> return_month >> return_year;

    if (actual_return_year >= return_year){
        //if it is greater
        if(actual_return_year > return_year){
            cout << 10000;
        } else if (actual_return_year == return_year){
            if(actual_return_month >= return_month){
                if(actual_return_month > return_month){
                  cout << 500 * (actual_return_month - return_month);
                } else if (actual_return_month == return_month){
                    if(actual_return_date > return_date){
                      cout << 15 * (actual_return_date - return_date);
                    }else{
                        cout << 0;
                    }
                }
            }else{
                cout << 0;
            }
        }

    }else{
        cout << 0;
    }

      return 0;
}
