#include <bits/stdc++.h>
using namespace std;

int main()
{
  cout << "Hello World" << endl;
  return 0;
}

void backtrack(string s, int idx, int N)
{
  if (idx == N)
    cout << s << endl;
  else
  {
    for (int i = idx; i <= N; i++)
    {
      swap(s[idx], a[i]);
      permute(s, idx + 1, N);
      swap(s[idx], a[i]);
    }
  }
}
solve()
{
  string s = ”ABC”;
  int N = s.length();
  backtrack(s, 0, N - 1);
}