#include<bits/stdc++.h>
using namespace std;
int main()
{
	int x,y,z=0;
	scanf("%d %d",&x,&y);
	int a[x];
	for(int i=0;i<x;i++)
	  scanf("%d",&a[i]);
	  int temp=a[y-1];
	  for(int i=0;i<x;i++){
	  	if(temp<=a[i] && a[i]>0)
	  	   z++;
	  }
	  cout<<z;
	  return 0;
}
