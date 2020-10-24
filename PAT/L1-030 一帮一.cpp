#include<iostream>
#include<cstdio>
#include<cstring>
#include<map>

using namespace std;

int main()
{
    map<string , int> m;
    int n;
    cin >> n;
    
    for(int i = 0; i < n; i++)
    {
        int num;
        string name;
        cin >> num >> name;
        m[name] = num;
    }
    map<string,int> :: iterator it1;
    map<string,int> :: iterator it2;
    for(it1 = m.begin(); it1 != m.end(); it1++)
    {
        for(it2 = m.end(); it2 != m.begin(); it2--)
        {
        	cout << it2->first;
            if(it2->second != it1->second)
            {
                cout << it1->first << ' ' << it2->first;
                m.erase(it1->first);
                m.erase(it2->first);
                break;
            }
        }
    }
    
    
    return 0;
}
