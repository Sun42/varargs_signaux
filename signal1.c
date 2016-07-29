#include <signal.h>

void	handler(int signal);
int	main()
{
  signal(SIGINT, handler);
  sleep(10);
}

void	handler(int nb)
{
  printf("TEST");
}
