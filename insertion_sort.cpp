#include<bits/stdc++.h>
using namespace std;
int ins(int a[],int n)
{int val,hole;
    for(int i=0;i<n;i++)
    {
        val=a[i];
        hole=i;
        while(hole>0&&a[hole-1]>val)
        {
            a[hole]=a[hole-1];
            hole--;
        }
        a[hole]=val;
    }
    return 0;
}
int main()
{
int a[]={7,2,1,5,3,4};
ins(a,6);
for(int i=0;i<6;i++)
    cout<<a[i]<<" ";
return 0;
}

