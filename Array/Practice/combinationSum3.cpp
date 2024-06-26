// int arr[]={1,1,1,2,2};
// array is sorted
// each term only once
// each term only only 
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void findCombinations(vector<int>& candidates, int target, int index, vector<int>& current, vector<vector<int>>& result) {
    // Base case: if target becomes 0, we found a valid combination
    if (target == 0) {
        result.push_back(current);
        return;
    }

    // Iterate over candidates starting from 'index'
    for (int i = index; i < candidates.size(); ++i) {
        // Skip duplicates to ensure unique combinations
        if (i > index && candidates[i] == candidates[i - 1])
            continue;

        // If current candidate is greater than target, break
        if (candidates[i] > target)
            break;

        // Choose current candidate
        current.push_back(candidates[i]);

        // Recursively find combinations using the next index and reduced target
        findCombinations(candidates, target - candidates[i], i + 1, current, result);

        // Backtrack: remove the current candidate from the current combination
        current.pop_back();
    }
}

vector<vector<int>> combinationSum2(vector<int>& candidates, int target) 
{
    vector<vector<int>> result;
    vector<int> current;

    // Sort candidates to handle duplicates easily
    sort(candidates.begin(), candidates.end());

    // Start finding combinations from index 0
    findCombinations(candidates, target, 0, current, result);

    return result;
}

int main() 
{
    vector<int> candidates = {10, 1, 2, 7, 6, 1, 5};
    int target = 8;

    vector<vector<int>> result = combinationSum2(candidates, target);

    // Print the result
    cout << "[\n";
    for (int i = 0; i < result.size(); ++i) 
    {
        cout << "[";
        for (int j = 0; j < result[i].size(); ++j) 
        {
            cout << result[i][j];
            if (j < result[i].size() - 1)
                cout << ", ";
        }
        cout << "]";
        if (i < result.size() - 1)
            cout << endl;
    }
    cout << "\n]" << endl;

    return 0;
}
