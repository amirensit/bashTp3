#include<unistd.h>
#include<signal.h>
#include<stdlib.h>
#include<stdio.h>





int main()
{

printf("je suis un programme en éxécution,je dure 50 secondes  !! \n");
sleep(50);
signal(SIGUSR1,SIG_IGN);

printf("jai ingnoré le signal SIGUSR1\n");
sleep(10);



}
