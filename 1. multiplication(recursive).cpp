
#include <iostream>
using namespace std;

int multiply(int m, int n)
{
    if (n == 0)
    {
        return 0;
    }
    int smalleroutput = multiply(m, n - 1);
    return m + smalleroutput;
}

int main()
{
    int m = 9;
    int n = 4;
    int ans = multiply(m, n);
    cout << ans;
}