#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s,t;
    int c=0,i=0,j,f;
    getline(cin,s);
    getline(cin,t);
     while(i<s.length())
     {
         f=1;
         j=0;
         while(j<t.length())
         {
             if(s[i+j]!=t[j])
             {
                    f=0;
                    break;
             }

             j++;
         }
         if(f==1)
            {c++;}

         i++;
     }

    cout<<c;
return 0;
}
