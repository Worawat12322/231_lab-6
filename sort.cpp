#include<stdio.h>
#include<string.h>
int main(){
	int cnt,i,l,k;
	scanf("%d",&cnt);
	char arr[cnt][15],rcv[15];
	fflush(stdin);
	for(i=0;i<cnt;i++)
	{
		gets(rcv);
		strcpy(arr[i],rcv);
	}
	int end;
	for(end=0;end<cnt;end++)
	{
		puts(arr[end]);
	}
	return 0;
}
