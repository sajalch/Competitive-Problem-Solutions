#include <iostream>
using namespace std;
int main()
{
  int j,m, i,sum=0;
  bool isPrime = true;
  cin >> j>>m;
  for(int n=j;n<=m;n++)
  { isPrime = true;
      for(i = 2; i <= n /2;i++)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }

  }
  if(isPrime){
        sum+=n;
  }
  }
  cout<<sum;
  return 0;
}
