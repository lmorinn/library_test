#define PROBLEM "https://judge.yosupo.jp/problem/aplusb"
#include "../hello/AB.hpp"

#include <iostream>
using namespace std;

int main() {
  long long a, b;
  cin >> a >> b;
  cout << AplusB(a, b) << endl;
}