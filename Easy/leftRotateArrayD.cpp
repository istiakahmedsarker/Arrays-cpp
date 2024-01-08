#include <iostream>
using namespace std;

int main()
{
    // brute
    temp[] = [ 1, 2, 3 ];
    // shifting
    for (int i = d; i < n; i++)
    {
        a[i - d] = a[i];
    }
    // put back temp
    int j = 0;
    for (int i = d; i < n; i++)
    {
        a[i] = temp[j];
        j++
    }
    for (int i = n - d; i < n; i++)
    {
        a[i] = temp[i - (n - d)];
        j++
    }
    for (int i = 0; i < d; i++)
    {
        temp.pushback(arr[i]);
    }
    

    // ! optimal
    reverse(arr,arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);


    cout << "" << endl;
    return 0;
}