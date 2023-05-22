// count sort for bot +ve and -ve numbers

#include <iostream>
#include <algorithm>
using namespace std;

void count_sort(int arr[], int n)
{
    int max_ele = *max_element(arr, arr + n);
    int min_ele = *min_element(arr, arr + n);

    int range = max_ele - min_ele + 1;

    // frequency arrays
    vector<int> freq(range, 0);
    for (int i = 0; i < n; i++)
        freq[arr[i] - min_ele]++;

    // cumulative frequency
    for (int i = 1; i < range; i++)
        freq[i] += freq[i - 1];

    vector<int> ans(n);
    for (int i = n - 1; i >= 0; i--)
    {
        ans[freq[arr[i] - min_ele] - 1] = arr[i];
        freq[arr[i] - min_ele]--;
    }
    // ans[freq[arr[i] - min_ele]--] = a[i];

    for (int i = 0; i < n; i++)
        arr[i] = ans[i];
}

int main()
{
    int arr[] = {12, -3, 89, 34, 13, -4, -91, 56, 0, -1};
    int n = sizeof(arr) / sizeof(arr[0]);
    count_sort(arr, n);

    // printing the sorted array
    for (int i = 0; i < n; i++)
        cout << arr[i] << " ";
    cout << endl;
    return 0;
}
