#include <bits/stdc++.h>
using namespace std;
int main()
{
    string str;
    vector<int> v;

    while(1)
    {
    if (cin.peek() != '\n') {
            cin>>str;
        v.push_back(stoi(str));

        }
        else
        {break; //ENTER PRESSED
        }
    }
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<endl;

    return 0;
}
