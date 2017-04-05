#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
#include<stdio.h>
#include <wait.h>




int main()
{
char ch1[255];
char ch2[255];
void f1()
{
system(ch1);
}
void f2()
{

system(ch2);
}

int i=1;
int j=1;

printf("donner la 1ere ligne  de code \n");
fgets(ch1,50,stdin);
printf("donner la 2eme ligne  de code \n");
fgets(ch2,50,stdin);

i=fork();



if(i>0)
{
sleep(5);
 kill(i,SIGUSR1);
 j=fork();


if(j>0)
{sleep(5); kill (j,SIGUSR2); wait(0);}
else if(j==0)
{
signal(SIGUSR2,f2);
for(;;);
}
}
else if(i==0)
{
signal(SIGUSR1,f1);
for(;;);
}







}
