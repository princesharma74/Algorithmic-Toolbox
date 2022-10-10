#include <bits/stdc++.h>
using namespace std; 

double get_optimal_value(int capacity, vector<int> weights, vector<int> values) {
  double value = 0.0;
  // write your code here
  if(capacity==0) return value; 
  int i = 0, max_val = values[i]; 
  for(int j = 0; j < values.size(); j++){
    if(max_val < values[j]){
      max_val = values[j];
      i = j; 
    }
  }
  value = min(weights[i], capacity) * values[i];
  capacity-=min(weights[i], capacity); 
  weights.erase(weights.begin() + i); 
  values.erase(values.begin() + i);
  return value + get_optimal_value(capacity, weights, values);
}

int main() {
  int n;
  int capacity;
  cin >> n >> capacity;
  vector<int> values(n);
  vector<int> weights(n);
  for (int i = 0; i < n; i++) {
    cin >> values[i] >> weights[i];
  }

  double optimal_value = get_optimal_value(capacity, weights, values);

  cout.precision(10);
  cout << optimal_value << endl;
  return 0;
}
