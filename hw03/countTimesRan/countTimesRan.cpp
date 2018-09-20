#include <cstdio>

int countTimesRan(){
FILE* fp = fopen("TimesRan.txt","r");
int counter = 0;

while(fscanf(fp, "%d", &counter) !=EOF){
	printf("%d",counter);
}
fclose(fp);

counter +=1;
 FILE* fp1 = fopen("TimesRan.txt","w");
 fprintf(fp1,"%d",counter);
 
fclose(fp1);

 return 0;
}