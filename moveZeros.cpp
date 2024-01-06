#include <iostream>
using namespace std;

int main() {
    arr[12] = {1,0,2,3,0,4,5,0,6,0,7,8};

    // step 1
    for (int i = 0; i < n; i++)
    {
        if(a[i] != 0){
            temp.push_back(a[i]);
        }
    }
    // step 2
    int nz = temp.size();
    for (int i = 0; i < nz; i++)
    {
        a[i] = temp[i];
    }
    for (int i = nz; i < n; i++)
    {
        a[i] = 0;
    }
    
    
    
    cout << "" << endl;
    return 0;
}