#include <cstdio>
#include "readppm.h"

void readPPM()
{
char string[81];
int* width;
int* height;

FILE* fpPPM = fopen("test.ppm", "rb");
if(fpPPM==NULL){
	printf("didnt work\n");
}
fscanf(fpPPM, "%s", string);
printf("%s\n",string);
//read width
fscanf(fpPPM, "%d", &width);
printf("%d width\n", width);


//read width
fscanf(fpPPM, "%d", &height);
printf("%d width\n", height);
fclose(fpPPM);

}
