#include<bits/stdc++.h>
using namespace std;
int maximumSum(int a[],int n,int k)
{
    for(int i=0;i<k;i++)
    {
        int Min =INT_MAX;
        int index=-1;
        for(int j=0;j<n;j++)
        {
            if(a[j]<Min)
            {
                Min=a[j];
                index=j;
            }
        }
        if(Min==0)
        {
            break;
        }
        a[index]=-a[index];
    }
    int sum=0;
    for(int i=0;i<n;i++)
    {
        sum +=a[i];
    }
    return sum;
}
int main()
{
      int arr[] = { -2, 0, 5, -1, 2 };
    int k = 4;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << maximumSum(arr, n, k);
    return 0;
}
