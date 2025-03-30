#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        string a;
        int b, c;
        cin >> a >> b >> c;
        if (c - b > 0 && b >= 2400)
            ans++;
        if (ans >= 1)
        {
            cout << "YES" << endl;
            return 0;
        }
    }
    cout<<"NO"<<endl;
    return 0;
}
