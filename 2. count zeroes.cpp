
#include <iostream>
using namespace std;

int countzero(int n)
{
    if (n == 1 || n == 0)
    {
        return 0;
    }
    if (n % 10 == 0)
    {
        int m = n / 10;
        int smalleroutput = countzero(m);
        return 1 + smalleroutput;
    }
    else
    {
        int rem = n % 10;
        int m = (n - rem) / 10;
        int smalleroutput = countzero(m);
        return smalleroutput;
    }
}

int main()
{
    int n = 708000;
    int ans = countzero(n);
    cout << ans;
}
