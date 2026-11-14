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

void slarge(int a[], int n) {
  int max = a[0];
  int smax = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      smax = max;
      max = a[i];
    } else if (a[i] > smax && a[i] < max) {
      smax = a[i];
    }
  }
  cout << smax << endl;
}

void ssmall(int a[], int n) {
  int min = a[0];
  int smin = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (a[i] < min) {
      smin = min;
      min = a[i];
    } else if (a[i] < smin && a[i] > min) {
      smin = a[i];
    }
  }
  cout << smin << endl;
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  slarge(a, n);
  ssmall(a, n);
  return 0;
}
