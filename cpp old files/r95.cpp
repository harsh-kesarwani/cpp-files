#include<bits/stdc++.h>
using namespace std;

class Complex {
	private:
		int real;
		int imag;
	public:
		void setData(int r, int i) {
			real=r;
			imag=i;
		}
		void showData() {
			cout<<real<<(imag>=0?"+":"")<<imag<<"i";
		}
		Complex add(Complex a) {
			Complex temp;
			temp.real=real+a.real;
			temp.imag=imag+a.imag;
			return temp;
		}
		
		Complex subtract(Complex a) {
			Complex temp;
			temp.real=real-a.real;
			temp.imag=imag-a.imag;
			return temp;
		}
		
		Complex multiply(Complex a) {
			Complex temp;
			temp.real=real*a.real-imag*a.imag;
			temp.imag=real*a.imag+imag*a.real;
			return temp;
		}
};

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin>>t;
	while(t--) {
		int r1,i1,r2,i2;
		cin>>r1>>i1>>r2>>i2;
		Complex c1,c2;
		c1.setData(r1,i1);
		c2.setData(r2,i2);
		cout<<"c1 = ";
		c1.showData();
		cout<<endl;
		cout<<"c2 = ";
		c2.showData();
		cout<<endl;
		Complex c3=c1.add(c2);
		cout<<"c1 + c2 = ";
		c3.showData();
		cout<<endl;
		Complex c4=c1.subtract(c2);
		cout<<"c1 - c2 = ";
		c4.showData();
		cout<<endl;
		Complex c5=c1.multiply(c2);
		cout<<"c1 x c2 = ";
		c5.showData();
		cout<<endl;
	}		
	return 0;
}
