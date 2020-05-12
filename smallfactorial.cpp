#include<iostream>
#include<vector>
using namespace std;
int fact(int);
int main()
{
    int t,n;
    unsigned long long factorial = 1;
    cin>>t;
    if(t>100){return 0;}
    vector<long int> res;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        for(int j = 1; j <=n; ++j)
            {
                factorial *= j;
            }

        res.push_back(factorial);
        factorial = 1;
    }
     for(int i=0;i<t;i++)
    {
        cout<<res[i]<<endl;
    }

return 0;
}
int fact(int n)
{
 return n*fact(n-1);
}
