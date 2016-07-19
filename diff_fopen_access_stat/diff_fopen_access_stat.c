#include <stdio.h>
#include <string.h>
#include <sys/stat.h>
#include <unistd.h>
#include <time.h>

#define NUMBER_OF_TEST 10000000
//#define NUMBER_OF_TEST 1
#define FILE_NAME "wificrashcount"

int main(int argc, char *argv[])
{
    int cnt=0;
    time_t mytime;
    //printf(ctime(&mytime));
    //fopen
    printf("Start to run fopen process\n");
    mytime = time(NULL);
    printf(ctime(&mytime));
    for(cnt=0; cnt<NUMBER_OF_TEST; cnt++)
    {
        FILE *fp = fopen(FILE_NAME, "r");
        if(fp)
        {
            //file exist
            //printf("The file named %s is exist\n", FILE_NAME);
            fclose(fp);
        }
    }
    mytime = time(NULL);
    printf(ctime(&mytime));
    printf("End to run fopen process\n");
    
    //access
    printf("Start to run access process\n");
    mytime = time(NULL);
    printf(ctime(&mytime));
    for(cnt=0; cnt<NUMBER_OF_TEST; cnt++)
    {
        if(access(FILE_NAME, F_OK)==0)   
        {
            //file exist
            //printf("The file named %s is exist\n", FILE_NAME);
        }
    }
    mytime = time(NULL);
    printf(ctime(&mytime));
    printf("End to run access process\n");

    //stat
    printf("Start to run stat process\n");
    mytime = time(NULL);
    printf(ctime(&mytime));
    for(cnt=0; cnt<NUMBER_OF_TEST; cnt++)
    {
        struct stat buf;
        //printf("file size is %d\n", buf.st_size);
        //if(buf.st_size>0)
        if(stat(FILE_NAME, &buf)==0)
        {
            //file exist
            //printf("The file named %s is exist\n", FILE_NAME);
        }
    }
    mytime = time(NULL);
    printf(ctime(&mytime));
    printf("End to run stat process\n");

    return;
}
