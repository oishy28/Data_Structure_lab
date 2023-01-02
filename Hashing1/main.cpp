#include <bits/stdc++.h>

using namespace std;

int main()
{
    unordered_map<string,int> m;

    //insert
    pair<string,int> p = make_pair("oishy",3);
    m.insert(p);

    pair<string,int> p2("shoumik",9);
    m.insert(p2);

    m["shi shi"]=1;

    cout<< m["shoumik"]<<endl;
    cout<<m.size()<<endl;

    return 0;
}
