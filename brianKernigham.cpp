// Brian Kernigham Algorithm to count set bit

#include <iostream>
using namespace std;
int bk_algo(int n)
{
    int count = 0;
    while (n > 0)
    {
        n = (n & (n - 1));
        count++;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << bk_algo(n) << endl;
    return 0;
}
