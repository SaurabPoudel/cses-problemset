#include <bits/stdc++.h>
using namespace std;

int main()
{
    char input[1000000];
    scanf("%[^\n]", input);
    int size = strlen(input);
    int ans = 1;
    int count = 1;
    for (int i = 1; i < size; i++)
    {
        if (input[i] == input[i - 1])
        {
            count++;
        }
        else
        {
            count = 1;
        }
        ans = max(ans, count);
    }
    cout << ans;
}