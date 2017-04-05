#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
#include<stdio.h>
void handler(int n)
{
printf("hello from handler function !\n");
alarm(1);
}

int main()
{
int cpt=(rand()%5) +1;
alarm(cpt);
signal(SIGALRM,handler);
alarm(cpt);
for(;;);
return 0;
}
