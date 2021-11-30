#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
    string s("GeeksforGeeks");
    int index=s.find("for");
    cout<<index<<endl;
    s.replace(index,0,"are");
    cout<<s<<endl;
    
    return 0;
}
 
