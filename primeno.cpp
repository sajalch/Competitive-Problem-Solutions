#include <iostream>
using namespace std;
int main()
{
  int n, i,sum=0;
  bool isPrime = true;
  cin >>n;
      for(i = 2; i <= n /2;i++)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }

  }
  if(isPrime){
        cout<<"Prime";return 0;
  }
cout<<"Not Prime";
  return 0;
}
