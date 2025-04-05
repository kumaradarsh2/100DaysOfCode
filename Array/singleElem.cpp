#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    // int XOR = 0;
    // for (int elem : arr) XOR ^= elem;
    // std::cout << "Single Element: " << XOR << std::endl;
    
    // for (int i = 0; i < n; ++i) {
    //     bool singleElemFound = true;
        
    //     for (int j = 0; j < n; ++j) {
    //         if (i != j && arr[j] == arr[i]) {
    //             singleElemFound = false;
    //             break;
    //         }
    //     }

    //     if (singleElemFound) {
    //         std::cout << arr[i] << std::endl;
    //         break;
    //     }
    // }

    int maxElem = arr[0];
    for (int elem : arr) maxElem = std::max(maxElem, elem);
    int size = maxElem+1;

    std::vector<int> hashArr(size);

    for (int elem : arr) {
        hashArr[elem]++;
    }

    for (int i = 0; i < size; ++i) {
        if (hashArr[i] == 1) {
            std::cout << i << std::endl;
            break;
        }
    }

    return 0;
}