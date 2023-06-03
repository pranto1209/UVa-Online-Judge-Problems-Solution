#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s, t;
    while(cin>>s>>t){
        int j=0, cnt=0;
        for(int i=0; i<s.size(); i++){
            while(j<t.size()){
                if(s[i]==t[j]) {j++;cnt++;break;}
                else j++;
            }
            if(j==t.size()) break;
        }
        if(cnt==s.size()) cout<<"Yes\n";
        else cout<<"No\n";
    }
}
