#include<iostream>

using namespace std;

int Calculation(int n)
{
    int ans = 1;
    for(int i = n; i > 0 ;i--)
    {
        ans *= i;
    }
    return ans;
}

int main()
{
    int ans = 0;
    int n;
    cin >> n;
    while(n != 0)
    {
        ans += Calculation(n);
        n--;
    }
    cout << ans;
    return 0;
}
