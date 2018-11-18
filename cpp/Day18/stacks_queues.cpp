#include <iostream>
#include <stack>
#include <queue>

using namespace std;

class Solution {
    //Write your code here
    public:
        void pushCharacter(char c){
            str_from_end.push(c);
        }
        
        void enqueueCharacter(char c){
            str_from_begin.push(c);
        }
    
        char popCharacter(){
            char c = str_from_end.top();
            str_from_end.pop();
            
            return c;
        }
    
        char dequeueCharacter(){
            char c = str_from_begin.front();
            str_from_begin.pop();
            
            return c;
        }
    
    private:
        stack<char> str_from_end;
        queue<char> str_from_begin;

};
