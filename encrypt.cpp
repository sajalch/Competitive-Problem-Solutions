#include<bits/stdc++.h>
using namespace std;

string encrypt(string s,int k)
{
    int i=0;
    while(s[i]!='\0'||s[i]==' ')
    {
        if(s[i]==' ')
            {s[i]=' ';}
        else
        {int ascii='A'+(s[i]+k-'A')%26;
            s[i]=char(ascii);
        }
        i++;
    }

    return s;
}
string decrypt(string s,int k)
{
    int i=0;
    while(s[i]!='\0'||s[i]==' ')
    {
        if(s[i]==' ')
            {s[i]=' ';}
        else
        {int ascii='A'+(s[i]-k-'A')%26;
            s[i]=char(ascii);
        }
        i++;
    }

    return s;
}

int main()
{
    int key=3;
    string s="HELLO WORLD BRO";
    //getline(cin,s);
    s=encrypt(s,key);
    cout<<s<<endl;
    cout<<decrypt(s,key)<<endl;

    //
    //cout<<char(ascii);
    return 0;
}
