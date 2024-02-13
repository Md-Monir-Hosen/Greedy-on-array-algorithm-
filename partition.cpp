#include<bits/stdc++.h>
using namespace std;
int maxDifference(int a[],int n,int k)
{
  int M,s=0,s1=0,max_difference=0;
  for(int i=0;i<n;i++)
  {
      s +=a[i];
  }
  sort(a,a+n,greater<int>());
  M=max(n,n-k);
  for(int i=0;i<M;i++)
  {
      s1 +=a[i];
  }
  max_difference=s1-(s-s1);
  return max_difference;
}
int main()
{
     int arr[] = { 8, 4, 5, 2, 10 };
    int N = sizeof(arr) / sizeof(arr[0]);
    int k = 2;
    cout << maxDifference(arr, N, k) << endl;
    return 0;
}
