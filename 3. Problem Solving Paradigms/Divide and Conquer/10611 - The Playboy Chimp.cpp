#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int>v1, v2;
    int n, q, i, x, mn, mx;
    cin>>n;
    for(i=0; i<n; i++) cin>>x, v1.push_back(x);
    cin>>q;
    for(i=0; i<q; i++) cin>>x, v2.push_back(x);
    for(i=0; i<q; i++){
        mn=lower_bound(v1.begin(), v1.end(), v2[i])-v1.begin()-1;
        mx=upper_bound(v1.begin(), v1.end(), v2[i])-v1.begin();
        if(mn>=0 && mn<n && mx>0 && mx<n) cout<<v1[mn]<<" "<<v1[mx]<<endl;
        else if(mn>0 && mx>=n) cout<<v1[mn]<<" "<<"X"<<endl;
        else if(mn<0 && mx<n) cout<<"X"<<" "<<v1[mx]<<endl;
        else cout<<"X"<<" "<<"X"<<endl;
    }
}
