#include<bits/stdc++.h>
using namespace std;
#define maxn 1000001
bool status[maxn];
void sieve()
{
    status[1]=1;
	for(int i=4; i<=maxn; i+=2) status[i]=1;
	for(int i=3; i*i<=maxn; i+=2){
		if(status[i]==0){
			for(int j=i*i; j<=maxn; j+=i) status[j]=1;
		}
	}
}
int main()
{
    sieve();
    int n;
    while(cin>>n && n){
        int f=1;
        for(int i=3; i<=n/2; i++){
            if(status[i]==0)
                if(status[n-i]==0){
                    printf("%d = %d + %d\n", n, i, n-i);
                    f=0;
                    break;
                }
        }
        if(f) puts("Goldbach's conjecture is wrong.");
    }
}
