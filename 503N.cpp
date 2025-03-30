#include<bits/stdc++.h>
using namespace std;
int n, s, x;
int b[100];
int main()
{
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cin >> x;
		b[x] = 1;
	}
	x = 0;
	for (int i = 1; i <= 90; i++)
	{
		if (!b[i])x++;
		else x = 0;
		s++;
		if (x >= 15)break;
	}
	cout << s;
	return 0;
}
