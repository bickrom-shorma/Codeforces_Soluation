#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
       int a[n];
       for(int i=0;i<n;i++){
          cin >> a[i];
       }
       int count_one = 0,count_o = 0, op = 0;

       for(int i=0;i<n;i++){
          if(a[i] == -1){
            count_one += 1;
          }
          else if(a[i]== 0){
             count_o += 1;
          }
       }
       if(count_one%2 !=  0){
          op += 2;
       }
       int operation = op + count_o ;
       cout << operation << '\n';
    }

    return 0;
}
