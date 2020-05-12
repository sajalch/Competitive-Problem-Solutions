#include<bits/stdc++.h>
using namespace std;

int fibo(int n)
{
    if(n<2){return n;}
    else return fibo(n-1)+fibo(n-2);

    /*int t1=0,t2=1,nextterm=0;
    for(int i=1;i<=n;i++)
    {
        cout<<t1<<" ";
        if(i==8){break;}
        nextterm=t1+t2;
        t1=t2;
        t2=nextterm;
    }*/
}

int main()
{
    int n;
    cin>>n;
    cout<<fibo(n);
    return 0;
}
