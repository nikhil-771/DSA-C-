#include <iostream>
#include <vector>

void printSubsequence(std::vector<int>& subsequence) {
    for (int num : subsequence) {
        std::cout << num << " ";
    }
    std::cout << std::endl;
}

void findSubsequences(int index, std::vector<int>& arr, std::vector<int>& subsequence) {
    // Base case: If we have reached the end of the array
    if (index == arr.size()) {
        printSubsequence(subsequence);
        return;
    }

    // Include the current element in the subsequence
    subsequence.push_back(arr[index]);
    findSubsequences(index + 1, arr, subsequence);

    // Exclude the current element from the subsequence
    subsequence.pop_back();
    findSubsequences(index + 1, arr, subsequence);
}
int main() {
    std::vector<int> arr = {1, 2, 3};
    std::vector<int> subsequence;

    findSubsequences(0, arr, subsequence);

    return 0;
}
