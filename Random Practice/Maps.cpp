#include<bits/stdc++.h>
using namespace std;
int main(){
    map<string,int> m;
    pair<string,int> p("John",69);
    m.insert(p);
    cout<<m["John"]<<' ';
}