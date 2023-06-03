#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a, b;
    while(cin>>a>>b){
        if(a==0 && b==0) break;
        int cr=0, cnt=0;
        while(a || b){
            cr=(a%10+b%10+cr)/10;
            if(cr) cnt++;
            a/=10;
            b/=10;
        }
        if(cnt==0) cout<<"No carry operation."<<endl;
        else if(cnt==1) cout<<cnt<<" carry operation."<<endl;
        else cout<<cnt<<" carry operations."<<endl;
    }
}
