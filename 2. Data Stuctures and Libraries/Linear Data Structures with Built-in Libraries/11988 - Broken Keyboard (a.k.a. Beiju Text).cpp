#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    while(cin>>s){
        list<char>lst;
        auto it = lst.begin();
        for(int i=0; i<s.size(); i++){
            if(s[i]=='[') it = lst.begin();
            else if(s[i]==']') it = lst.end();
            else{
                it = lst.insert(it, s[i]);
                it++;
            }
        }
        for(auto i: lst) cout<<i;
        cout<<endl;
    }
}
