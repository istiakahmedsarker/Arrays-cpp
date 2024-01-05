#include <iostream>

using namespace std;

int main()
{
    int arr[5] = {1, 2, 3, 4, 5};
    int largest = arr[0];
    
    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++) {
        int elem = arr[i];
        if (elem > largest) {
            largest = elem;
        }
    }
    
    cout << "largest: " << largest << endl;
    return 0;
}
