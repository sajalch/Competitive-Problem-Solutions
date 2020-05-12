#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,counting=1;cin>>n;
    int a[n-1];
    for(int i=0;i<n-1;i++)
        cin>>a[i];
    for(int i=0;i<n-1;i++)
    {
       for(int j=0;j<n-1;j++)
       {
           if(a[i]==a[j])
           {
               counting++;
           }
       }
        if(counting%2!=0)
            {
                cout<<a[i]<<endl;
                break;
            }
    }


    return 0;
}
