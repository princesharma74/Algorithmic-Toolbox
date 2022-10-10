#include <iostream>
#include <cassert>

#define ll long long 

ll gcd_naive(ll a, ll b) {
  ll current_gcd = 1;
  for (ll d = 2; d <= a && d <= b; d++) {
    if (a % d == 0 && b % d == 0) {
      if (d > current_gcd) {
        current_gcd = d;
      }
    }
  }
  return current_gcd;
}

ll gcd_fast(ll a, ll b) {
  while(a!=b){
    if(a > b) a-=b; 
    else b-=a; 
  }
  return a; 
}

void test_solution(){
  assert(gcd_fast(2, 4)==gcd_naive(2, 4)); 
  assert(gcd_fast(6, 4)==gcd_naive(6, 4)); 
}

int main() {
  ll a, b;
  std::cin >> a >> b;
  // std::cout << gcd_naive(a, b) << std::endl;
  std::cout << gcd_fast(a, b) << std::endl;
  test_solution(); 
  return 0;
}
