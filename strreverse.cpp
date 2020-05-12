#include<bits/stdc++.h>
using namespace std;


int rev(string s,int k)
{int j=0,i=0;
string p;
while(s[i]!='\0')
{
while(s[i]!=' ')
{
    i++;
}
for(j=0,i;j!=i;j++,i--)
{
    p[j]=s[i];
}
cout<<p[i];
i++;
}

return 0;
}
int main()
{
    string s;
    getline(cin,s);
    rev(s,s.length());


    return 0;
}
