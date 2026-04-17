#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    vector<int> v(n);  //Jokhon Size Bola thake

    for(int i = 0 ; i < v.size();i++){
        cin>> v[i];
    }
        for(int i = 0 ; i < v.size();i++){
        cout << v[i] <<" ";
    }


    //If Size bola na thake:
    vector <int> v2;

    for(int i = 0 ; i < n ;i++){
        int x;
        cin >> x;
        v2.push_back(x);  
        //push back korle size auto bere jai
    }
        for(int i = 0 ; i < n ;i++){
        cout << v2[i] <<" ";
    }
    return 0;
}