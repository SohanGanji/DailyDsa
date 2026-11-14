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
  cout << a[max];
}

void slarge(int a[], int n) {

  int max = a[0];
  int smax = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (a[i] > max) {
      smax = max;
      max = a[i];
    } else if (a[i] > smax && a[i] < max) { // 👈 THE FIX: captures elements
                                            // like 12 when 16 already passed
      smax = a[i];
    }
  }
  cout << smax << endl;
}

void ssmall(int a[], int n) {
  int min = a[0];
  int smin = INT_MAX;
  for (int i = 0; i < n; i++) {
    if (min > a[i]) {
      smin = min;
      min = a[i];
    } else if (a[i] < smin &&
               a[i] > min) { // 👈 THE FIX: captures second smallest
      smin = a[i];
    }
  }
  cout << smin << endl;
}
// BRUTE
//  void remdup(vector<int> &a, int n) {
//    for (int i = 0; i < n; i++) {
//      if (a[i] == a[i + 1]) {
//        a.erase(a.begin() + i + 1);
//      }
//    }
//    for (int x : a) {
//      cout << x << " ";
//    }
//    cout << endl;
//  }

// optimal

void remdup(vector<int> &a, int n) {
  if (n == 0)
    return;

  int i = 0; // Index of the last unique element
  for (int j = 1; j < n; j++) {
    if (a[j] != a[i]) {
      i++;
      a[i] = a[j]; // Move unique element forward
    }
  }

  // Only print the unique elements (from 0 to i)

  cout << i + 1;
}

void reverse(vector<int> &a, int i, int d) {
  if (i >= d)
    return;

  swap(a[i], a[d]);

  reverse(a, i + 1, d - 1);
}

void leftr(vector<int> &a, int n, int d) {
    d=d%n;
    if(d==0) return;
  reverse(a, 0, d-1);
  reverse(a, d, n-1);
  reverse(a, 0, n-1);
}


int main() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  int d;
  cin>>d;

  leftr(a, n, d);

  for (int x : a) {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}