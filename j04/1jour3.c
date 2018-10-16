#include <unistd.h>
	
** Recursive function is the one that :
1. calls itself
2. has stoping condition
3. if there are counters - they are better placed around fn(i)
	
** cannot declare int inside a recursive function - it will break !
int	fn(int i)
{
	if (i <= 5)
	{
		i++;
		write(1, "D", 1)
		fn(i);
		write(1, "F", 1)
		return(0);
	}					** will display DDDDDDDFFFFFF
	else
	{
		return (0);
	}
}o

int	main()
{
	fn(0);
	return (0);
}
