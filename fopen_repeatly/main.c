#include <stdio.h>
#include <unistd.h>
#include <string.h>
#include <syslog.h>
#include <errno.h>

int main(void)
{
    printf("(%s)(%d): \n", __FUNCTION__, __LINE__);
    while(1){

        FILE *fp = fopen("test","r");

        if(fp){
            printf("(%s)(%d): fopen ok. The file pointer is %p\n", __FUNCTION__, __LINE__,fp);
            if(0==fclose(fp)){
                printf("(%s)(%d): fclose ok\n", __FUNCTION__, __LINE__);
            }
            else{
                printf("(%s)(%d): fclose failed. %s, with errno %d.\n", __FUNCTION__, __LINE__, strerror(errno), errno);
            }
        }
        else{
            printf("(%s)(%d): fopen fail\n", __FUNCTION__, __LINE__);
        }
        sleep(1);
    }

    return 0;
}
