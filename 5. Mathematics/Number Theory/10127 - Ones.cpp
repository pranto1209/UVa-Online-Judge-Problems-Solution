#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n){
        int cnt=1, r=1;
        while(r){
            r=(r*10+1)%n;
            cnt++;
        }
        cout<<cnt<<endl;
    }
}
