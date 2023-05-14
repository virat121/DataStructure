// Power set using bitwise
#include <iostream>
using namespace std;
void printProperSet(string s)
{
    int n = s.length();
    cout << "Power Set using Bitwise" << endl;
    for (int i = 0; i < (1 << n); i++)
    {
        for (int j = 0; j < n; j++)
            if (i & (1 << j))
                cout << (s[j]);
        cout << endl;
    }
}

int main()
{
    string s;
    cin >> s;
    printProperSet(s);
    return 0;
}
