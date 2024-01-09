#include <bits/stdc++.h>
using namespace std;

// ! brute force
int main() {
    vector<int> arr = {2, 6, 5, 8, 11};
    int n = arr.size();
    int target = 14;
    int ans = 0;

    for (int i = 0; i < n; i++) {
        int a = arr[i];
        for (int j = i + 1; j < n; j++) {
            if (a + arr[j] == target) {
                ans = ans + 1;
            }
        }
    }
    
    cout << ans << endl;
    return 0;
}
