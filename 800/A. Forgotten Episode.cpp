#include<bits/stdc++.h>

using namespace std;

int main() {
  int n;
  cin >> n;
  int b = n - 1;
  int arr[b];
  for (int i = 0; i < b; i++) {
    cin >> arr[i];
  }
  int sum_number = 0;
  int sum_array_number = 0;
  for (int i = 1; i <= n; i++) {
    sum_number += i;
  }
  for (int i = 0; i < b; i++) {
    sum_array_number += arr[i];
  }

  int mising_number = (sum_number - sum_array_number);
  cout << mising_number << '\n';

  return 0;
}
