#include<stdio.h>
#include<conio.h>
#include<windows.h>
#include<ctype.h>
#include<stdlib.h>
#include<time.h>
#include<direct.h>
#include"main.h"

int main()
     {

     int sumq,sumr;
     int r,i;
     int num_ques[6];
     int w;
     float points;
     char choice;
     char nameofplayer[20];
     time_t starttime,stoptime;
     system("cls");
     //randomize();
	 
     home_main:
     system("cls");
     puts("\n\t\t---- C PROGRAMMING TEST -----\n\n") ;
     
     puts("\n\t\t Enter 'S' to start game       \n\n");
     puts("\n\t\t Enter 'V' to see high score  \n\n");
     puts("\n\t\t Enter 'H' for help            \n\n");
     puts("\n\t\t Enter 'Q' to quit             \n\n");
     
     choice=toupper(getch());
	 if (choice=='V')
 {
 score_display();
 goto home_main;
 }
     else if (choice=='Q')
 exit(1);
     else if (choice=='H')
 {
 help();
 getch();
 goto home_main;
 }
    else if(choice=='S'){
     system("cls");

     printf("\n\n\n\t\t\tEnter your name...");
     printf("\n\t\t\t(only one word)\n\n\t\t\t");
     gets(nameofplayer);

     home:
     system("cls");
     starttime=time(NULL);
	    
     sumq=sumr=0;                    
     i=1;
     start:
     srand ( time(NULL) );
     r=rand()%23+1;
     num_ques[i]=r;
	    
     for (w=0;w<i;w++)
 if (num_ques[w]==r) goto start;

     switch(r)
  {
  case 1:
  printf("\n\n 'OS' computer abbreviation usually means?");
  printf("\n\nA.Order of Significance\tB.Open Software\n\nC.Operating System\t\t\tD. Optical Sensor\n\n");
  sumq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Operating System");break;}

  case 2:
  printf("'.MOV' extension refers usually to what kind of file?");
  printf("\n\nA.Image file\tB.Animation/movie file\n\nC.Audio file\tD. MS Office document\n\n");
  sumq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         printf("\n\nWrong!!! The correct answer is B.Animation/movie file");
  break;

  case 3:
  printf("\n\n\nWhich of the following is not a valid C variable name?");
  printf("\n\nA.int number;\tB.float rate;\n\nC.int variable_count;\tD.int $main;\n\n");             
  sumq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.int $main;");break;}

  case 4:
  printf("\n\n\nAll keywords in C are in ____________?");    
  printf("\n\nA.LowerCase letters\tB.UpperCase letters\n\nC.CamelCase letters\tD.None of the mentioned\n\n");
  sumq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.LowerCase letters");break;}

  case 5:
  printf("\n\n\nWhat is #include <stdio.h>?");       
  printf("\n\n A.Preprocessor directive\tB.Inclusion directive\n\nC.File inclusion directive\tD.None of the mentioned\n\n");
  sumq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is  A.Preprocessor directive");break;}

  case 6:
  printf("\n\n\nThe C-preprocessors are specified with which symbol?.");     
  printf("\n\nA.#\tB. $\n\nC." "\t\t\tD.&\n\n");
  sumq++;
  if (toupper(getch())=='A' )
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.A.#");break;}

  case 7:
  printf("\n\n\n The standard header _______ is used for variable list arguments (…) in C.");          
  printf("\n\nA.<stdio.h >\tB.<stdlib.h>\n\nC.<math.h>\tD.<stdarg.h>\n\n");
  sumq++;
  if (toupper(getch())=='D')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is D.<stdarg.h>");break;}

  case 8:
  printf("\n\n\nscanf() is a predefined function in______header file."); 
  printf("\n\nA.stdlib.h\tB.ctype.h\n\nC.stdio.h\tD.stdarg.h\n\n");
  sumq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.stdio.h");break;}

  case 9:
  printf("\n\n\nWhat is the capital of Denmark?");
  printf("\n\nA.Copenhagen\tB.Helsinki\n\nC.Rome\t\tD.Madrid\n\n");
  sumq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Copenhagen");break;}

  case 10:
  printf("\n\n\nIn C language, FILE is of which data type?");     
  printf("\n\nA.int\tB.char *\n\nC.struct\tD.None \n\n");
  sumq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.struct");break;}

  case 11:
  printf("\n\n\nDirectives are translated by the");              
  printf("\n\nA.Pre-processor\tB.Compiler\n\nC.Linker\tD.Editor\n\n");
  sumq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Pre-processor");break;}

  case 12:
  printf("\n\n\nArray is a _________ data structure."); 
  printf("\n\nA.Non-linear\tB.Primary\n\nC.Linear\tD.Data type\n\n");
  sumq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Linear");break;}

  case 13: 
  printf("\n\n\nA global variable is declared __________.");              
  printf("\n\nA.Outside of the function\tB.Inside of the function\n\nC.With the function\t\t\tD.Anywhere in the program\n\n");
  sumq++;
  if (toupper(getch())=='A')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is A.Outside of the function");break;}

  case 14:
  printf("\n\n\n Which of the following function is used to write the integer in a file?");
  printf("\n\nA.getw()\tB.putw()\n\nC.int value\tD.f_int()\n\n");       
  sumq++;
  if (toupper(getch())=='B')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is B.putw()");break;}

  case 15:
  printf("\n\n\nWhat type of data type does the atoi() function return?");                   
  printf("\n\nA.String\tB.char\n\nC.Integer\tD.Float\n\n");
  sumq++;
  if (toupper(getch())=='C')
   {printf("\n\nCorrect!!!");sumr++; break;}
  else
         {printf("\n\nWrong!!! The correct answer is C.Integer");break;}
	 
  }
 i++;
 if (i<=5) goto start;
 stoptime=time(NULL);
 points=(float)sumr/sumq*100-difftime(stoptime,starttime)/3;
 if (points<0) points=0;
 printf("\n\n\nYour points: %.2f",points);
 if (points==100) printf("\n\nEXCELLENT!!! KEEP IT UP");
 else if (points>=80 && points<100) printf("\n\nVERY GOOD!!");
 else if (points>=60 && points<80) printf("\n\nGOOD! BUT YOU NEED TO KNOW MORE.");
 else if (points>=40 && points<60) printf("\n\nSATISFACTORY RESULT, BUT THIS MUCH IS MUCH SUFFICIENT.");
 else printf("\n\nYOU ARE VERY POOR IN C PROGRAMMING");
 puts("\n\nNEXT PLAY?(Y/N)");
 if (toupper(getch())=='Y')
  goto home;
 else
  {
  type_score(points,nameofplayer);
  goto home_main;
  }
 }
     else
 {
 printf("\n\n\t\t  Enter the right key\n\n\t\t  ");
 Sleep(700);
 goto home_main;
 }
 return 0;
}

     
