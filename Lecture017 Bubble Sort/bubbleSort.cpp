#include <bits/stdc++.h>
using namespace std;

void reverse_using_stack(vector<int> &v)
{

    stack<int> st;

    for (auto &x : v)
    {

        st.push(x);
    }

    int itr = 0;

    while (st.size())
    {

        v[itr++] = st.top();

        st.pop();
    }
}

void print1d(vector<int> &v)
{

    for (auto &x : v)
    {

        cout << x << "";
    }

    cout << "\n";
}

int main()
{

    vector<int> v1 = {5, 4, 3, 2, 1};

    vector<int> v2 = {9, 8, 7, 6, 5};

    reverse_using_stack(v1);

    reverse_using_stack(v2);

    print1d(v1);

    print1d(v2);
    return 0;
}
// #include<vector>
// using namespace std;
// void bubbleSort(vector<int>& arr, int n)
// {
//     for(int i = 1; i<n; i++) {
//         //for round 1 to n-1
//         bool swapped = false;

//         for(int j =0; j<n-i; j++) {

//             //process element till n-i th index
//             if(arr[j] > arr[j+1]) {
//                 swap(arr[j], arr[j+1]);
//                 swapped = true;
//             }

//         }

//         if(swapped == false) {
//             //already sorted
//             break;
//         }

//     }
// }
