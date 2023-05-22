// radix_sort

#include <iostream>
#include <vector>
using namespace std;

void count_sort(vector<int> &v, int pos)
{
    int n = v.size();
    // create frequency array
    vector<int> freq(10, 0);
    for (int i = 0; i < n; i++)
    {
        freq[(v[i] / pos) % 10]++;
    }

    // cumulative frequency
    for (int i = 1; i < 10; i++)
    {
        freq[i] += freq[i - 1];
    }

    // ans array
    vector<int> ans(n);

    for (int i = n - 1; i >= 0; i--)
    {
        ans[--freq[(v[i] / pos) % 10]] = v[i];
    }

    for (int i = 0; i < n; i++)
    {
        v[i] = ans[i];
    }
}

void radixSort(vector<int> &v)
{
    int n = v.size();
    // max element
    int max_ele = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        if (v[i] > max_ele)
            max_ele = v[i];
    }
    for (int pos = 1; max_ele / pos > 0; pos *= 10)
    {
        count_sort(v, pos);
    }
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    radixSort(v);
    for (int i = 0; i < n; i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    return 0;
}
