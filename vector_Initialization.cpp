#include <bits/stdc++.h>
using namespace std;
int main(){

    vector<int> v;  //type 01
    cout << v.size() <<endl;

    vector<int> v2(5);  //type 02
    cout << v2.size() <<endl;

    vector<int> v3(5,-3);   //type 03
    for(int i =0 ; i < v3.size(); i++){
        cout << v3[i] <<" ";
    }
cout <<endl;
    vector<int> v4(v3);   //type 04
    for(int i =0; i < v4.size();i++){
        cout << v4[i] <<" ";
    }
cout <<endl;

    //type 05 *********
    int a[5] = {1,3,5,7,8};
    vector<int> v5(a,a+5);
    for(int i = 0; i < v5.size();i++){
        cout << v5[i] <<" ";
    }
cout << endl;
    //type 06*****

    vector<int>v6 = {3,6,2,4,78,3,2};
    for(int i =0 ; i < v6.size(); i++){
        cout << v6[i] << " ";
    }
    return 0;
}