#include <iostream>
#include <vector>
using namespace std;

void display(vector<vector<int>>& ans);
void solve(int index, vector<int>& output, vector<vector<int>>& ans, int* arr, int n);

int main() {
    int arr[] = {1,2, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    vector<vector<int>> ans;
    vector<int> output;

    // Sort the array (already sorted in this case, so it's optional)
    // sort(arr, arr + n);

    solve(0, output, ans, arr, n);

    display(ans);
}

void solve(int index, vector<int>& output, vector<vector<int>>& ans, int* arr, int n) {
    // Add current output to ans
    ans.push_back(output);

    // Explore all subsets starting from index
    for (int i = index; i < n; ++i)
    {
        // Skip duplicates by checking if current element is same as previous ensures not first element is not compared with self by using i!index
        if (i != index && arr[i] == arr[i - 1]) 
        {
            continue;
        }
        
        output.push_back(arr[i]);
        solve(i + 1, output, ans, arr, n);
        output.pop_back();
    }
}

void display(vector<vector<int>>& ans) {
    for (auto& it : ans) {
        cout << "{ ";
        for (auto x : it) {
            cout << x << " ";
        }
        cout << "}\n";
    }
}
