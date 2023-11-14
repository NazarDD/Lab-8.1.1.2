#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string>
using namespace std;

int Count(const string& str, int i)
{
    if (str.length() < 5)
        return 0;
    int k = 0;
    for (int i = 0; str[i] != 0; i++)
        if (str[i] == 'w' && str[i + 1] == 'h' && str[i + 2] == 'i' && str[i + 3] == 'l' && str[i + 4] == 'e')
            k++;
    return k;
}

std::string Change(std::string& str, size_t pos)
{
    while ((pos = str.find('w', pos)) != -1)
        if (str[pos + 1] == 'h' && str[pos + 2] == 'i'&& str[pos + 3] == 'l'&& str[pos + 4] == 'e')
            str.replace(pos, 5, "***");
        else
            pos++;
    return str;
}

int main()
{
    string str;
    cout << "Enter string:" << endl;
    getline(cin, str);

    cout << "String contained " << Count(str, 0) << " occurrences of 'while'" << endl;

    string modified = Change(str, 0);

    cout << "Modified string: " << modified << endl;

    return 0;
}
