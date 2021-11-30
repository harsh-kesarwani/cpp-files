int n=A.size()-1;
    int sq=ceil(sqrt(n));
    vector<int> cnt(sq,0);
    for(auto x:A) cnt[(x-1)/sq]++;
    int i=0;
    for(i=0;i<sq;i++) {
        int sz=(i!=sq-1 ? sq : sq-(sq*sq-n));
        if(cnt[i]>sz) break;
    }
    map<int,int> mp;
    for(auto x:A) {
        if(x>sq*i && x<=sq*(i+1)) {
            if(mp[x]) return x;
            mp[x]++;
        }
    }
