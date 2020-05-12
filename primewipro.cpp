#include<bits/stdc++.h>
using namespace std;
int main()
{
int x,y,sum=0,flag=0;
cin>>x>>y;
for(int i=x;i<=y;i++)
{
    for(int j=2;j<=i/2;j++)
    {
        if(i%j==0)
            {flag=1;}

    if(flag==0){sum+=i;}

    }

}
cout<<sum;
return 0;}
