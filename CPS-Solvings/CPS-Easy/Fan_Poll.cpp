#include <bits/stdc++.h>
using namespace std;

int main() {

	int A,B,C;

	cin>>A>>B>>C;

	if(A != B && B !=C && A!=C)
	{
	    if(A>B && A>C)
	    {
	        cout<<"Yes";
	    }
	    else
        {
            cout<<"NO";
        }
	}

	return 0;

}

