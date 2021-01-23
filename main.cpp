#include <iostream>
using namespace std;

void recount(int n){
    if(n>0){
        cout<<n%10;
        recount(n/10);
    }
}
int main(){
      int n;
      cin>>n;
        recount(n);
    return 0 ;
}
