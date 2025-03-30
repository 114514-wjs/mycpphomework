#include <bits/stdc++.h>
using namespace std;
int a[100 + 10];
int main()
{
    int n, i, min1 = 999999, max1 = -1, z1, z2;
    cin >> n;
    for (i = 1; i <= n; i++)
    {
        cin >> a[i];
        if (a[i] < min1)
        {
            min1 = a[i];
            z1 = i;
        }
        if (a[i] > max1)
        {
            max1 = a[i];
            z2 = i;
        }
    }
    cout << max(max(z2 - 1, n - z2), max(z1 - 1, n - z1));
    return 0;
}
