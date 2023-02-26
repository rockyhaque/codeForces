#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        if(s.size()%2 != 0)
            cout<<"NO\n";
        else
        {
            string s1;
            string s2;

            for( int i = 0; i < s.size()/2; i++)
            {
                s1.push_back(s[i]);
            }
            for( int i = s.size()/2; i < s.size(); i++)
            {
                s2.push_back(s[i]);
            }

            if(s1 == s2)
                cout<<"YES"<<"\n";
            else
                cout<<"NO"<<"\n";
        }
    }
return 0;
}
