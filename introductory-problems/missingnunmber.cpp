#include <iostream>

using namespace std;
#define ll long long

int main()
{
  int n;
  cin >> n;
  int arr[200000];
  for (int i = 0; i < n - 1; i++)
  {
    cin >> arr[i];
  }
  ll sum = 0;
  for (int i = 0; i < n - 1; i++)
  {
    sum = sum + arr[i];
  }
  ll sumex = n * (n + 1) / 2;
  cout << sumex - sum;
}
