#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num_test_cases;
    cin >> num_test_cases;

    while(num_test_cases--){
        int num;
        cin >> num;

        if(num == 1){
            cout << "Not prime\n";
            continue;
        }

        bool is_prime = true;
        int sqrt_num = sqrt(num);
        for(int i = 2; i <= sqrt_num; i++){
            if(num % i == 0){
                is_prime = false;
                break;
            }
        }
        
        if(is_prime){
            cout << "Prime\n";
        }else{
            cout << "Not prime\n";
        }
    }
    return 0;
}
