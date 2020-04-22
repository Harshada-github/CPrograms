#include<stdio.h>
int main()
{
	int c,nl=0,nb=0,nt=0;
	c=getchar();

	while(c!=EOF)
	{
		if(c=='\n')
		  nl++;

		if(c==' ')
		  nb++;

		if(c=='\t')
		  nt++;
	}
	printf("new lines:%d \n Tabs:%d \n Blank space:%d",nl,nt,nb);
	return 0;
}
