#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n, rem;
    while(cin>>n && n){
        while(n>9){
            rem=n%10;
            n/=10;
            n+=rem;
        }
        cout<<n<<endl;
    }
    return 0;
}
