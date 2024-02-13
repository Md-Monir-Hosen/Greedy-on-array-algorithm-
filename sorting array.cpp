#include<bits/stdc++.h>
using namespace std;
bool ifPossible(int a[],int n)
{
    int cp[n];
    copy(a,a+n,cp);
    sort(cp,cp+n);
    for(int i=0;i<n;i++)
    {
        if(!(a[i]==cp[i]) && !a[n-1-i]==cp[i])
        {
            return false;
        }
    }
    return true;
}
int main()
{
      int arr[] = { 1, 7, 6, 4, 5, 3, 2, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);
    if (ifPossible(arr, n))
       cout << "Yes";
    else
       cout << "No";

    return 0;
}
