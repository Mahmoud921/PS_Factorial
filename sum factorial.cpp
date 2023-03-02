#include <bits/stdc++.h>
using namespace std;
int main(){
    // ========= we sum the factorial number ===========
    int i = 1,sum=1,n;
    cout<<"Enter Number: ";
    cin>>n;
    while(i<=n){
            sum= sum*i;
    i++;
}
cout<<sum;
return 0;
}
