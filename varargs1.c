#include <stdarg.h>
#include <stdlib.h>

void    var_test(int nb, ...);

int	main()
{
  var_test(5, 4, 3 , 2 , 1 ,0);
}

void	var_test(int nb, ...)
{
  va_list my_var_list;

  int test;

  va_start(my_var_list, nb);
  printf("%d", nb);
  while (test != 0)
    {
      test = va_arg(my_var_list, int);
      printf("%d", test);
    }
  va_end(my_var_list);
}
