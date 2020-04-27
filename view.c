#include <stdio.h>
#include <unistd.h>
#include <error.h>
#include <stdlib.h>
#include <sys/ioctl.h>

/*
Please make sure you understand host.c
*/

int main(void){

    FILE *fp;
    fp = fopen("./db.txt","r");
    int unread;
    char *buf;
    char ch;

    printf("HTTP/1.1 200 OK\r\n");
    printf("Content-Type: text/html; charset=UTF-8\r\n\r\n");
    // output to stdout
    printf("<html><head><meta http-equiv=\"content-type\" content=\"text/html;charset=utf-8\">\n");
    printf("<title>DB data</title>\n");
    printf("<body>");

     while((fscanf(fp,"%c",&ch)!=EOF)){
           printf("%c",ch);
      }

    printf("</body></html>\n");
    printf("\n" );
    fclose(fp);
    
    exit(0);
}