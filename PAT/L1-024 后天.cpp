#include<iostream>
#include<cstdio>
#include<algorithm>

using namespace std;

int main()
{
    int D;
    cin >> D;
    if(D + 2 > 7) D = D + 2 - 7;
    else D = D + 2;
    cout << D;
    return 0;
}
