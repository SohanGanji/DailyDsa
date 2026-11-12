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

void insertionsort(int a[],int n){
  for(int i=0;i<n;i++){
    int j=i;
    while(j>0 && a[j-1]>a[j]){
      swap(a[j-1],a[j]);
      j--;
    }
  }
}

int main() {
  int n;
  cin >> n;
  int a[n];
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  insertionsort(a, n);

  for (int i = 0; i < n; i++) {
    cout << a[i] << " ";
  }
  return 0;
}
