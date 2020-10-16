#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

 
 int main()
 {
 	
 	int n;
 	
 	cin >> n;
 	
 	int f[46];
 	
 	f[1] = 0;
 	f[2] = 1;
 	
 	for(int i = 3; i <= n; i++) f[i] = f[i-1] + f[i-2];
 	
 	for(int i = 1; i<= n; i++) cout << f[i] << ' ';
 	
 	return 0;
 }
