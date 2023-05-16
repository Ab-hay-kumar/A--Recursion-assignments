
#include <iostream>
using namespace std;

void remduplicates(char s[])
{
    if (s[0] == '\0')
    {
        return;
    }
    if (s[0] == s[1])
    {
        int i = 1;
        for (; s[i] != '\0'; i++)
        {
            s[i - 1] = s[i];
        }
        s[i - 1] = s[i];
        remduplicates(s);
    }
    else
    {
        remduplicates(s + 1);
    }
}

int main()
{
    char s[20] = "xxxyyywwzzz";
    cout << s;
    remduplicates(s);
    cout << s;
}