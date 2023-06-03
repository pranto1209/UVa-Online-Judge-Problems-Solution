#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int i, a[3001], m[3001]= {0}, f=0;
        for(i=0; i<n; i++) cin>>a[i];
        for(i=1; i<n; i++){
            int d=abs(a[i]-a[i-1]);
            if(d<n) m[d]++;
        }
        for(i=1; i<n; i++) if(m[i]==0) {f=1;break;}
        if(f) cout<<"Not jolly\n";
        else cout<<"Jolly\n";
    }
}
