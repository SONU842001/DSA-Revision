#include <bits/stdc++.h>
using namespace std;

#define endl '\n'
#define int long long

const int MOD = 1e9 + 7;
const int INF = LLONG_MAX >> 1;

bool cmp(pair<int,int>a,pair<int,int>b)
{
   double r1 = (double)a.first/a.second;
   double r2 = (double)b.first/b.second;
   return r1 >r2;
}

int fknap(pair<int,int>arr[],int n,int w)
{
    sort(arr,arr+n,cmp);
    double res = 0.0;

    for(int i = 0;i<n;i++)
    {
        if(arr[i].second <= w)
        {
            res += arr[i].first;
            w = w-arr[i].second;
        }
        else{
            res += arr[i].first * ((double) w / arr[i].second);
             break;
            
        }
    }
    return res;
}


signed main() {
    ios::sync_with_stdio(false); cin.tie(NULL);
        pair<int,int>arr[]={
            make_pair(120,30),make_pair(100,20),make_pair(60,10)
        };
        int n = 3,w =70;

        cout<<fknap(arr,n,w);
    
}







// bool cmp(int n,int m)
// {
//     if(n<m)
//         return true;
//     else
//         return false;
// }





    
