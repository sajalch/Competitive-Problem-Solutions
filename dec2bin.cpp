#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    vector<int> v1;
    cin>>num;
    if(num==0){cout<<endl<<num;}
    else
    {
     while(num>0)
    {
        v1.push_back(num%2);
        num=num/2;
    }
    cout<<endl;

    for(int i=v1.size()-1;i>=0;i--)
    {cout<<v1[i];}
    }


return 0;
}
