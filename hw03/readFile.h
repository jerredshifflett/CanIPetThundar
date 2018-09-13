FILE* timesRan = fopen("TimesRan", "r");

int value =0;
while(fscanf(timesRan, "%d", &value) !=EOF){
	printf("%d",value);
}
fclose(timesRan);