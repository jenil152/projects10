#include<stdio.h>

main()

{
	FILE *p;
	char data[1000];
	p=fopen("jenil.txt","a");
	
	if(p==NULL)
	{
		printf("Could not open file");
	}
	else
	{
		printf("Enter Any Value=");
		gets(data);
		fputs("\n",p);
		fputs(data,p);
		printf("Data Enter Successfully.");
		
        fclose(p);
	}
}
