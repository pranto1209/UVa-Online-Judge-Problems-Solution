#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    cin.ignore();
    while(n--){
        vector<int>v;
        string s;
        int m, g, mx=0;
        getline(cin, s);
        stringstream sin(s);
        while(sin>>m) v.push_back(m);
        for(int i=0; i<v.size()-1; i++){
            for(int j=i+1; j<v.size(); j++){
                g=__gcd(v[i], v[j]);
                mx=max(mx, g);
            }
        }
        cout<<mx<<"\n";
    }
}
