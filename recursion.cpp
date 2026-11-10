// #include <bits/stdc++.h>
// using namespace std;

// // int prime(int x) {
// //     int c = 0;
// //     for (int i = 1; i <= x; i++) {
// //         if (x % i == 0)
// //             c++;
// //     }
// //     return c;
// // }
// // void print(int x){
// // for(int i=0;i<x;i++){
// //     cout<<"hello world "<<i<<endl;
// // }
// int c = 0;
// string  print(string s) {
//     if(c==5) return;
//     cout<<s<<endl;
//     c++;
//     print(s);
// }

// int main() {
//   // int x;
//   // cout<<"enter value : ";
//   // cin >> x;

//   // int c = prime(x);
//   // if (c == 2) {
//   //     cout << "prime";
//   // }
//   // else {
//   //     cout << "not prime";
//   // }
//     string s;
//     cin>>s;
//     print(s);
  
//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int c = 0;

// void print(string s) {
//     if (c == 5) return;  // Base condition: stops when c reaches 5
//     cout << s << endl;
//     c++;
//     print(s);            // Recursive call
// }

// int main() {
//     string s;
//     cout<<"enter your name: ";
//     cin >> s;
//     print(s);
  
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;
// int c=1;
// void print(int x){
//     if(x<1) return;
//     cout<<x<<endl;
//     x--;
//     print(x);
// }

// int main() {
//     int x;
//     cout<<"enter no:";
//     cin>>x;
//     print(x);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void print1ToX(int x) {
//     if (x < 1) return;      // Base case

//     print1ToX(x - 1);       // 1. Recursive call first (goes all the way to 1)
    
//     cout << x << endl;      // 2. Prints during BACKTRACKING (on return)
// }

// int main() {
//     int x;
//     cout << "enter no: ";
//     cin >> x;
//     print1ToX(x);
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void sum(int i,int x){
//     if(i <1){cout<<x;
//     return;}
//     sum(i-1,x+i);
// }

// int main() {
//     int x;
//     cin>>x;
//     sum(x,0);
    
//     return 0;
// }


// #include <bits/stdc++.h>
// using namespace std;
// int func(int n){
//     if(n==0){
//     return 0;
//     }
//     return n + func(n-1);
// }

// int main() {
//     int n;
//     cin>>n;
   
//     int g=func(n);

//     cout<<g;

//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// int fact(int n){
//     if(n==0){
//         return 1;
//     }

//     return n*fact(n-1);
// }

// int main() {
//     int n;
//     cin>>n;
//     int f=fact(n);
//     cout<<f;
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// void rev(int a[], int i,int r){
    

//     if(i>=r) return;

//      swap(a[i],a[r]);

//     rev(a,i+1,r-1);
// }

// int main() {
//     int n;
//     cin>>n;
//     int a[n];
//     for(int i=0;i<n;i++){
//         cin>>a[i];
//     }

//     rev(a,0,n-1);
//     for(int i=0;i<n;i++){
//         cout<<a[i]<<" ";
//     }
//     return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// string pal(int i, string n, int c){
//     if(i >= c / 2) return n;

//     swap(n[i], n[c - i - 1]);
//     return pal(i + 1, n, c);
// }

// int main() {
//     string n;
//     cin >> n;
//     string m = n;
//     int c = n.length();
//     n = pal(0, n, c);
    
//     if(m == n){
//         cout << "yes";
//     }
//     else cout << "no";
    
//     return 0;
// }

#include <bits/stdc++.h>
using namespace std;

int fib(int n){
    if(n<=1){
        return n;
    }
   return  fib(n-1)+fib(n-2);
}

int main() {
    int n;
    cin>>n;
    int g= fib(n);
    cout<<g;
    return 0;
}