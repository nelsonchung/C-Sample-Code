#include <stdio.h>
#include <unistd.h>

int main(void)
{
    FILE *fp = fopen("test","r");

    if(fp)
    fclose(fp);

    FILE *fpw = fopen("test2","w");
    
    if(fpw)
    fclose(fpw);

    FILE *fpa = fopen("test3", "r");
    if(access("test", F_OK)==0)
    {
        printf("test3 exist");
    }
    else
    {
        printf("test3 is not exist\n");
    }
    if(fpa)
        fclose(fpa);

    return;
}
