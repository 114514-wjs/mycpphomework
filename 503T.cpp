#include<bits/stdc++.h>
using namespace std;
long long n, x, ans;
int main() {
	long long n, x, ans = 0;
	cin >> n >> x;
	char c;
	for (int i = 1; i <= n; i++) {
		int d;
		cin >> c >> d;
		if (c == '+') x += d;
		else
			if (x - d >= 0) {
				x -= d;
			}
			else ans++;
	}
	cout << x << ' ' << ans;
	return 0;
}
