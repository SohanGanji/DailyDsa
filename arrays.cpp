#include <bits/stdc++.h>
#include <climits>
using namespace std;

void largest(int a[], int n) {
  int max = 0;
  for (int i = 0; i < n; i++) {
    if (a[i] > a[max]) {
      max = i;
    }
  }
  cout << a[max] << endl;
}

// Attempt: mixing index with values and missing else-if branch
void slarge_attempt(int a[], int n) {
  int max = a[0];
  int smax = INT_MIN;
  for (int i = 1; i < n; i++) {
    if (a[i] > a[max]) { // Error: max holds value but used as index
      smax = max;
      max = i;
    }
  }
  cout << a[smax] << endl;
}

void ssmall_attempt(int a[], int n) {
  int min = a[0];
  int smin = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (min > a[i]) {
      smin = min;
      min = i;
    }
  }
  cout << a[smin] << endl;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  slarge_attempt(a, n);
  ssmall_attempt(a, n);
  return 0;
}
