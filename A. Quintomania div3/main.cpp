#include <iostream>
#include <cmath>

using namespace std;

int main()
{
int t;
cin>>t;

for (int i=0;i<t;i++){
    int n,diff;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];

    }
    for(int i=0;i<n-1;i++){


    diff=abs(a[i]-a[i+1]);
    if(diff==7 || diff==6 || diff==5){

        continue;
    }
     else{

        break;
    }

}
if(diff==7 || diff==6 || diff==5){
            cout<<"yes"<<endl;}
            else{cout<<"no"<<endl;}
}

}
