#include <iostream>
#include <vector>
#include <algorithm>

int main () {
    int n;
    std::cin >> n;
    std::vector<int> nums(n);
    for (int i = 0; i < n; ++i) std::cin >> nums[i];

    int maxOnes = 0, count = 0;
    
    for (int i = 0; i < n; ++i) {
        if (nums[i] == 1) {
            count++;
            if (i == n-1) maxOnes = std::max(maxOnes, count);
        }
        else if (nums[i] == 0) {
            maxOnes = std::max(maxOnes, count);
            count = 0;  
        }
    }

    std::cout << maxOnes << std::endl;
    
    return 0;
}