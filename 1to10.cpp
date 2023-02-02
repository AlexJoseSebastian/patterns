#include <iostream>
using namespace std;
int main(){
    int n;
    int count=0;
    cin>>n;
    int i=1;
    while (i<=n){
        int j=1;
        while (j<=i){
            count=count+1;
            j+=1;
            cout<<count;
        }
        cout<<endl;
        i+=1;
    }
}