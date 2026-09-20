#include<iostream>
using namespace std;
int main(){
   long long s,v1,v2,t1,t2;
   cin>>s>>v1>>v2>>t1>>t2;
   int t3=2*t1+s*v1;
   int t4=2*t2+s*v2;
    if(t3<t4) {
        cout<<"First";
    }
    else if(t4<t3) {
        cout<<"Second";
    }
    else{
       cout<<"Friendship";
    }
return 0;
}
