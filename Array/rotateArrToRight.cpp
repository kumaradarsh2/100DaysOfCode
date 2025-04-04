#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    int k;
    std::cin >> k;

    // tempArr (similar to temp variable)
    std::vector<int> tempArr;
    for (int i = k+1; i < n; ++i) tempArr.push_back(arr[i]);
    
    for (int i = k; i >= 0; --i) arr[i+k] = arr[i];
    // for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    // std::cout << std::endl;

    for (int i = 0; i < tempArr.size(); ++i) arr[i] = tempArr[i];

    // Printing the array
    for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}