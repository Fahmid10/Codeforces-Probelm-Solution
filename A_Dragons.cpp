#include<bits/stdc++.h>
using namespace std;
typedef long long int lli;
#define fast_io ios_base::sync_with_stdio(false);cin.tie(NULL)
int main()
{
    fast_io;
    int s, n;
    cin>>s>>n;

    vector<pair<int, int>>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i].first>>a[i].second;
    }
    sort(a.begin(), a.end());

    for(int i=0; i<n; i++){
        if( s > a[i].first){
            s += a[i].second;
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;
    return 0;
}