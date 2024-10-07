#include "libft.h"
#include "printft.h"

void ft_putstr(char *str)
{
    int i;
    
    i = 0;
    while (str[i])
    {
        write (1, &str[i], 1);
        i++;
    }
}

void    ft_putnbr_base(int   num, char c)
{
    char    w;

    if (c == 'i' || c == 'd')
    {
        if (num == -2147483648)
        {
            write (1, "-2147483648", 11);
            return ;
        }
        if (num < 0)
        {
            num = -num;
            write (1, "-", 1);
        }
        if (num > 9)
            ft_putnbr_base(num/10, c);
        w = '0' + num % 10;
        write (1, &w, 1);
    }
    else
    {
        char    *hex;
        if (c == 'X')
            hex = "0123456789ABCDEF";
        else
            hex = "0123456789abcdef";
        if  (num > 15)
            ft_putnbr_base(num/16, c);
        w = hex[num % 16];
        write(1, &w, 1);
    }
}

void ft_put_dir(void *ptr)
{
      char    *hex;
      unsigned long   dir;
      int    i;
      char    hexdir[16];

      i = 0;
      hex = "0123456789abcdef";
      dir = (unsigned long)ptr;
      while (i < 16)
      {
          hexdir[i] = '0';
          i++;
      }
      i = 15;
      while (i >= 0 && dir != 0)
      {
          hexdir[i] = hex[dir % 16];
          dir = dir/16;
          i--;
      }
      i = 0;
      while (i < 16 && hexdir[i] == '0')
          i++;
      write(1, "0x", 2);
      write(1, &hexdir[i], 16-i);
}

void    ft_putnbr_u(unsigned int num)
{
    char    u;

    if (num > 9)
        ft_putnbr_u(num / 10);
    u = '0' + num % 10;
    write (1, &u, 1);
}
