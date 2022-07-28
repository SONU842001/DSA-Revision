#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool cmp(pair<int,int>a,pair<int,int>b)
{
    return a.second<b.second;
}

int max_activities(pair<int,int>arr[],int n)
{
    int count =1,prev =0;
    sort(arr,arr+n,cmp);
    for(int i=1;i<=n;i++)
    {
        if(arr[i].first>=arr[prev].second)
        {
            count++;
            prev = i;

        }
    }
    return count;
}


signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
        pair<int,int>arr[]={
            make_pair(12,25),make_pair(10,20),make_pair(20,30)
        };
        int n = 3;

        cout<<max_activities(arr,n);
    
}







// bool cmp(int n,int m)
// {
//     if(n<m)
//         return true;
//     else
//         return false;
// }





    
