#include <sys/types.h>
#include <unistd.h>
#include <errno.h>
#include <signal.h>
#include "my.h"

void	handler(int sig);
void    under();

int	main()
{
  my_put_nbr(getpid());
  signal(SIGUSR1, handler);
  under();
  while (42)
    {
      sleep(1);
    }
}


void	under()
{
  
  while (42)
    {
      sleep(1);
    }
}

void	handler(int sig)
{
  my_putstr("LOL \n");
  /* 
 if (signal(sig, handler) == SIG_ERR)
    {
      my_put_nbr_error(errno);
    }
  else
    {
      my_putstr("ARME");
    }
  */
  
  under();
}
