#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    int t;
    cin>>t;
    while(t--)
    {
    	int n;
        cin>>n;
        string s,t;
        cin>>s>>t;
        vector<int> fc(n);
        vector<int> bc(n);
        for(int i=0;i<n;i++) {
            cin>>fc[i];
        }
        for(int i=0;i<n;i++) {
            cin>>bc[i];
        }
        int ilast=n-1;
        ll cost=min(fc[0],bc[0]);
        int p=t.find(s[0]);
        if(p==string::npos) {
        cout<<"cannot be formed"<<endl;
        return 0;
        }
        int f=p-1;
        int b=p+1;
        for(int i=1;i<=ilast;i++) {
            if(f>=0&&s[i]==t[f]) {
                cost+=fc[i];
                f--;
            }
            else if(b<=ilast&&s[i]==t[b]) {
                cost+=bc[i];
                b++;
            }
            else {
            cout<<"cannot be formed"<<endl;
            return 0;
            }
        }
        cout<<cost<<endl;
	}
    return 0;
}
 
