#include<stdio.h>
int main(){
	int n,q;
	int i,l,k;
	int plus=0;
	scanf("%d %d",&n,&q);
	int st[n]={0};
	char fst[q];
	int snd[q][2];
	if(n<=1&&q<=262144)
	{
		for(i=0;i<q;i++)
		{
			fflush(stdin);
			scanf("%c %d %d",fst[i],snd[i][0],snd[i][1]);
		}
		for(l=0;l<q;l++)
		{
			if(fst[l]=='U')
			{
				st[snd[l][0]-1]=snd[l][1];
			}
			else if(fst[l]=='P')
			{
				for(k=snd[l][0]-1;k<=snd[l][1];k++)
				{
					plus=plus+st[k];	
				}
				printf("%d\n",plus);
			}
		}
	}
	return 0;
}
