#include <signal.h>
#include "my.h"

int	main(int ac, char **av)
{
  int n;
  
  n = my_getnbr(av[1]);
  if (kill(n, SIGUSR1) != -1)
    my_putstr("envoye");
  if (kill(n, SIGUSR1) != -1)
    my_putstr("envoye");
  if (kill(n, SIGUSR1) != -1)
    my_putstr("envoye");
  if (kill(n, SIGUSR1) != -1)
    my_putstr("envoye");
  if (kill(n, SIGUSR1) != -1)
    my_putstr("envoye");
  return (0);
}
