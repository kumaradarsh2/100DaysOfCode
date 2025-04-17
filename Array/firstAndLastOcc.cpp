#include <iostream>
#include <vector>

int main() {
    // Taking vector as input 
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >>  arr[i];
    
    // Taking element as input
    int x;
    std::cin >> x;
    
    // First and Last Occurrence
    int firstOcc = -1, lastOcc = -1;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (arr[i] == x) {
            found = true;
            if (lastOcc == -1) {
                firstOcc = i;
            }
        }

    }
        
    
    return 0;
}
