// bucket sort

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void bucketSort(float arr[], int n)
{

    vector<vector<float>> bucket(n, vector<float>());

    float max_ele = arr[0];
    float min_ele = arr[0];

    for (int i = 1; i < n; i++)
    {
        max_ele = max(max_ele, arr[i]);
        min_ele = min(min_ele, arr[i]);
    }

    float range = (max_ele - min_ele) / n;
    for (int i = 0; i < n; i++)
    {

        int index = (arr[i] - min_ele) / range;
        // boundary element
        float diff = (arr[i] - min_ele) / range - index;
        if (diff == 0 && arr[i] != min_ele)
            bucket[index - 1].push_back(arr[i]);
        else
            bucket[index].push_back(arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (!bucket[i].empty())
            sort(bucket[i].begin(), bucket[i].end());
    }
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            arr[k++] = bucket[i][j];
        }
    }
}

int main()
{
    float arr[] = {0.13, 0.45, 0.12, 0.89, 0.75, 0.63, 0.85, 0.39, 0.12};
    int size = sizeof(arr) / sizeof(arr[0]);

    bucketSort(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
