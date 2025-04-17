#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:
      void segregate0and1(vector<int> &arr) {
        // Without using resize(), push_back, or extra space
          int zeros = 0;
          for (int elem : arr) {
            if (elem == 0) zeros++;
          }

          int ones = arr.size() - zeros;
          
          int index = 0;
          while (zeros) {
              arr[index] = 0;
              index++, zeros--;
          }
          
          while (ones) {
              arr[index] = 1;
              index++, ones--;
          }
      }
  };
  
int main() {
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        vector<int> arr;
        string input;
        getline(cin, input);
        stringstream ss(input);
        int number;
        while (ss >> number) {
            arr.push_back(number);
        }
        int n = arr.size();
        Solution ob;
        ob.segregate0and1(arr);
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << "\n";
    }
    return 0;
}