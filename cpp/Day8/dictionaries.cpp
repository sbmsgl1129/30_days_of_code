#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#include <utility>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int num_entries;
    cin >> num_entries;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    
    unordered_map<string, string> phoneBook;
    while(num_entries--){
        string name;
        string phone_num;
        
        cin >> name;
        cin >> phone_num;
        
        phoneBook.insert(make_pair(name, phone_num));
    }
    
    string query;
    while(cin >> query){
        if(phoneBook.find(query) == phoneBook.end()){
            cout << "Not found\n";
        }else{
            cout << query << "=" << phoneBook[query] << '\n';
        }
    }
    return 0;
}

