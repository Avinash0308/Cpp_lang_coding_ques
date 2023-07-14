#include <bits/stdc++.h>
using namespace std;

long long Solve(long long k, vector<int> arr)
{
    for (long long int i = 0; i < arr.size(); i++)
    {
        if (arr[i] < 0)
        {
            continue;
        }
        long long int j = i + 1;
        while (j <= i + k && j < arr.size() && arr[j] < 0 && arr[i] != 0)
        {
            if (abs(arr[j]) <= arr[i])
            {
                arr[i] += arr[j];
                arr[j] = 0;
            }
            else
            {
                arr[j] += arr[i];
                arr[i] = 0;
            }
            j++;
        }
        if (j == arr.size())
        {
            break;
        }
    }
    long long sum = 0;
    for (int i = 0; i < arr.size(); i++)
    {
        sum += (long long int)abs(arr[i]);
    }
    return sum;
}

int main()
{

    ios::sync_with_stdio(0);
    cin.tie(0);
    long long k;
    int n;
    cin >> n;
    cin >> k;

    vector<int> arr(n);
    for (int i_arr = 0; i_arr < n; i_arr++)
    {
        cin >> arr[i_arr];
    }

    long long out_;
    out_ = Solve(k, arr);
    cout << out_;
}