#include<bits/stdc++.h>
using namespace std;
int main()
{
  int n,p;string name;
  cin>>n;
  for(int i=0;i<n;i++){
  	cin>>name;
  	p=name.size();
  	int y=p;
  	if(y>10)
  	 cout<<name[0]<<p-2<<name[p-1]<<endl;
  	 else
  	  cout<<name<<endl;
  }
  return 0;
 	
}
