#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    int num_elements;
    vector<int> a;

    cin >> num_elements;
    int temp = num_elements;
    while(temp--){
        int input;
        cin >> input;
        a.push_back(input);
    }

    int total_swaps  = 0;
    for (int i = 0; i < num_elements; i++) {
      // Track number of elements swapped during a single array traversal
      int numberOfSwaps = 0;

      for (int j = 0; j < num_elements - 1; j++) {
        // Swap adjacent elements if they are in decreasing order
        if (a[j] > a[j + 1]) {
          swap(a[j], a[j + 1]);
          numberOfSwaps++;
        }
      }

      total_swaps += numberOfSwaps;
      // If no elements were swapped during a traversal, array is sorted
      if (numberOfSwaps == 0) {
        break;
      }
    }

    cout << "Array is sorted in " << total_swaps << " swaps.\n";
    cout << "First Element: " << a[0] << '\n';
    cout << "Last Element: " << a[a.size() - 1]<< '\n';

    return 0;
}
