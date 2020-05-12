#include<bits/stdc++.h>
using namespace std;
//void rev(char *s)
//{
  //  if(*s)
    //{
      //  rev(s+1);
        //cout<<*s;
    //}

//}
int main()
{
string s,t;
    //char s[100];
    //scanf("%[^\n]s",);
    getline(cin,s);
    //rev(s);
    for(int i=s.length()-1;i>=0;i--)
       {
       if(s[i]!=' ')
            t[i]=s[i];
        else
            t[i]=' ';
        //cout<<t[i];
       }
       for(int i=s.length()-1;i>=0;i--)
            cout<<t[i];
return 0;
}

