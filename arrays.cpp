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



/* --- PREVIOUS ATTEMPT ---
   Where it was wrong:
   std::reverse takes iterators like (a.begin(), a.end()), not raw indices like (a, 0, d-1).

void leftr_attempt(vector<int> &a, int n, int d) {
  d = d % n;
  reverse(a, 0, d-1);
  reverse(a, d, n-1);
  reverse(a, 0, n-1);
}
------------------------------------ */

// Using C++ STL reverse with iterators:
void leftr(vector<int> &a, int n, int d) {
  d = d % n;
  if (d == 0) return;

  reverse(a.begin(), a.begin() + d);   // Reverse first d elements [0 ... d-1]
  reverse(a.begin() + d, a.end());     // Reverse remaining elements [d ... n-1]
  reverse(a.begin(), a.end());         // Reverse whole array [0 ... n-1]
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

  leftr(a, n, d);

  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;

  return 0;
}
