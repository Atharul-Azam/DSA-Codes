#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int>v = {4,5,7,23,5};
    cout << v.capacity() <<endl;
    v.push_back(10);
    cout << v.capacity() <<endl;
    for(int i =0; i < v.size();i++){
        cout << v[i] <<" ";
    }
    cout <<endl;
    cout << v.capacity() <<endl;
    //v.clear();
    cout <<v.size() <<endl;
    cout << v.capacity() <<endl;

    v.resize(3);
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout << endl;

    cout << v.max_size() <<endl;
    return 0;
}