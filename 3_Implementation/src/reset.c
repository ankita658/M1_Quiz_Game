#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<direct.h>
#include"main.h"

void reset_score()
{
  system("cls");
  float sc;
	char nm[20];
	FILE *f;
	f=fopen("points.txt","r+");
	fscanf(f,"%s%f",&nm,&sc);
	sc=0;
	fprintf(f,"%s,%.2f",nm,sc);
  fclose(f);
  
}
