/*************************************************************************
	> File Name: main.c
	> Author: 
	> Mail: 
	> Created Time: 2015年08月28日 (週五) 17時58分36秒
 ************************************************************************/

#include<stdio.h>
#include<dlfcn.h>

int main(int argc, char *argv){
    void *libc;/*handle of the opened library*/
    void (*printf_callEye)();
    void (*printf_callHead)();
    void (*printf_callMouse)();

    if(libc=dlopen("/usr/lib/libshow.so", RTLD_LAZY)){
        printf_callEye=dlsym(libc, "showEye");
        printf_callHead=dlsym(libc, "showHead");
        printf_callMouse=dlsym(libc, "showMouse");
        (*printf_callEye)();
        (*printf_callHead)();
        (*printf_callMouse)();
        dlclose(libc);
    }

    return;
}
