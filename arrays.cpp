#include <bits/stdc++.h>
using namespace std;

// Attempt 1: adjacent comparison (causes out-of-bounds & misses non-adjacent max)
void largest_attempt(int a[], int n) {
  int max = 0;
  for (int i = 0; i < n; i++) {
    max = i;
    if (a[i] < a[i + 1]) {
      max = i + 1;
    }
  }
  cout << a[max];
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  largest_attempt(a, n);
  return 0;
}
