#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s,t;
    getline(cin,s);
    int len,c,sum=0;
    len=s.length();
    int count[len];
    t=s;
    for(int i=0;i<len;i++)
    { c=0;
        for(int j=0;j<len;j++)
        {
            if(s[i]==t[j])
                c+=1;
        }
        count[i]=c;
    }
    for(int i=0;i<len;i++)
       if(count[i]==1){sum+=1;}

    cout<<sum;
    return 0;
}
