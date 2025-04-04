#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    int i = 0, j = 0;
    while (j < n) {
        // std::cout << "i: " << i << " j: " << j << std::endl;
        if (arr[j] != 0) {
            std::swap(arr[i], arr[j]);
            i++;
        } 
        j++;

        // for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
        // std::cout << std::endl;
    }

    for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}