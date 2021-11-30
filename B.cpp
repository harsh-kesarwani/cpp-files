#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef pair<int,int> pii;
#define ff first
#define ss second
#define all(x) x.begin(),x.end()
#define pb push_back
#define endl '\n'
#define mod 1000000007

char ch='A';

void fillit(vector<vector<char>> &v, int j, int i1, int i2) {
    if(i1==i2) return;
    // assert(i2-i1>1);
    for(int i=i1;i<i2;i++) {
        if(i2==i+3) {
            v[i][j]=ch;
            i++;
            v[i][j]=ch;
            i++;
            v[i][j]=ch;
        }
        else {
            v[i][j]=ch;
            i++;
            v[i][j]=ch;
        }
        ch++;
        if(ch=='Z') ch='A';
    }
}

void solve() {
    ch='A';
	int r,c,i,j;
    cin>>r>>c>>i>>j;
    i--;j--;
    cout<<"YES"<<endl;
    if(r==3 && c==3 && i==1 && j==1) {
        cout<<"AAB"<<endl;
        cout<<"C*B"<<endl;
        cout<<"CDD"<<endl;
        return;
    }
    bool transpose = false;
    if(r==3 && i==1) {
        swap(r,c);
        swap(i,j);
        transpose = true;
    }
    vector<vector<char>> v(r,vector<char>(c,'-'));
    v[i][j]='*';
    if(j!=c-1) {
        for(int col=0;col<c;col++) {
            if(col==j) {
                if(i==1) {
                    v[0][j]='Z';
                    v[0][j+1]='Z';
                    fillit(v,col,2,r);
                    fillit(v,col+1,1,r);
                    col++;
                }
                else if(i==r-2) {
                    v[r-1][j]='Z';
                    v[r-1][j+1]='Z';
                    fillit(v,col,0,r-3);
                    fillit(v,col+1,0,r-2);
                    col++;
                }
                else {
                    fillit(v,col,0,i);
                    fillit(v,col,i+1,r);
                }
            }
            else {
                fillit(v,col,0,r);
            }
        }
    }
    else {
        for(int col=c-1;col>=0;col--) {
            if(col==j) {
                if(i==1) {
                    v[0][j]='Z';
                    v[0][j-1]='Z';
                    fillit(v,col,2,r);
                    fillit(v,col-1,1,r);
                    col--;
                }
                else if(i==r-2) {
                    v[r-1][j]='Z';
                    v[r-1][j-1]='Z';
                    fillit(v,col,0,r-3);
                    fillit(v,col-1,0,r-2);
                    col--;
                }
                else {
                    fillit(v,col,0,i);
                    fillit(v,col,i+1,r);
                }
            }
            else {
                fillit(v,col,0,r);
            }
        }
    }
    if(transpose) {
        for(int col=0;col<c;col++) {
            for(int row=0;row<r;row++) {
                cout<<v[col][row];
            }
        cout<<endl;
        }
    }
    else {
        for(int row=0;row<r;row++) {
            for(int col=0;col<c;col++) {
                cout<<v[row][col];
            }
        cout<<endl;
        }
    }
    return;
}

int main() {
	ios::sync_with_stdio(0); cin.tie(0);
    int T;
	cin>>T;
	// T=1;
	while(T--) {
		solve();
	}
	return 0;
}