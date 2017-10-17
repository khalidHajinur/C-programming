#include<stdio.h>
#include<varargs.h>
#include<string.h>
#define FALSE 0
#define TRUE 1

int alphabetic(char *string)
{
	int i, valid;
	valid = TRUE;
	for(i =0; i<strlen(string); i++)
	{
		if(string[i]<'a' || string[i]>'z' &&
			string[i]<'A' || string[i]>'Z')
			valid = FALSE;
	}
	return valid;
}

int main(int argc, char *argv[])
{
	char c;
    int n,i;
	double x[5], y[5];
	double area = 0;
    FILE *fptr;
    if (argc !=3 )	{		printf("Two arguments should be supplied\n");        return 1;	}	if ( strcmp(argv[2],"S")!= 0 && strcmp(argv[2],"T") !=0)	{
		printf("Invalid Letter entered (S or T)\n");
		return 2;
	}
	if ( (fptr= fopen(  argv[1], "r") ) == NULL )
    {
        printf("%s: Error opening file '%s'\n", argv[0], argv[1] );
        return 3;
    }
	
	fscanf(fptr,"%d",&n);
	printf("%d\n",n);
	for( i=0; i<n; i++)
	{
		fscanf(fptr, "%lf%lf",&x[i],&y[i]);
		printf("%f %f\n",x[i],y[i]);
	}
	 if((fclose(fptr))==EOF )
       {
	 printf("%s: Error closing gile '%s'\n2",
		                                 argv[0],argv[1]);
	 perror("");
	 return 4;
       }
	if ( strcmp(argv[2],"T") == 0 )
	{
	   for(i=0; i<=n-2; i++)
	
	   {
		   area = area + ( x[i+1]-x[i])*(y[i]+y[i+1])/2;
	   }
	   printf("The area is %0.2f\n",area);
	}
	else if( strcmp(argv[2],"S") == 0 )
	{
	area=0;
	   for(i=0; i<=n-3; i+=2)
	
	   {
		   area = area + ( x[i+1]-x[i])*(y[i]+(4*y[i+1])+y[i+2])/3;
	   }
	   printf("The area is %0.2f\n",area);
	}
}