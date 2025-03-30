#include<bits/stdc++.h>
using namespace std;
int n,c,i,ti1,ti2,sum1,sum2,p[100],t[100];
int main(void){
	cin>>n>>c;
	for(i=1;i<=n;i++) cin>>p[i];
	for(i=1;i<=n;i++) cin>>t[i];
	for(i=1;i<=n;i++)
	{
		ti1+=t[i];
		sum1+=max(0,p[i]-c*ti1);
	}
	for(i=n;i>=1;i--)
	{
		ti2+=t[i];
		sum2+=max(0,p[i]-c*ti2);
		if(sum2>sum1) 
    {
      cout<<"Radewoosh";
      return 0;
    }
	}
	if(sum1==sum2) cout<<"Tie";
	else cout<<"Limak";
	return 0;
}
