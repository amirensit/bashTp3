#include <stdio.h>
#include <signal.h>
void tick(int i)
{
int hh,mn,sc;
sc++;
if(sc==60)
{
sc=0;
mn++;
if(mn==60) 
{
mn=0;
hh++;
if(hh==24) hh=0;
}
}
alarm(1);
printf("%d :%d:%d\n",hh%24,mn%60,sc%60);
}
int main()
{

signal(SIGALRM,tick);
alarm(1);
for(;;);




}
