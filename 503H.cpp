#include <bits/stdc++.h>
using namespace std;
int main(void)
{
	int n,t=0,c=0;
	char ch[105][105];
	cin>>n;
	for(int i=1;i<=n;i++)
	 for(int j=1;j<=n;j++)
	  cin>>ch[i][j];
	for(int i=1;i<=n;i++)
	{
		c=0;
		for(int j=1;j<=n;j++)
		{
			if(ch[i][j]=='C')
			c++;
		}
		t+=(c*(c-1))/2;
	}
	for(int j=1;j<=n;j++)
	{
		c=0;
		for(int i=1;i<=n;i++)
		{
			if(ch[i][j]=='C')
			c++;
		}
		t+=(c*(c-1))/2;
	}
	cout<<t;
}
