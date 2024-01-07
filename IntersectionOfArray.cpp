#include <bits/stdc++.h>
using namespace std;

int main() {
    // ! brute force
    vector<int> ans;
    int vis[m] = {0};

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (A[i] == B[j] && vis[j]==0){
                ans.push_back(A[i]);
                vis[j]= 1;
                break;
            }
            if (B[j] > A[i]) break;
            
        }
        
    }
    
    cout << "" << endl;
    return 0;
}