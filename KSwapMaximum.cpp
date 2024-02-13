#include<bits/stdc++.h>
using namespace std;
void KSwapMaximum(int a[],int n,int k)
{
  for(int i=0;i<n-1 && k>0;++i)
  {
      int indexPosition =i;
      for(int j=i+1;j<n;++j)
      {
          if(k<=j-1)
          {
              break;
          }
          if(a[j]>a[indexPosition])
          {
              indexPosition=j;
          }
      }
      for(int j=indexPosition;j>i;--j)
      {
          swap(a[j],a[j-1]);
      }
      k -=indexPosition-i;
  }
}
int main()
{
    int arr[] = { 3, 5, 4, 1, 2 };
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;

    KSwapMaximum(arr, n, k);

    // Print the final Array
    for (int i = 0; i < n; ++i)
        cout << arr[i] << " ";
}
