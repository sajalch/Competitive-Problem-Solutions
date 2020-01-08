/*
Question Link: https://www.codechef.com/problems/HS08TEST

 BY ********SAJAL CHAKRABORTY (Undergrade at CIT Kokrajhar)********
*/
#include<iostream>
using namespace std;
int main()
{
    int withdraw;
    float amount,remain;
    cin>>withdraw>>amount;
    if(withdraw%5==0)
    {
        if(withdraw+.50>amount)
        {
            cout<<amount;
        }
        else
        {
            remain=amount-withdraw-.50;
            cout<<remain;
        }

    }
    else
        cout<<amount;
return 0;
}
