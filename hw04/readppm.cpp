#include <cstdio>
#include "readppm.h"

void readPPM()
{
char string[3];
string[2] = '\0';
int width;
int height;
int* maxPixel;
int* bytes;
FILE* fpPPM = fopen("test.ppm", "rb");
if(fpPPM==NULL){
	printf("didnt work\n");
}
fscanf(fpPPM, "%s", string);
printf("%s\n",string);
//read width
fscanf(fpPPM, "%d", &width);
printf("%d width\n", width);//test


//read width
fscanf(fpPPM, "%d", &height);
printf("%d height\n", height);//test

//read maxPixel
fscanf(fpPPM, "%d", &maxPixel);
printf("%d Max Pixels\n", maxPixel);//test

//read binary pixel data
//int size = width * height * 3;

printf("%d size of this thing", (width) * (height) * 3 );


fclose(fpPPM);




}
