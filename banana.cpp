#include<iostream>
using namespace std;
int main()
{
	int k,w,n;
	cin>>k>>n>>w;
	int q;
	q=(((w*w)+w)/2);
	q=q*k;
	 int s;
	s=q-n;
	if(s<0)
	   cout<<"0";
	else
	   cout<<s;
}
	
	
