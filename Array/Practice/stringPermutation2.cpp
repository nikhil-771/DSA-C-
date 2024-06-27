// do not use marked array for visited index
#include <iostream>
#include <vector>
#include <algorithm> // For swap function
using namespace std;

void display(const vector<string>& ans);
void permutations(string str, int l, int r, vector<string>& ans);

int main() {
    string str = "nik";
    vector<string> ans;

    permutations(str, 0, str.size() - 1, ans);
    display(ans);

    return 0;
}

void permutations(string str, int l, int r, vector<string>& ans) {
    if (l == r) {
        ans.push_back(str);
    } else {
        for (int i = l; i <= r; i++) {
            swap(str[l], str[i]);
            permutations(str, l + 1, r, ans);
            swap(str[l], str[i]); // backtrack
        }
    }
}

void display(const vector<string>& ans) {
    for (const auto& it : ans) {
        cout << it << "\n";
    }
}
