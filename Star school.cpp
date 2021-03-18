#include<stdio.h>
int main(){
	int a;
	scanf("%d",&a);
	int score[a+1]={0};
	int std[a+1][2]={0},i;
	if(a>=2&&a<=1000)
	{
	
	for(i=1;i<a+1;i++)
	{
		scanf("%d %d",&std[i][0],&std[i][1]);
		score[std[i][0]]++;
		score[std[i][1]]++;
	}
	int max=score[1],min=0,c,lo_max=1,lo_min;
	for(c=1;c<a;c++)
	{
		if(max<score[c+1])
		{
			lo_max=c+1;
		}
	}
	min=score[std[lo_max][0]];
	lo_min=std[lo_max][0];
	if(min>score[std[lo_max][1]])
	{
		lo_min=std[lo_max][1];
	}
	printf("%d %d",lo_max,lo_min);
	
	}
	return 0;
}

