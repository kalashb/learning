// you can use includes, for example:
// #include <algorithm>
#include <iostream>
#include <string>
using namespace std;

// you can write to stdout for debugging purposes, e.g.
// cout << "this is a debug message" << endl;

int solution(string &S) {
  int count = 0;
  int n = S.size();
  int arr[n];

  for (int i = 0; i < n; i++) {
    arr[i] = S[i];
  }

  bool x = false;

  for (int j = 0; j < n - 2; j++) {
    if (arr[j] | arr[j + 1]) {
      x = true;
    }
  }
  for (int j = 0; j < n - 2; j++) {
    if (arr[j] & arr[j + 1]) {
      x = false;
    }
  }

  while (x) {
    for (int k = 0; k < n; k++) {
      if (arr[k] == 0) {
        count++;
        for (int i = n - 1; i > 0; i--) {
          arr[i] = arr[i - 1];
        }
        arr[0] = 0;
        for (int j = 0; j < n - 2; j++) {
          if (arr[j] | arr[j + 1]) {
            x = true;
          }
        }
        for (int j = 0; j < n - 2; j++) {
          if (arr[j] & arr[j + 1]) {
            x = false;
          }
        }
      } else if (arr[k] == 1) {
        count++;
        arr[n - 1] = 0;
        for (int j = 0; j < n - 2; j++) {
          if (arr[j] | arr[j + 1]) {
            x = true;
          }
        }
        for (int j = 0; j < n - 2; j++) {
          if (arr[j] & arr[j + 1]) {
            x = false;
          }
        }
      }
    }
  }

  return count;
}

int main() {
  string x = "111";
  cout << solution(x);
}