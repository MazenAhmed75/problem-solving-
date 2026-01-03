#include <iostream>

using namespace std;

int main()
{
    int a1[5],a2[5],a3[5],a4[5],a5[5];
    int count;
    for (int i=0;i<5;i++){
        cin>>a1[i]>>a2[i]>>a3[i]>>a4[i]>>a5[i];

    }


    for(int i=0;i<5;i++){
        if(a1[0]==1 ||
           a1[4]==1 ||
           a5[0]==1 ||
           a5[4]==1
           ){
            count=4;
           }
           else if(a1[1]==1 ||
                   a1[3]==1 ||
                   a5[1]==1 ||
                   a5[3]==1 ||
                   a2[0]==1 ||
                   a2[4]==1 ||
                   a4[0]==1 ||
                   a4[4]==1
                   )
                    {count=3;}

    else if(a1[2]==1 ||
            a5[2]==1 ||
            a2[1]==1 ||
            a2[3]==1 ||
            a4[1]==1 ||
            a4[3]==1 ||
            a3[0]==1 ||
            a3[4]==1
            ){
            count=2;}
            else if(
                    a2[2]==1 ||
                    a4[2]==1 ||
                    a3[1]==1 ||
                    a3[3]==1
                    ){count=1;;
                    }
                    else{count=0;}
}
cout<<count<<endl;
}

