// checking for the power of two
#include <iostream>
using namespace std;
// naive approach
/* bool isPow2(int n)
{
    if (n == 0)
        return false;
    while (n != 1)
    {
        if (n % 2 != 0)
            return false;
        n >>= 2;
    }
    return true;
} */
// efficient approach using Brian Kernighm algorithm
bool isPow2(int n)
{
    if (n == 0)
        return false;
    return ((n & (n - 1)) == 0);
}
int main()
{
    int n;
    cin >> n;
    if (isPow2(n))
        cout << "Number is power of 2" << endl;
    else
        cout << "Number is not power of two" << endl;
    return 0;
}
