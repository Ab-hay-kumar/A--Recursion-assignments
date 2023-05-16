
#include <iostream>
using namespace std;

void replace(char s[], char a, char x)
{
    if (s[0] == '\0')
    {
        return;
    }

    if (s[0] != 'a')
    {
        replace(s + 1, a, x);
    }
    else
    {
        s[0] = 'x';
        replace(s + 1, a, x);
    }
}

int main()
{
    char s[10] = "abacd";

    replace(s, 'a', 'x');
    cout << s;
}