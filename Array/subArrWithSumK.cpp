#include <iostream>
#include <vector>
#include <algorithm>

int main() {
    int n;
    std::cin >> n;
    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    int sumRequired;
    std::cin >> sumRequired;

    int maxLength = 0;
    for (int i = 0; i < n; ++i) {
        for (int j = i; j < n; ++j) {
            int sum = 0;
            for (int k = i; k <= j; ++k) {
                sum += arr[k];
            }

            if (sum == sumRequired) maxLength = std::max(maxLength, j-i+1);
        }
    }

    std::cout << maxLength << std::endl; 

    return 0;
}