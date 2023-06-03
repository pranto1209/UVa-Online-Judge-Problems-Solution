#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n){
        map<int, int>m;
        int x, mx=0, cnt=0, a[5];
        while(n--){
            long long v=0;
            for(int i=0; i<5; i++) cin>>a[i];
            sort(a, a+5);
            for(int i=0; i<5; i++){
                v*=1000;
                v+=a[i];
            }
            m[v]++;
            mx=max(mx, m[v]);
        }
        for(auto i: m){
            if(i.second==mx) cnt+=mx;
        }
        cout<<cnt<<"\n";
    }
}
