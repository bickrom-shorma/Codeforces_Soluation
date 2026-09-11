#include<bits/stdc++.h>

using namespace std ;

int main(){
  int n ; cin >> n ;
 string a;
  int sum = 0;
  for(int i = 1; i<=n ; i++){
    cin >> a ;

    if(a == "Icosahedron"){
        sum += 20;
    }
    else if(a== "Cube"){
        sum+= 6;
    }
    else if(a=="Tetrahedron"){
        sum += 4;
    }
    else if(a == "Octahedron"){
        sum += 8;
    }
    else if(a== "Dodecahedron"){
        sum += 12;
    }

 }
 cout << sum << '\n';



return 0;
}
