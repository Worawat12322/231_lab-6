#include<stdio.h>
int main(){
	int a,b,i,l;
	int co=0,inco=0;
	scanf("%d",&a);
	int num[a];
	int gue[a],ans[a];
	scanf("%d",gue);
	scanf("%d",ans);
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
