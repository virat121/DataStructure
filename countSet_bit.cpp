// Count set bit
#include <iostream>
using namespace std;
int countSet_bit(int n)
{
    int count = 0;
    while (n > 0)
    {
        if (n & 1 == 1)
            count++;
        n >>= 1;
    }
    return count;
}
int main()
{
    int n;
    cin >> n;
    cout << countSet_bit(n);
    return 0;
}
