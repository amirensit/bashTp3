#include <stdio.h>
#include <signal.h>
#include <unistd.h>
#include <stdlib.h>
int main()
{
int i;
i=fork();
int status;
if(i==0)
{
sleep(1);
printf("je suis le processus fils,mon pid est %d \n",getpid() );
printf("j'effectue un travail\n");
sleep(30);
printf("je vient de terminer\n");
exit(status);

}

else if(i>0)
{
wait(&status);
printf("je suis le père,mon pid est %d\n",getpid());

if(WIFEXITED(status))

printf("c'est une termainaison normal\n");


else
{
printf("c'est une termainaison anormal\n");
printf("le numéro de signal qui m'a arreté est %d\n",WTERMSIG(status));
}


}

}
