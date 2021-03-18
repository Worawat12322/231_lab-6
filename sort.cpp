#include<stdio.h>
#include<string.h>
int main(){
	int cnt,i,l,k;
	scanf("%d",&cnt);
	char arr[cnt][15],rcv[15];
	for(i=0;i<cnt;i++)
	{
		gets(rcv);
		k=strlen(rcv);
		for(l=0;l<=k;l++)
		{
			arr[i][l]=rcv[l];
		}
	}
		{
	
	return 0;
}
