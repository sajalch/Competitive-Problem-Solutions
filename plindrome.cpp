#include<iostream>
#include<string.h>
using namespace std;
int main()
{
    string s1,s2;
    cin>>s1;
    int len=0,i,j,flag=0;
    len=s1.length()-1;
    for(i=0,j=len;j>=0;i++,j--)
    {
        s2[i]=s1[j];

    }
for(i=0;i<=len;i++)
    //cout<<s2[i];
   {
       if(s1[i]==s2[i])
            flag=1;
   else
       flag=0;
   }
   if(flag==1){cout<<"palindrome";}else{cout<<"not palindrome";}
    return 0;
}
