#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v= {2,4,6,2};
    // vector<int > v2 ;
    // v2 = v;
    // v.pop_back();

    // v.insert(/*position*/,/*value*/)
    vector<int>v2 = {300,400,500};
    v.insert(v.begin()+2,v2.begin(), v2.end());
    for(int i = 0 ; i < v.size(); i++){
        cout << v[i] <<" ";
    }
    cout <<endl;

    vector<int > v3 = {1,2,3,4,5,6};
    v3.erase(v3.begin()+1, v3.begin()+5);
    for(int Z : v3){
        cout << Z <<" ";
    }


    //shortcut for loop  but painfullll
    // for(int x : v2){
    //     cout << x <<" ";
    // }
    // return 0;
}