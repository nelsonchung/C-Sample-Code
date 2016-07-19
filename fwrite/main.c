#include <stdio.h>
#include <stdbool.h>

int main(int argc, char *argv[])
{
    //bool domore=true;
    int domore=1;
    char inputstr[256] = {0};

    FILE *fp = NULL;
    fp = fopen("test.txt", "w+");
    while(domore)
    {
        fprintf(stdout, "Input something\n");
        scanf("%s",inputstr);
        fprintf(fp,"%s\n",inputstr);
        fprintf(stdout, "Do you want to input more?\n");
        scanf("%d",&domore);
    }
    fclose(fp);
}
