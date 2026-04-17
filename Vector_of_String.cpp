#include <bits/stdc++.h>
using namespace std;
int main(){

    int n;
    cin >> n;

    cin.ignore(); 
    //to ignore The "Enter"
    vector <string> v(n);

    for(int i = 0; i < n; i++){
     // cin >> v[i]; //single word(without space)
     //with space 
     getline(cin,v[i]);

    }

    for(string x : v){
        cout << x << endl;
    }

    return 0;
}