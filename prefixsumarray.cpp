#include<iostream>

using namespace std;

int main()
{
    int a[]={1,2,3,4,5},b[5];

    for(int i=0;i<5;i++)
    {
        cout<<a[i]<<" ";
    }
cout<<endl;
    for(int i=0;i<5;i++)
    {
       if(i==0){b[i]=a[i];}
                b[i]=b[i-1]+a[i];

        cout<<b[i]<<" ";
    }
    return 0;
}
