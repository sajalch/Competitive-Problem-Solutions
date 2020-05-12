#include<bits/stdc++.h>
using namespace std;

int main()
{
    ostringstream ss;
    float a,b;
    cin>>a>>b;
    a=a/b;
   // cout<<a;
    ss<<a;
    string s=ss.str();
    int i=0;
    while(s[i]!='.')
    {
        i++;
    }
    cout<<s.substr(0,i)<<endl;
    cout<<s.substr(i+1,s.length()-1);

    return 0;
}
