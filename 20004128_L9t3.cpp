//task3

#include<bits/stdc++.h>
using namespace std;

#define d 10

void rabinKarp(char pattern[], char text[], int q) {
  int m = strlen(pattern);
  int n = strlen(text);
  int i, j;
  int p = 0;
  int t = 0;
  int h = 1;
  int flag = 0;

  for (i = 0; i < m - 1; i++)
    h = (h * d) % q;


  for (i = 0; i < m; i++) {
    p = (d * p + pattern[i]) % q;
    t = (d * t + text[i]) % q;
  }

  // Find the match
  for (i = 0; i <= n - m; i++) {
    if (p == t) {
      for (j = 0; j < m; j++) {
        if (text[i + j] != pattern[j])
          break;
      }

      if (j == m)
        cout << "Pattern is found at position: " << i + 1 << endl;
        flag =1;


    }


    if (i < n - m) {
      t = (d * (t - text[i] * h) + text[i + m]) % q;

      if (t < 0)
        t = (t + q);
    }

  }

if(flag==0)
    {
        cout<<"Pattern is not found"<<endl;
    }

}

int main() {
  char text[] = "ABCCDDAEFG";
  char pattern[] = "CDD";
  int q = 13;
  rabinKarp(pattern, text, q);

    char text1[] = "ADKFRJRFUEWI";
  char pattern1[] = "DKF";
  int q1 = 13;
  rabinKarp(pattern1, text1, q1);

   char text2[] = "ADKFRJRFUEWI";
  char pattern2[] = "Do";
  int q2 = 13;
  rabinKarp(pattern2, text2, q2);
}
