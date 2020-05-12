/*#include<bits/stdc++.h>
using namespace std;

string norepeat(string s)
{
    string p;
    bool match=false;
    int x=s.length();
    for(int i=0;i<x;i++)
    {
        for(int j=i+1;j<x;j++)
        {
            if(s[i]!=s[j]&&s[i]!=p[i])
                 match=false;
            else
            {
               match=true;break;
            }

        }
        if(!match)
        {
             p.push_back(s[i]);
        }

    }
    int y=p.length();

    if((x/y)*100>=90)
        return p;
    return s;
}
int main()
{
    string s="KGEYGABCGENE";
    cout<<norepeat(s);
    return 0;
}
*/

// C++ implementation of above approach
#include <bits/stdc++.h>
using namespace std;


string removeDuplicate(string str)  //O(n^2)
{
   // Used as index in the modified string
   int index = 0,n=str.length(),i,j;

   for (i=0; i<n; i++)
    {
     for (j=0; j<=i; j++)
        if (str[i] == str[j])
           {break;}
    cout<<i<<"->"<<j<<" ";
     if (j == i)
        {str[index++] = str[i];}
   }
   return str.substr(0,index);
}

// Function to remove duplicates
string removeDuplicatesFromString(string str) //O(n)
{

    // keeps track of visited characters
    int counter = 0;

    int i = 0;
    int size = str.size();int j;

    // gets character value
    int x;

    // keeps track of length of resultant string
    int length = 0;

    while (i < size) {
        x = str[i] - 'a';
        // check if Xth bit of counter is unset
       if ((counter & (1 << x)) == 0) {

            str[length] = 'a' + x;
            // mark current character as visited
            counter = counter | (1 << x);

            length++;
        }
        i++;
    }

    return str.substr(0, length);
}

// Driver code
int main()
{
    string str = "keygen";
    cout << removeDuplicate(str);
    return 0;
}
