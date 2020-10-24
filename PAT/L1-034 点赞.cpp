#include<iostream>
#include<cstdio>
#include<cstring>

using namespace std;

int ans[1002];
int heightnum = ans[0] ;
int height = 0;

int main()
{
    
    int n;
    cin >> n;
    for(int i = 0; i < n; i++)
    {
        int s;
        cin >> s;
        for(int j = 0; j < s; j++)
        {
            int a;
            cin >> a;
            ans[a]++;
        }
    }
    
    for(int i = 0; i < 1002; i++)
    {
        if(heightnum <= ans[i])
        {
            heightnum = ans[i];
            height = i;
        }
    }
    cout << height << heightnum;
    
}
