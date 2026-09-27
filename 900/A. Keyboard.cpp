#include<bits/stdc++.h>
using namespace std;
int main(){
    string keyboard = "qwertyuiopasdfghjkl;zxcvbnm,./";
    char dir;
    string msg;
    cin >> dir >> msg;
    for(char c : msg){
        int pos = keyboard.find(c);
        if(dir == 'L') cout << keyboard[pos+1];
        else cout << keyboard[pos-1];
    }
    cout << endl;
}
