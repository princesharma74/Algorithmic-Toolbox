#include <iostream>

int get_change(int m) {
  /*
  int denom[] = {10, 5, 1};
  int n = 0; 
  while(m){
    for(int i = 0; i < 3; i++){
      if(denom[i] <= m){
        n++; 
        m-=denom[i];
        break; 
      }
    }
  }
  return n;
  */

  /*
  One Liner Code: 
  */
  return (m/10) + (m%10)/5 + (m%10)%5;
}

int main() {
  int m;
  std::cin >> m;
  std::cout << get_change(m) << '\n';
}
