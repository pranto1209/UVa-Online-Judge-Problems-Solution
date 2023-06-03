#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[10000];
    while(gets(s)){
        int cnt=0;
        for(int i=0; s[i]; i++){
            if(isalpha(s[i]) && !isalpha(s[i+1])) cnt++;
        }
        cout<<cnt<<endl;
    }
}
