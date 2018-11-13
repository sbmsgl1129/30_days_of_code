#include <bits/stdc++.h>

using namespace std;

int hourGlassSum(vector<vector<int>> &arr, int row_start, int col_start){
    int sum = 0;
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            if(i == 1 && j != 1){
                continue;
            }
            sum += arr[row_start + i][col_start + j];
        }
    }
    
    return sum;
}


int main()
{
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        }

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }

    int max_sum = INT_MIN;
    int current_sum = 0;
    for(int i = 0 ; i < 4; i++){
        for(int j = 0; j < 4; j++){
            current_sum = hourGlassSum(arr,i,j);
            if(current_sum > max_sum){
                max_sum = current_sum;
            }
        }
    }
    
    cout << max_sum;
    return 0;
}
