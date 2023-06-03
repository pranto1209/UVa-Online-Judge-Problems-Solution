#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    while(cin>>n && n){
        int a=0, b=0, x=1;
        for(int i=0; i<31; i++){
            if((1<<i) & n){
                if(x) a |= (1<<i);
                else b |= (1<<i);
                x^=1;
            }
        }
        cout<<a<<" "<<b<<"\n";
    }
}
