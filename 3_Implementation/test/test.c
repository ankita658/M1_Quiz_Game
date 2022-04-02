#include"main.h"
void main()
{
    printf("\n*******Welcome to Quiz Game*******\n");
    printf("Enter your name:");
    get_s(name);
    menu();
}

void writescore()
{
     printf("points are");
     get_s(writescore);
     return (writescore);
}
-------------------------------------------------------------------------------------------------
//used to test the score

void score_display()
{
     printf("recured score is");
     get_s(score_display);
     return (score_display);
}

--------------------------------------------------------------------------------------------------
//useed to check the help function

void help()
{
     printf("help is");
     get_s(help);
     return (help);
}
