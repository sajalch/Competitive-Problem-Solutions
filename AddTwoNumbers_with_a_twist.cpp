/*Add two numbers condition t times we have to take input a,b and show their sum for each pair
i/p:
5
2 3
4 5
6 7
8 9
2 1
o/p:
5
9
13
17
3
      BY ********SAJAL CHAKRABORTY (Undergrade at CIT Kokrajhar)********
*/
#include <iostream>
#include<vector>
using namespace std;

int main()
{
    int t,a,b;
    cin>>t;
    vector<int> g;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        g.push_back(a+b);
    }
     for(int i=0;i<t;i++)
    {
        cout<<g[i]<<endl;
    }
return 0;
}
