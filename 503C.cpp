#include<bits/stdc++.h>
using namespace std;
long long n,m,i,j,sum;bool flag[105]={false};
int main()
{
    cin>>n>>m;
    for(i=1;i<=n;i++)
    {
        cin>>sum;
        while(sum--)
        {
            cin>>j;
            flag[j]=true;
        }
    }
    for(i=1;i<=m;i++)
    {
        if(flag[i]==false)
            {
                cout<<"NO"<<endl;
                return 0;
            }
    }
    cout<<"YES"<<endl;
    return 0;
}
