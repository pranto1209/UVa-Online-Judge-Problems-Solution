#include<bits/stdc++.h>
using namespace std;
#define maxn 20000000
vector<int>primes, pr(maxn, 1);
vector<pair<int, int>>ans;
void sieve()
{
    int n=maxn;
    pr[1]=0;
	for(int i=4; i<=n; i+=2) pr[i]=0;
	for(int i=3; i*i<=n; i+=2){
		if(pr[i]){
			for(int j=i*i; j<=n; j+=i) pr[j]=0;
		}
	}
    for(int i=1; i<=n; i++) if(pr[i]) primes.push_back(i);
    for(int i=0; i<primes.size()-1; i++){
        if(primes[i]+2 == primes[i+1]) ans.emplace_back(primes[i], primes[i+1]);
    }
}
int main()
{
    sieve();
    int s;
    while(cin>>s){
        printf("(%d, %d)\n", ans[s-1].first, ans[s-1].second);
    }
}
