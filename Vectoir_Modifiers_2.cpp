#include <bits/stdc++.h>
using namespace std;
int main(){

    vector <int> v = {1,2,3,2,5,2};

    replace(v.begin() , v.end(), 2,100);
    for(int x : v){
        cout << x <<" " ;
    }
cout <<endl;
    //  vector <int> :: iterator it = find(v.begin(),v.end(),100); //both line are same
    auto it = find(v.begin(), v.end(),100); // similer with upper line |^

    if(it == v.end()){
        cout << "Not Found " <<endl;
    } else{
        cout <<"Found" << endl;
    }

    cout << *it <<endl;
    return 0;
}