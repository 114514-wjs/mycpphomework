#include <bits/stdc++.h>
using namespace std;
int n, k, a, gs;
int main()
{
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        cin >> a;
        if (a > k)gs += 2;
        else gs++;
    }
    cout << gs;
    return 0;
}
