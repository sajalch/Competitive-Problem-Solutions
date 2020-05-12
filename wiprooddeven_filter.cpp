#include <bits/stdc++.h>
using namespace std;
int main()
{
  int num;
int j;
  cin>>num;
    int arr[num];
  for(int i=0;i<num;i++)          // length of input
  {   cin>>arr[i];
    if(arr[i]%2==0)
        arr[i]*=-1;
  }
sort(arr,arr+num);  //stl sorting function

  for(int i=0;i<num;i++)
  {
      if(arr[i]%2==0)
        arr[i]*=-1;
    cout<<arr[i]<<" ";
  }
  return 0;
}
