// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//   string n;
//   cin >> n;

//   int hash[26] = {0};
//   for (int i = 0; i < n.size(); i++) {
//     hash[n[i] - 'a']++;
//   }

//   int t;
//   cin >> t;
//   while (t--) {
//     char q;
//     cin >> q;
//     cout << hash[q - 'a'] << endl;
//   }

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int main() {

//   string a;
//   cin >> a;

//   unordered_map<char, int> mpp;
//   for (int i = 0; i < a.size(); i++) {
//     mpp[a[i]]++;
//   }
// //   int q;
// //   cin >> q;
// //   while (q--) {
// //     char num;
// //     cin >> num;
    
// //   }
// cout << max(mpp['a'],mpp['z']) << endl;
// }


#include <bits/stdc++.h>
using namespace std;

int main() {
  string a;
  cin >> a;

  unordered_map<char, int> mpp;
  for (int i = 0; i < a.size(); i++) {
    mpp[a[i]]++;
  }

  char maxElement = '\0';
  int maxFreq = 0;

  // Iterate over each (key, value) pair in the map
  for (auto it : mpp) {
    if (it.second > maxFreq) {
      maxFreq = it.second;      // Number of times it appeared
      maxElement = it.first;    // The character itself
    }
  }

  cout << "Maximum element: " << maxElement << endl;
  cout << "Appeared: " << maxFreq << " times" << endl;

  return 0;
}