#include<bits/stdc++.h>
using namespace std;

#define ll long long
#define endl "\n"

class Complex {
	private:
		int a,b;
	public:
		void set_data(int x, int y) {
			a=x;
			b=y;
		}
		void show_data() {
			cout<<"a = "<<a<<endl<<"b = "<<b;
		}
		Complex add(Complex c) {
			Complex temp;
			temp.a=a+c.a;
			temp.b=b+c.b;
			return temp;
		}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	
	Complex c1,c2,c3;
	c1.set_data(3,4);
	c2.set_data(1,5);
	c1.show_data();
	cout<<endl;
	c2.show_data();
	c3=c1.add(c2);
	cout<<endl;
	c3.show_data();
	return 0;
}
