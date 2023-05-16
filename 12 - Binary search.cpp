
#include <iostream>
using namespace std;

int binarysearch(int arr[], int x, int s, int e)
{
    if (s > e)
    {
        return -1;
    }

    int mid = (s + e) / 2;

    if (arr[mid] == x)
    {
        return mid;
    }
    else if (arr[mid] > x)
    {
        return binarysearch(arr, x, s, mid - 1);
    }
    else
    {
        return binarysearch(arr, x, mid + 1, e);
    }
}

int main()
{
    int arr[] = {2, 3, 4, 5, 6, 8};
    int s = 0;
    int e = 5;
    int ans = binarysearch(arr, 5, s, e);
    cout << ans;
}
