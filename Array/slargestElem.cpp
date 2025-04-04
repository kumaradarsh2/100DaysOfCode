#include <iostream>
#include <vector>
#include <algorithm>

int main() {    
    int n;
    std::cin >> n;

    std::vector<int> arr(n);
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    // Find the second largest element (time complexity: O(N + NlogN), space complexity: O(1))
    // Method 1
    // Sort the array and do the finding from the end
    // std::sort(arr.begin(), arr.end());

    // int largest = arr.back();

    // for (int i = n-1; i >= 0; --i) {
    //     if (arr[i] != arr.back()) {
    //         std::cout << arr[i] << std::endl;
    //         break;
    //     }
    // }

    // Method 2
    // Run two for loops
    // 1st for loop, find largest
    // 2nd for loop, find slargest
    
    // time complexity: O(N+N) = O(2N)
    // space complexity: O(1)
    /*
    int largest = arr[0];
    for (int elem : arr) {
        largest = std::max(elem, largest);
    }

    std::cout << "Largest: " << largest << std::endl;

    int slargest = -1;

    for (int elem : arr) {
        if (elem != largest) 
            slargest = std::max(elem, slargest);
    }

    std::cout << slargest << std::endl;
*/
    // Method 3
    // optimising method 2 to get most optimal solution
    // time complexity: O(n) and space complexity: O(1)

    int largest = arr[0], slargest = -1;

    for (int elem : arr) {
        if (elem > largest) {
            slargest = largest;
            largest = elem;
        }
        else if (elem < largest) {
            if (elem > slargest) {
                slargest = elem;
            }
        }
    }

    std::cout << slargest << std::endl;

    return 0;
}