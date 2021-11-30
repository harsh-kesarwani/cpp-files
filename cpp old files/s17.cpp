#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define all(x) x.begin(),x.end()

void io() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	#ifndef ONLINE_JUDGE
//	freopen("input.txt", "r", stdin);
//	freopen("output.txt", "w", stdout);
//	#endif
}
int n;
vector<int> v;

bool solveme() {
	// int n;
	// cin>>n;
	// vector<int> v(n);
	// for(int &x:v) cin>>x;
	reverse(all(v));
	bool ok=true;
	int ll=1,nl=v[0]+1;
	for(int i=0;i<n-1;i++) {
		if(v[i]==ll) {
			ll=nl;
			nl=v[i+1]+1;
			i++;
		}
		else if(v[i]-v[i+1]!=1) {
			ok=false;
			break;
		}
	}
	//cout<<(ok?"Yes\n":"No\n");
	return ok;
}

bool solvett() {
    // int n;
    // cin >> n;
    // vector<int> v(n);
    // for (int& i : v)
    //     cin >> i;
    vector<int> pos(n);
    for (int i = 0; i < n; ++i)
        pos[--v[i]] = i;
    vector<bool> was(n);
    for (int i = 0; i < n; ++i) {
        if (was[i])
            continue;
        int me = pos[i];
        while (me < n) {
            was[me] = 1;
            if (me + 1 == n) break;
            if (was[me + 1]) break;
            if (v[me + 1] == v[me] + 1) {
                ++me;
                continue;
            }
            //cout << "No\n";
            return false;
        }
    }
    //cout << "Yes\n";
    return true;
}

int main() {
	//io();
	
	int T;
	cin>>T;
	while(T--) {
		cin>>n;
		v.resize(n);
		for(int &x:v) cin>>x;
		bool me=solveme();
		bool tt=solvett();
		if(me==tt) cout<<"OK\n";
		else {
			cout<<"Wrong\nme = "<<me<<" tt = "<<tt<<endl;
			break;
		}
	}
	return 0;
}

