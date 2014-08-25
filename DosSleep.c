  #define INCL_DOS
  #include <os2.h>
#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

/* DosSleep v 0.2 */

int main(int n,char *par[])
{ int i,rc,nums=0;
  if(n != 2)
  {   printf("DosSleep 0.2\nUsage:DosSleep NumSecods \n(press Q to exit)");
      exit(0);
  }
  nums=atoi(par[1]);

  for(i=0;i<nums;i++)
  {  DosSleep(1000);
     if(_kbhit())
     {  rc =_getch();
        if(rc == 'Q' || rc == 'q') 
                  break;
     }
     printf("\r%i ",nums-i); fflush(stdout);
  }

  return 0;
}