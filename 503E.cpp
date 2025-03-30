#include<bits/stdc++.h>
using namespace std;
int n,a[1000000],cnt;
int main()
{
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cnt++;
		a[cnt]=1;
		for(int j=cnt;j>0;j--)
			if(a[j]==a[j-1]) a[j-1]++,a[j]=0,cnt--;
	}
	for(int i=1;i<=cnt;i++)cout<<a[i]<<" ";
	return 0;
}
