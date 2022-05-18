#include <unistd.h>
#include <stdio.h>
#include <string.h>

unsigned int    ft_strlcpy(char *dest, char *src, unsigned int size)
{
    unsigned int    i;
    unsigned int    counter;

    i = 0;
    counter = 0;
    while (src[counter] != '\0')
    {
        counter++;
    }
    if (size != 0)
    {
        while (src[i] != '\0' && i < size - 1)
        {
            dest[i] = src[i];
            i++;
        }
        dest[i] = '\0';
    }
    return (counter);
}

int		main(void)
{
	char	dest[50];
	char	*src;
	int		size;

	src = "ceci et un test tu voissss";
	size = 10;
	printf("%d\n", ft_strlcpy(dest, src, size));
	printf(".%s.\n\n", dest);
	printf(".%s.\n\n", dest);
}
