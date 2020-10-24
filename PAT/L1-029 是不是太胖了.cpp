#include<iostream>
#include<cstdio>
#include<algorithm>
#include<cstring>

using namespace std;

int main()
{
    int H;
    cin >> H;
    double W = (H - 100) * 0.9;
    printf("%.1f",W);
    return 0;
}
