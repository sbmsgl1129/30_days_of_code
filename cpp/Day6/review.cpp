#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int test_cases;
    
    cin >> test_cases;
    while(test_cases--){
        string s;
        cin >> s;
        
        string even_str, odd_str;
        auto s_len = s.length();
        
        for(auto i = 0u; i < s_len; i++){
            if(i % 2 == 0){
                even_str.push_back(s[i]);
            }else{
                odd_str.push_back(s[i]);
            }
        }
        
        cout << even_str << ' ' << odd_str << '\n';
    }
    return 0;
}
