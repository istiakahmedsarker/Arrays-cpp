#include <bits/stdc++.h>
using namespace std;

int main() {
    // ! Optimal

    int xor1 = 0,xor2 = 0;
    int n = N -1;
    for (int i = 0; i < n; i++)
    {
        xor2 = xor2 ^ a[i];
        xor1 = xor1 ^ (i+1);

    }
    xor1 = xor1 ^ N;
    return xor1^ xor2;
}