
#include <iostream>
#include <math.h>
using namespace std;

float geometricsum(int m, int count)
{
    if (count == m + 1)
    {
        return 0;
    }
    float ans = geometricsum(m, count + 1);
    return (1 / (pow(2, count))) + ans;
}

int main()
{
    int m = 4;
    float ans = geometricsum(m, 0);
    cout << ans;
}