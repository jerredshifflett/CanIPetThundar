#include <cstdio>
#include "readppm.h"

void readPPM()
{
char string[81];
FILE* fpPPM = fopen("test.ppm", "r");
fscanf(fpPPM, "%s", string);
printf("%s\n",string);
}
