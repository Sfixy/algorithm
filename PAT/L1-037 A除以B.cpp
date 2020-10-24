#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
    double a,b;
    cin >> a >> b;
    if(b > 0) printf("%d/%d=%.2f",(int)a,(int)b,a/b);
    else if(b < 0) printf("%d/(%d)=%.2f",(int)a,(int)b,a/b);
    else cout << a << '/' << b << '=' << "Error";
    
    return 0;
}
