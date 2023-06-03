#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int s, d, x, y;
        cin>>s>>d;
        x=(s+d)/2;
        y=s-x;
        if(x>=0 && y>=0 && x+y==s && x-y==d) cout<<x<<" "<<y<<endl;
        else cout<<"impossible\n";
    }
}
