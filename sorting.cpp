#include <bits/stdc++.h>
using namespace std;

void selectionsort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    int min = i;
    for (int j = i; j < n; j++) {
      if (a[j] < a[min]) {
        min = j;
      }
    }
    swap(a[i], a[min]);
  }
}

void bubblesort(int a[], int n) {
  for (int i = 0; i < n - 1; i++) {
    for (int j = 0; j < n - i - 1; j++) {
      if (a[j] > a[j + 1]) {
        swap(a[j], a[j + 1]);
      }
    }
  }
}

void insertionsort(int a[], int n) {
  for (int i = 0; i < n; i++) {
    int j = i;
    while (j > 0 && a[j - 1] > a[j]) {
      swap(a[j - 1], a[j]);
      j--;
    }
  }
}
void merge(int a[], int l, int m, int h) {
  vector<int> temp;
  int left = l;
  int right = m + 1;
  while (left <= m && right <= h) {
    if (a[left] < a[right]) {
      temp.push_back(a[left]);
      left++;
    } else {
      temp.push_back(a[right]);
      right++;
    }
  }
  while (left <= m) {
    temp.push_back(a[left]);
    left++;
  }
  while (right <= h) {
    temp.push_back(a[right]);
    right++;
  }
  for (int i = l; i <= h; i++) {
    a[i] = temp[i - l];
  }
}

void mergesort(int a[], int l, int h) {
  if (l == h)
    return;
  int m = (l + h) / 2;
  mergesort(a, l, m);
  mergesort(a, m + 1, h);

  merge(a, l, m, h);
}

// 1. Partition function: places pivot in correct spot and returns its index
int partition(int a[], int l, int h) {
  int pivot = a[l];
  int i = l;
  int j = h;

  while (i < j) {
    // Find first element greater than pivot from left
    while (a[i] <= pivot && i <= h - 1) {
      i++;
    }
    // Find first element smaller than or equal to pivot from right
    while (a[j] > pivot && j >= l + 1) {
      j--;
    }
    if (i < j) {
      swap(a[i], a[j]);
    }
  }

  // Place pivot in its correct sorted position
  swap(a[l], a[j]);
  return j;
}
  
// 2. Recursive quicksort function
void quicksort(int a[], int l, int h) {
  if (l < h) {
    int p = partition(a, l, h);
    quicksort(a, l, p - 1); // Sort left half
    quicksort(a, p + 1, h); // Sort right half
  }
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  quicksort(a, 0, n - 1);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
