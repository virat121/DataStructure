// printing all permutation of strings

#include <iostream>
using namespace std;

void permute(string str, int index = 0)
{
    if (index == str.length() - 1)
    {
        cout << str << " ";
        return;
    }
    for (int j = index; j < str.length(); j++)
    {
        swap(str[index], str[j]);
        permute(str, index + 1);
        swap(str[j], str[index]);
    }
}

int main()
{
    string str;
    cin >> str;
    permute(str);
    return 0;
}
