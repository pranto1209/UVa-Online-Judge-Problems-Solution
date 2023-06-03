#include<bits/stdc++.h>
using namespace std;
int pi[100];
void prefix_function(string p)
{
    int j=0;
    for(int i=1; i<p.size(); i++){
        while(j && p[i]!=p[j]) j=pi[j-1];
        if(p[i]==p[j]) j++;
        pi[i]=j;
    }
}
int main()
{
    int t;
    cin>>t;
    while(t--){
        memset(pi, 0, sizeof pi);
        string s;
        cin>>s;
        prefix_function(s);
        int len=s.size();
        int n = len - pi[len-1];
        if(len%n==0) cout<<n<<endl;
        else cout<<len<<endl;
        if(t) cout<<endl;
    }
}
