#include<stdio.h>

main()

{
	FILE *p;
	char data[1000];
	p=fopen("jenil.txt","w");
	
	if(p==NULL)
	{
		printf("Could not open file");
	}
	else
	{
		printf("Enter Any Value=");
		gets(data);
		fputs(data,p);
		printf("Data Enter Successfully.");
		
        fclose(p);
	}
}
