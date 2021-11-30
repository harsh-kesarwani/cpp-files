#include <bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

bool BinarySearch(vector<int>& array, int key) {

auto lower = array.begin();
auto upper = array.end()-1;
while (lower <= upper) {
    auto mid = lower + (upper-lower) /2;
    if(key == *mid)
    {
        return true;
    }
    if(key < *mid)
        upper = mid-1;
    else
        lower = mid+1;
}

return false;
}


int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	vec.push_back(4);
	vec.push_back(3);
	cout<<is_present(vec,3)<<endl;
	for(int i=0;i<vec.size();i++) {
		cout<<vec[i]<<" ";
	}

    return 0;
}
 
