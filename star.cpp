#include<bits/stdc++.h>
using namespace std;

int main()
{
int n,k=1;
cin>>n;
for(int i=1;i<=n;i++)
{
   // for(int j=n;j>=i;j--)
    //{
      //  cout<<"  ";
    //}

    for(int j=1;j<=2*i-1;j++)
    {
        cout<<k<<" ";
        k++;
    }
    cout<<endl;
}

return 0;
}
