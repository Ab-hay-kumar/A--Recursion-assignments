
#include <iostream>
using namespace std;

int keypadsequence(int n, string output[], string key[])
{
    if (n == 0 or n == 1)
    {
        output[0] = " ";
        return 1;
    }
    int c = n % 10;
    int d = n / 10;
    int size = keypadsequence(d, output, key);
    string str = key[c];
    if (str.length() == 3)
    {
        int k = size;
        int j = 0;
        while (j < 3)
        {
            for (int i = 0; i < k; i++)
            {
                output[size + i] = str[j] + output[i];
            }
            j++;
            size = size + k;
        }
        return size;
    }
    else if (str.length() == 4)
    {
        int j = 0;
        int k = size;
        while (j < 3)
        {
            for (int i = 0; i < size; i++)
            {
                output[size + i] = str[j] + output[i];
            }
            j++;
            size = size + k;
        }
        return size;
    }
}

int main()
{
    int n;
    n = 234;
    string key[20] = {"x", "x", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    string output[2000];
    int size = keypadsequence(n, output, key);
    int i = 0;
    cout << size << " ";
    while (i < size)
    {
        cout << output[i] << endl;
        i++;
    }
}
