#include<bits/stdc++.h>
using namespace std;
void binary_search(int a[], int left_index, int right_index, int key)
{
    int mid_index = (left_index + right_index) / 2;
    if (left_index > right_index) {
        cout << "Element not found";
        return;
    }

    else if (a[mid_index] == key)
    {
        cout << "Element found at position : " << mid_index + 1;
        return;
    }
    else if (a[mid_index] < key)
        binary_search(a, mid_index + 1, right_index, key);
    else if (a[mid_index] > key)
        binary_search(a, left_index, mid_index - 1, key);

}

int main() {
    int n;
    cin >> n;
    int arr[n], key;
    for (int i = 0;i < n;i++)
        cin >> arr[i];

    cout << "Enter Key element : ";
    cin >> key;

    // binary search can be apply only on sorted array.
    sort(arr, arr + n);
    binary_search(arr, 0, n, key);

/*
        {
         Best case Time complexity  : O(1) 
         Worst case Time complexity : O(log(n))  => log base 2

         Auxiliary space complexity : O(1)

        }
*/

    return 0;
   
}
