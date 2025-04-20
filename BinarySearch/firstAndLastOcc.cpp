#include <iostream>
#include <vector>
#include <algorithm>

int findOcc(std::vector<int>& arr, int target, char pos) {
    int low = 0, high = arr.size()-1;
    int occ = -1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == target) {
            // target is found
            occ = mid; // update the occ
            if (pos == 'f') {
                // keep searching left
                high = mid - 1;
            } 
            else if (pos == 'l') {
                // keep searching right
                low = mid + 1;
            }
        }
        else if (target > arr[mid]) low = mid + 1;
        else high = mid - 1;
    }
    return occ;
}

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    // std::sort(arr.begin(), arr.end());

    // take the target input
    int target;
    std::cin >> target;

    // first occurrence
    int firstOcc = findOcc(arr, target, 'f');
    int lastOcc = findOcc(arr, target, 'l');

    std::cout << "First Occ: " << firstOcc << " Last Occ: " << lastOcc << std::endl;
    
    return 0;
}