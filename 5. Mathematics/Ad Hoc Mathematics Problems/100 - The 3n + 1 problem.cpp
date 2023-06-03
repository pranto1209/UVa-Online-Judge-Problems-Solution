#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while(cin>>a>>b){
        int n, cnt, mx=0;
        printf("%d %d ", a, b);
        if(a>b) swap(a, b);
        for(int i=a; i<=b; i++){
            cnt=0, n=i;
            while(n!=1){
                if(n%2) n=3*n+1, cnt++;
                else n/=2, cnt++;
            }
            cnt++;
            mx=max(mx, cnt);
        }
        cout<<mx<<endl;
    }
}
