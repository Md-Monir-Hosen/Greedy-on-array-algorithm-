#include<bits/stdc++.h>
using namespace std;
int DecreasingArray(int a[],int n)
{
    int sum,diff;
    priority_queue<int,vector<int>,greater<int>>pq;
    for(int i=0;i<n;i++)
    {
        if(!pq.empty() && pq.top()<a[i])
        {
            diff=a[i]-pq.top();
            sum +=diff;
            pq.pop();
            pq.push(a[i]);
        }
        pq.push(a[i]);
    }
    return sum;
}
int main()
{
    int a[] = { 3, 1, 2, 1 };
    int n = sizeof(a) / sizeof(a[0]);

    cout << DecreasingArray(a, n);

    return 0;
}
