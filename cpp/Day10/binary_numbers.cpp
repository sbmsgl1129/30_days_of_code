#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string n_binary = bitset<32>(n).to_string();
    
    int max_one_consecutive_count = 0;
    int current_one_consecutive_count = 0;
    for(int i = 0; i < n_binary.size(); i++){
        if(n_binary[i] == '1'){
            current_one_consecutive_count++;
        }else{
            if(current_one_consecutive_count > max_one_consecutive_count){
                max_one_consecutive_count = current_one_consecutive_count;
            }
            current_one_consecutive_count = 0;
        }
    }

    if(current_one_consecutive_count > max_one_consecutive_count){
        cout << current_one_consecutive_count;
    }else{
        cout << max_one_consecutive_count;   
    }
    
    return 0;
}
