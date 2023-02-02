#include <iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int i=1;
     while(i<=n){
         int j=1;
         while(j<=i){
             int b=i-j+1;
             cout<<b;
             j+=1;
             
         }
         cout<<endl;
         i+=1;
     }
}