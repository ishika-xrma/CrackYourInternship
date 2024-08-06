#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

void printDuplicates(string str);

int main()
{
    string str;
    getline(cin , str);
    printDuplicates(str);
    return 0;
}

void printDuplicates(string str)
{
    int n = str.size();
    sort(str.begin(), str.end());
    int i = 0;
    while (i < n - 1)
    {
        if (str[i + 1] == str[i])
        {
            cout << str[i] << endl;
            while (i < n - 1 && str[i + 1] == str[i])
            {
                i++;
            }
        }
        i++;
    }
}