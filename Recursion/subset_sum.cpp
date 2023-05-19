// Subset sum using recursion

#include <iostream>
using namespace std;

int subset_sum(int arr[], int n, int sum)
{
    if (n == 0)
        return (sum == 0) ? 1 : 0;
    return subset_sum(arr, n - 1, sum) + subset_sum(arr, n - 1, sum - arr[n - 1]);
}

int main()
{
    int arr[]{10, 20, 15, 5, 5};
    int sum;
    cin >> sum;
    int size = sizeof(arr) / sizeof(arr[0]);
    cout << subset_sum(arr, size, sum);
    return 0;
}

// optimised using dynamic programming
