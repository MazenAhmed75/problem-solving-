#include <iostream>

using namespace std;

int main()
{
    int ans=0;
    int n;
    cin>>n;
 string s;

 for(int i=0;i<n;i++){
     cin>>s;
    if(s=="++X" || s=="X++"){
        ans++;
    }
    else{
        ans--;
    }
 }
 cout<<ans<<endl;
}
