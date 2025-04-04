#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> arr(n); 
    for (int i = 0; i < n; ++i) std::cin >> arr[i];

    // std::set<int> st;
    // for (int elem : arr) st.insert(elem);

    // auto it = st.begin();

    // int index = 0;
    // while (it != st.end()) {
    //     arr[index] = *it;
    //     index++, it++;
    // }

    // Two pointer method
    int i = 0, j = 0;
    while (j < n) {
        if (arr[i] != arr[j]) {
            std::swap(arr[i+1], arr[j]);
            i++;
        }
        j++;
    }

    for (int elem : arr) std::cout << elem << " ";
    std::cout << std::endl;

    return 0;
}