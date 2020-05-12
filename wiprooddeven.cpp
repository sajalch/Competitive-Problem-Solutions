#include <iostream>
using namespace std;
int main()
{
  int num,no,count=0,j=0,muleve=1,mulodd=1;
  cin>>num;
  no=num;
  for(int i=0;i<no;i++)          // length of input
  {   ++count;
      no=no/10;
  }
  int arr[count];
  for(int i=0;i<=count;i++)
  {
      arr[i]=num%10;
      num=num/10;
      if(arr[i]%2==0)
      {
          muleve*=arr[i];
      }
      else
         {
          mulodd*=arr[i];
         }
  }
cout<<muleve+mulodd<<endl;

  return 0;
}
