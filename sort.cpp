#include<stdio.h>
#include<string.h>
int main(){
	int cnt,i,l,k;
	scanf("%d",&cnt);
	char arr[cnt][15],rcv[15];
	for(i=0;i<cnt;i++)
	{
		gets(rcv);
		for(l=0;l<15;l++)
		{
			arr[i][l]=rcv[l];
		}
	}
	for(i=0;i<cnt;i++)
	{
		for(l=0;;l++)
		{
			printf("%c",arr[i][l]);
		}
		l=0;
	}
	return 0;
}
