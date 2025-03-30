#include<bits/stdc++.h>
using namespace std;
int main(void)
{
    int a,b,c;
    cin >> a >> b >> c;
    int first = a + b + c;
    int second = a * 2 + b * 2;
    int third = a*2 + c*2;
    int forth = b*2 + c*2;
    cout <<min(first, min(second, min(third, forth)));
    return 0;
}
