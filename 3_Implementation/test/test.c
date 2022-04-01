#include"main.h"
void main()
{
    printf("\n*******Welcome to Quiz Game*******\n");
    printf("Enter your name:");
    gets(name);
    menu();
}

void writescore()
{
     printf("points are");
     gets(writescore);
     return (writescore);
}
-------------------------------------------------------------------------------------------------
//used to test the score

void score_display()
{
     printf("recured score is");
     gets(score_display);
     return (score_display);
}

--------------------------------------------------------------------------------------------------
//useed to check the help function

void help()
{
     printf("help is");
     gets(help);
     return (help);
}
