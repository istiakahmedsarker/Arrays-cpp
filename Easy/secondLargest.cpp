#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {1, 2, 4, 3, 5};
    int largest = arr[0];
    int secondLargest = arr[1];
    
    for (int i = n-2; i <= 0 ; i--) {
        if (arr[i] != largest) {
            secondLargest = arr[i];
        }

    }
    
    cout << "largest: " << largest << endl;
    cout << "secondLargest: " << secondLargest << endl;
    return 0;
}
