#include<iostream>
using namespace std;
int main()
{
    int n,k,tot=0;
    cin>>n>>k;
    long int t;
    for(int i=0;i<n;i++)
    {
        cin>>t;
        if(t%k==0)
        {
            tot++;
        }
    }
    cout<<tot<<endl;
return 0;
}
