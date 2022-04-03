#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<direct.h>
#include"main.h"

void type_score(float points,char plnm[20])
 {
 
 float sc;
 char nm[20];
 FILE *f;
 
 system("cls");
 f=fopen("points.txt","r");
 fscanf(f,"%s%f",&nm,&sc);
 
 if (points>=sc)
   {
     sc=points;
     fclose(f);
     f=fopen("points.txt","w");
     fprintf(f,"%s\n%.2f",plnm,sc);
     fclose(f);
    
   }
 }
