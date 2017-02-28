#include<bits/stdc++.h>
using namespace std;
int main()
{
	int z,x=0;
	cin>>z;
	for(int i=0;i<z;i++){
		string name;
		cin>>name;
		if(name[0]=='-')
		     x=x-1;
		if(name[0]=='+')
		    x=x+1;
		  if(name[0]=='X')
		    if(name[1]=='+')
		        x=x+1;
		    else
		         x=x-1;
	}
	cout<<endl<<x;
	
}
