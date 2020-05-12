#include<bits/stdc++.h>
using namespace std;

string stringrev(string s)
{
    string temp;int j=0;
    for(int i=s.length()-1;i>=0;i--)
    {
        temp.push_back(s[i]);
    j++;
    }
    return temp;
}
string split(string s,int i)
{
 string sub;
 while(s[i]!='\0')
 {
      sub.push_back(s[i]);
      if(s[i]==' ')
      {
          break;
      }
     i++;
 }
cout<<stringrev(sub.substr(0,i));
if(s[i]=='\0')
   {
       return "";
    }
else
    {
        return split(s,i+1);

    }
}
string conversion(string s)
{
    s+=" ";
    return split(s,0);
}
int main()
{
    string s="Welcome to cit kokrajhar";
    cout<<conversion(s);

    return 0;
}
