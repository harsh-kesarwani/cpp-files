#include <bits/stdc++.h>
using namespace std;

class triangle {
	int s1,s2,s3;
	public:
		triangle(int a, int b, int c) {
			s1=a;
			s2=b;
			s3=c;
		}
		void printPerimeter() {
			cout<<"Perimeter - "<<s1+s2+s3<<endl;
		}
		void printArea() {
			double s=(s1+s2+s3)/2.0;
			double area=s*(s-s1)*(s-s2)*(s-s3);
			cout<<"Area - "<<sqrt(area)<<endl;	
		}
};

int main() {
	triangle t(15,24,17);
	t.printPerimeter();
	t.printArea();
	return 0;
}
