#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n); 
    for (int i = 0; i < n; ++i) std::cin >> arr[i];
 
    // Method 1
    int largest = arr[0];
    for (int elem : arr) {
        largest = std::max(elem, largest);
    }

    // Method 2
    // sort the array and return the last element
    std::sort(arr.begin(), arr.end());
    std::cout << "Largest: " << arr.back() << std::endl;

    // std::cout << largest << std::endl;
    return 0;
}