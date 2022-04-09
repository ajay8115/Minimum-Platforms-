#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

int findPlatform(int a[], int d[], int n)
{
    sort(a, a + n);
    sort(d, d + n);

    int i = 1, j = 0;

    int pl_cnt = 1;
    while (i < n)
    {
        if (a[i] <= d[j])
        {
            pl_cnt++;
            i++;
        }
        else if (a[i] < d[j])
        {
            i++;
            j++;
        }
    }

    return pl_cnt;
}