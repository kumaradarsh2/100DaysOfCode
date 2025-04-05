// Time complexity O((m+n) logk)

#include <iostream>
#include <vector>
#include <set>

int main() {
    std::vector<int> arr1, arr2;
    arr1 = {1,2,3,4,5};
    arr2 = {2,3,4,4,5};

    // std::set<int> unionArr;
    // for (int elem : arr1) unionArr.insert(elem);
    // for (int elem : arr2) unionArr.insert(elem);

    // std::vector<int> unionVec(unionArr.begin(), unionArr.end());
    std::vector<int> unionArr;

    int i = 0, j = 0;
    int n = arr1.size(), m = arr2.size();
    while (i < n) {
        unionArr.push_back(arr1[i]);

        while (j < n) {
            if (arr2[j] == arr1[i]) j++;
        }
 
        while (i < n) {
            if (arr1[i+1] == arr1[i]) i++;
        }

        i++;
    }
    for (int elem : unionArr) std::cout << elem << " ";
    std::cout << std::endl;

    return 0;
}