#include <iostream>

long long lcm_naive(long a, long b) {
  for (long l = 1; l <= (long long) a * b; ++l)
    if (l % a == 0 && l % b == 0)
      return l;

  return (long long) a * b;
}

long long lcm_fast(long a, long b){
  long long a1 = a, b1 = b; 
  while(a!=b){
    if(a > b) a-=b; 
    else b-=a; 
  }
  return (long long) (a1*b1)/a;
}

int main() {
  long a, b;
  std::cin >> a >> b;
  // std::cout << lcm_naive(a, b) << std::endl;
  std::cout << lcm_fast(a, b) << std::endl;
  return 0;
}
