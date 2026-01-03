#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int n;
 cin>>n;
 int s[n];
 int c1,c2,c3,c4,taxi;
 for(int i=0;i<n;i++){
    cin>>s[i];
    switch (s[i]){
case 1:
    c1++;
    break;
    case 2:
    c2++;
    break;
    case 3:
    c3++;
    break;
    case 4:
    c4++;
    break;
    }
 }
 cout<<endl<<c1<<endl<<c2<<endl<<c3<<endl<<c4<<endl;

}
