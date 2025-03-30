#include<bits/stdc++.h>
using namespace std;
bool cmp(int x,int y)
{
	return (x>y);
}
int s[101];
int main()
{
	int a[10];
	for(int i=1;i<=5;i++) cin>>a[i];
	sort(a+1,a+5+1,cmp);
	int max=-1;
	for(int i=1;i<=5;i++)
	{
		if(a[i]==a[i+1]&&a[i]==a[i+2]) s[i]=s[i]+a[i]*3;
		else if(a[i]==a[i+1]) s[i]=a[i]*2;
		if(s[i]>max)max=s[i];
	}
	int sum=0;
	for(int i=1;i<=5;i++)
	{
		sum+=a[i];
	}
	cout<<sum-max;
	return 0;
}
