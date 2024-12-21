#include <bits/stdc++.h>
using namespace std;


int main() {

    int A,B,C;
    int Store[3];

    cin>>A>>B>>C;

    if(A>B && A>C && B > C)
    {
        Store[0] = C;
        Store[1] = B;
        Store[2] = A;
    }
    else if(B>A && B>C && A>C)
    {
        Store[0] = C;
        Store[1] = A;
        Store[2] = B;

    }
    else if(C>A && C>B && A>B)
    {

        Store[0] = B;
        Store[1] = A;
        Store[2] = C;
    }

    else if(C>A && C>B && B>A)
    {

        Store[0] = A;
        Store[1] = B;
        Store[2] = C;
    }

    int length = sizeof(Store)/sizeof(Store[0]);

    for(int i=0; i<length; i++)
    {
        cout<<Store[i]<<" ";
    }


return 0;
}



