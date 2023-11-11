#include<stdio.h>
int main()
{
	int t=0,rest=0;
	int s1=0,s2=0;
	scanf("%d",&t); 
	s1=3*t;
	for(int time=1;time<=t;time++){
		if(time%10==0&&s2>time*3){
			time +=30;
		}
		s2 +=9;
	}
	if(s1>s2){
		printf("@_@ %d",s1);
	}
	else if(s1==s2){
		printf("-_- %d",s1);
	}
	else if(s1<s2){
		printf("^_^ %d",s2);
	}
	return 0;
 } 
