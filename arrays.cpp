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

void remdup(vector<int> &a, int n) {
  if (n == 0)
    return;

  int i = 0;
  for (int j = 1; j < n; j++) {
    if (a[j] != a[i]) {
      i++;
      a[i] = a[j];
    }
  }

  cout << i + 1 << endl;
}

// Attempt: left rotate by d using recursion with base case (i == d) and index n
void reverse_attempt(vector<int> &a, int i, int d) {
  if (i == d) // Error: misses crossing on even length ranges
    return;

  swap(a[i], a[d]);
  reverse_attempt(a, i + 1, d - 1);
}

void leftr_attempt(vector<int> &a, int n, int d) {
  d = d % n;
  reverse_attempt(a, 0, d); // Error: should be d - 1
  reverse_attempt(a, d, n); // Error: should be n - 1
  reverse_attempt(a, 0, n); // Error: a[n] out of bounds
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int d;
  cin >> d;
  leftr_attempt(a, n, d);
  return 0;
}
