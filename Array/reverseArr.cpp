#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    // taking array as input
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    // reversing the array  
    int i = 0, j = n-1;
    while (i < j) {
        std::swap(arr[i], arr[j]);
        i++, j--;
    }

    // Printing the reversed array
    for (int elem : arr) std::cout << elem << " ";
    std::cout << std::endl;

    return 0;
}
