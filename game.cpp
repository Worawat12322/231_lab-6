#include<stdio.h>
int main(){
	int a,b,i,l;
	int co=0,inco=0;
	scanf("%d",&a);
	int gue[a],ans[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&gue[i]);	
	}
	for(l=0;l<a;l++)
	{
		scanf("%d",&ans[l]);
	}

	for(b=0;b<a;b++)
	{
		if(gue[b]==ans[b])
		{
			co++;
		}
		else inco++;
	}
	printf("%d %d",co,inco);
	return 0;
	}
