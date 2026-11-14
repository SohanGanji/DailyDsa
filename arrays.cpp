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

// Attempt: remove duplicates using vector.erase (causes out-of-bounds on shrunk vector)
void remdup_attempt(vector<int> &a, int n) {
  for (int i = 0; i < n; i++) {
    if (a[i] == a[i + 1]) {
      a.erase(a.begin() + i + 1);
    }
  }
  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;
}

int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  remdup_attempt(a, n);
  return 0;
}
