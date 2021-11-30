#include <bits/stdc++.h>
using namespace std;

class rectangle {
	private:
		int length;
		int breadth;
	public:
		void setDim(int l, int b) {
			length=l;
			breadth=b;
		}
		int getArea() {
			return length*breadth;	
		}
};

int main() {
	int l,b;
	cin>>l>>b;
	rectangle rt;
	rt.setDim(l,b);
	cout<<rt.getArea();
	return 0;
}
