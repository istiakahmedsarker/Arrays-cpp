#include <iostream>
using namespace std;

int main() {
    // * * extra space is (0)1 and in algorithm is the array
    temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
    cout << "" << endl;
    return 0;
}