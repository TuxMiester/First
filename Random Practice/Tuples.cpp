#include<bits/stdc++.h>
using namespace std;
int main(){
    tuple <int,char,string,float> t;
    t = make_tuple(6,'x',"sex",69.420);
    cout<<get<0>(t)<<' ';
    cout<<get<1>(t)<<' ';
    cout<<get<2>(t)<<' ';
    cout<<get<3>(t)<<' ';
    return 0;
}