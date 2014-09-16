#include <stdio.h>

int main(int argc, char *argv[]){
char buf[200];
printf("%s", argv[1]);
sprintf(buf, "echo %s", argv[1]);
system(buf);
}
