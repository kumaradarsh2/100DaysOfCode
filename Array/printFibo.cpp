#include <iostream>
#include <vector>

// int fiboNum(int n) {
//     if (n < 2) return n;
//     int firstNum = 0, secondNum = 1;
//     int fibo;
//     for (int i = 2; i < n; ++i) {
//         fibo = firstNum + secondNum;
//         firstNum = secondNum;
//         secondNum = fibo;
//     }
//     return fibo;
// }

// Using array method
void printFibo(std::vector<int>& arr, int n) {
    if (n < 2) return;

    for (int i = 2; i < n; ++i) {
        arr[i] = arr[i-1] + arr[i-2];
    }
}

int main() {
    int n;
    std::cin >> n;

    if (n <= 0) return 0;

    std::vector<int> arr(n);

    arr[0] = 0;
    // arr[1] = 1; // wrong for size = 1, out of bounds
    if (n > 1) arr[1] = 1; // correct 
    
    printFibo(arr, n);
    for (int i = 0; i < n; ++i) std::cout << arr[i] << " ";
    std::cout << std::endl;

    return 0;
}