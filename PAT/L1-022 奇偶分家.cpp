#include<iostream>
#include<cstring>
#include<vector>

using namespace std;

int main()
{
    int n;
    vector<int> v;
    int ji = 0;
    int ou = 0;
    cin >> n;
    for(int i = 0; i < n ;i++)
    {
        int x;
        cin >> x;
        v.push_back(x);
    }
    for(int i = 0; i < n ;i++)
    {
        if(v[i] % 2 == 0) ou++;
        if(v[i] % 2 == 1) ji++;
    }
    cout << ji << ' ' << ou << endl;
    return 0;
}
