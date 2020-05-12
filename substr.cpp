#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s="ababcd",t="abcd";
    int sl,tl;
    sl=s.length();
    tl=t.length();

    int cache[sl][tl];
    string out="";
    if(sl==0||tl==0)
        cout<<out;

    for(int i=0;i<sl;i++)
    {
        for(int j=0;j<tl;j++)
        {
            if(s[i]==t[j])
            {
                if(i==0||j==0)
                    cache[i][j]=1;
                else
                {
                    cache[i][j]=cache[i-1][j-1]+1;
                }

                if(cache[i][j]>out.length())
                {
                    out=s.substr(i-cache[i][j]+1,i+1);
                }

            }
        }

    }
    cout<<out<<endl;

    return 0;
}
