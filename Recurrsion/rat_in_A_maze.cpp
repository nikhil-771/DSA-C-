// the rat is at (0, 0) want to move to (n-1, n-1)
// {
//     {1,0,0,0}
//     {1,1,0,1}
//     {1,1,0,0}
//     {0,1,1,1}
// }
// it can move up, down, left, right 
// ony at one and not 0

#include <iostream>
#include <vector>

using namespace std;


void move( vector<vector<int>> arr);
void solve(int row, int col, string st, vector<vector<int>>&arr, vector<vector<bool>>&visited, int n);

int main()
{

    vector<vector<int>>arr={
        {1,0,0,0},
        {1,1,0,1},
        {1,1,0,0},
        {0,1,1,1}
    };
    int n = arr.size();

    vector<vector<bool>> visited(n, vector<bool>(n, false));
    solve(0, 0, "",arr, visited, n);
}

void solve(int row, int col, string st, vector<vector<int>>&arr, vector<vector<bool>>&visited, int n)
{

    if(row == n-1 && col ==n-1)
    {
        cout<<st<<endl;
        return;
    }
    
    visited[row][col] = true;

    if(row+1<n && arr[row+1][col]== 1 && visited[row+1][col]==false)
    {
        row++;
        st.push_back('D');
        
        solve(row, col, st, arr, visited, n);
        st.pop_back();    
    
    }
    if(col-1>=0 && arr[row][col-1]==1 && visited[row][col-1]==false)
    {
        col--;
        st.push_back('L');
        solve(row, col, st, arr, visited, n);
        st.pop_back();    
    
    }
    if(col+1<n && arr[row][col+1]==1 && visited[row][col+1]==false)
    {
        col++;
        st.push_back('R');
        solve(row, col, st, arr, visited, n);
        st.pop_back();    
    
    }
    if(row-1>=0 && arr[row-1][col]==1 && visited[row-1][col]==false)
    {
        row--;
        st.push_back('U');
        solve(row, col, st, arr, visited, n);
        st.pop_back();    
    
    }
        visited[row][col] = false;


}