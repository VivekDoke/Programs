#include <stdio.h>
int main ( void )
{
	int i=0,j;
   	static const char filename[] = "input.txt",output[]="output.txt";
   	FILE *file = fopen ( filename, "r" );
   	FILE *fptr=fopen(output,"w");
   	if ( file != NULL )
   	{
      		char line [128],out[128];
      		while (fgets(line, sizeof line, file) != NULL)
      		{
				
			while(line[i]!=58)
			{
				out[i]=line[i];
				i++;
			}
			i=i+2;
			if(line[i]==74)
			{
				fwrite(line,sizeof(line),1,fptr);
	        		fputs ( out, stdout );
				printf("\n");
			}


			i=0;
      		}
      		fclose ( file );
   	}
   	else
   	{
      		perror ( filename );
   	}
   	return 0;
}
