#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int ans,a[100010],b,n,m;
int main(void)
{
	cin>>n>>m;
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n);
	while(m>0)
	{
		n--;
		m-=a[n];
		ans++;
	}
	cout<<ans;
	return 0;
}
