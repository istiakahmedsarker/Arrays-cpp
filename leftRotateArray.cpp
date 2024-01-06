#include <iostream>
using namespace std;

int main() {
    temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    
    cout << "" << endl;
    return 0;
}