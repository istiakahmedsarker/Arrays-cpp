#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {1, 2, 3, 4, 5, 6, 9, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    set<int> st;
    for (int i = 0; i < n; i++) {
        st.insert(arr1[i]);
        st.insert(arr2[i]);
    }

    int unionArr[2 * n];
    int i = 0;
    for (auto it : st) {
        unionArr[i++] = it;
    }

    cout << "Union: ";
    for (int j = 0; j < i; j++) {
        cout << unionArr[j] << " ";
    }
    cout << endl;

    return 0;
}
