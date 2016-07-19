
#include <stdio.h>

/*
* 將每次使用者輸入的內容，都寫入data1.txt via fopen("data1.txt", "a");
* 如果使用fopen("data1.txt","w"); 就不會保留原先的內容了。
* Ref: http://imil.au.edu.tw/~hsichcl/TurboC/C_Unit12.htm
*/
void main()
{
    FILE *fp;
    int  var,i;
    int  sum = 0;
    float average;
    //fp = fopen("data1.txt","w");     /* open file pointer */
    fp = fopen("data1.txt","a");     /* open file pointer */

    for ( i = 0; i < 5; i++ )
    {
        printf("input number %d here ==>  ",i+1);
        scanf("%d",&var);
        sum += var;
        fprintf(fp,"%d\n",var);
    }
    average = (float) sum / 5.0;
    fprintf(fp,"The average is %6.2f\n",average);
    fclose(fp);
}

