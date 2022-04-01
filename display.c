#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<direct.h>
#include"main.h"


void score_display()
 {
 
 char name[20];
 float s;
 FILE *f;
 
 system("cls");
 f=fopen("points.txt","r");
 fscanf(f,"%s%f",&name,&s);
 
 printf("\n\n\t\t ");
 printf("\n\n\t\t %s has secured the Highest points %.2f",name,s);
 printf("\n\n\t\t ");
 
 fclose(f);
 getch();
 }

