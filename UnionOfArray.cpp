#include <iostream>
#include <set>
using namespace std;

// ! brute force
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8};
    int arr2[] = {1, 2, 3, 4, 5, 6, 9, 10};
    int n = sizeof(arr1) / sizeof(arr1[0]);

    set<int> st;
    for (int i = 0; i < n; i++)
    {
        st.insert(arr1[i]);
        st.insert(arr2[i]);
    }

    int unionArr[2 * n];
    int i = 0;
    for (auto it : st)
    {
        unionArr[i++] = it;
    }

    cout << "Union: ";
    for (int j = 0; j < i; j++)
    {
        cout << unionArr[j] << " ";
    }
    cout << endl;

    return 0;
}

// ! optimal

vector<int> sortedArray(vector<int> a, vector<int> b) {
    int n1 = a.size();
    int n2 = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;

    while (i < n1 && j < n2)
    {
        if (a[i] <= b[j])
        {
            if (unionArr.size() == 0 || unionArr.back() != a[i])
            {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else
        {
            if (unionArr.size() == 0 || unionArr.back() != b[j])
            {
                unionArr.push_back(b[j]);
            }
            j++;
        }
    }

    while (j < n2)
    {
        if (unionArr.size() == 0 || unionArr.back() != b[j])
        {
            unionArr.push_back(b[j]);
        }
        j++;
    }
    while (i < n1)
    {
        if (unionArr.size() == 0 || unionArr.back() != a[i])
        {
            unionArr.push_back(a[i]);
        }
        i++;
    }

    return unionArr;
}

