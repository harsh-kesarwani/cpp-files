#include <algorithm>
#include<bits/stdc++.h>
#include <sstream>
#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

string largest_number(vector<int> a) {
  sort(a.begin(),a.end(),greater<int>());
  std::stringstream ret;
  for (int i = 0; i < a.size(); i++) {
    ret << a[i];
  }
  string result;
  ret >> result;
  return result;
}

int main() {
  int n;
  std::cin >> n;
  vector<int> a(n);
  for (int i = 0; i < a.size(); i++) {
    std::cin >> a[i];
  }
  std::cout << largest_number(a);
}
