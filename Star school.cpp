#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int score[a+1]={0};
	int std[a+1][2]={0},i;
	for(i=1;i<a+1;i++)
	{
		scanf("%d %d",&std[i][0],&std[i][1]);
		score[std[i][0]]++;
		score[std[i][1]]++;
	}
	
	return 0;
}
