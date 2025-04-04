#include <iostream>
#include <vector>
#include <algorithm>

bool checkSorted(std::vector<int>& vec) {
    for (int i = 1; i < vec.size(); ++i) {
        if (vec[i] < vec[i-1])
            return false;
    }
    return true;
}

int main() {
    int n;
    std::cin >> n;

    // Input the rotated sorted array
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) std::cin >> nums[i];

    // find index of minimum element cause that's pivot we need
    int minIndex = 0;
    for (int i = 0; i < n; ++i) {
        if (nums[i] < nums[minIndex])
            minIndex = i;
    }

    int x = minIndex;
    // Sorted in non-decreasing order
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) {
        arr[i] = nums[(i + x) % n];
    }

    // check if array is sorted
    if (checkSorted(arr)) std::cout << "true";
    else std::cout << "false";

    std::cout << std::endl;

    return 0;
}