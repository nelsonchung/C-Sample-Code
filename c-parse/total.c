/*************************************************************************
	> File Name: eye.c
	> Author: 
	> Mail: 
	> Created Time: 2015年08月28日 (週五) 16時58分06秒
 ************************************************************************/

#include<stdio.h>

void showEye(void){
    printf("Show %s\n", __FUNCTION__);
}
/*************************************************************************
	> File Name: head.c
	> Author: 
	> Mail: 
	> Created Time: 2015年08月28日 (週五) 16時58分58秒
 ************************************************************************/

#include<stdio.h>

void showHead(void){
    printf("Show %s\n", __FUNCTION__);
}
/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2015年08月28日 (週五) 17時04分59秒
 ************************************************************************/

#include<stdio.h>
#include "common.h"

int main(int argc, char *argv[]){
    showEye();
    showHead();
    showMouse();

    return;
}
/*************************************************************************
	> File Name: mouse.c
	> Author: 
	> Mail: 
	> Created Time: 2015年08月28日 (週五) 17時00分48秒
 ************************************************************************/

#include<stdio.h>

void showMouse(void){
    printf("Show %s\n", __FUNCTION__);
}
