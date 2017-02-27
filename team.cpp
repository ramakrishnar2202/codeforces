#include<bits/stdc++.h>
using namespace std;
int main()
{
	int n,t_count=0,count=0;
	cin>>n;
	int a[3];
	for(int j=0;j<n;j++){
		count=0;
	 for(int i=0;i<3;i++)
	   {
	    cin>>a[i];
	     if(a[i]==1)
	        ++count;
	   }
	   if(count>=2)
	     ++t_count;
    } 
    cout<<t_count;

}
