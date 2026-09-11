#include<bits/stdc++.h>
using namespace std ;

int main(){
 int t ; cin >> t;

 while(t--){
    int n ; cin >> n;
   long long int sum = (long long) n * (n+1)/2;
   long long int power_of_sum = 0;

    for(int i=1;i<=n;i*=2){
        power_of_sum += i;
    }
    long long int answer = sum - (2*power_of_sum);
    cout << answer << '\n';

 }



return 0;
}
