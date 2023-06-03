#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++){
        int a, b, sum=0;
        cin>>a>>b;
        if(a%2==0) a++;
        for(int i=a; i<=b; i+=2) sum+=i;
        printf("Case %d: %d\n", i, sum);
    }
}
