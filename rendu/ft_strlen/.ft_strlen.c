#include<unistd.h>

int	ft_strlen(*str)
{
	int	i;

	i = 0;
	while(str[i])
		write(1, str[i], 1);
	i++;
	return(i);
}
