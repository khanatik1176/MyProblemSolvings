#include <bits/stdc++.h>
using namespace std;


int main() {

int A,B,X,Y;

cin>>A>>B>>X>>Y;

int messiTotalgoalPoint = A*2;
int messiTotalAssistPoint = B;
int ronaldoTotalgoalPoint = X*2;
int ronaldTotalAssistPoint = Y;

int messiTotal = messiTotalgoalPoint+messiTotalAssistPoint;
int ronaldoTotal= ronaldoTotalgoalPoint+ronaldTotalAssistPoint;


if(messiTotal> ronaldoTotal)
{
    cout<<"Messi";
}
else if (messiTotal < ronaldoTotal )
{
    cout<<"Ronaldo";
}
else if (messiTotal == ronaldoTotal)
{
    cout<<"Equal";
}

else
{
    cout<<"None";
}


return 0;
}

