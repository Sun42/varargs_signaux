#include <stdarg.h>
#include <stdlib.h>

void    var_test(int nb, ...);

int	main()
{
  var_test(3,"Heya", "cest", "fun");
  
}

void	var_test(int nb, ...)
{
  va_list my_var_list;
  char *param;
  int	i;

  i = 0;
  va_start(my_var_list, nb);
  
  while ( i < nb)
    {
      param = va_arg(my_var_list, char *);
      printf("%s \n", param);
      i++;
    }
  va_end(my_var_list);
}
