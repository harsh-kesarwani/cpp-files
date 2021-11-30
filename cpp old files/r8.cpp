#include <bits/stdc++.h>
using namespace std;

#define ll long long
 
double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
	double value = 0.0;
	
	// write your code here
	
	return value;
}

int main() {
	
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    
	int n, W;
	cin>>n>>W;
	vector<int> values(n);
	vector<int> weights(n);
	for(int i=0;i<n;i++) {
    cin>>values[i]>>weights[i];
  }
	cout<<values[1]<<" "<<weights[0]<<" done";
  //double optimal_value = get_optimal_value(capacity, weights, values);

  //std::cout.precision(10);
  //std::cout << optimal_value << std::endl;
  return 0;
}
