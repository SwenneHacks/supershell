#include <libsu.h>

static int			new_len(char *line)
{
	int		i;
	int		x;
	int		len;

	i = 0;
	x = 0;
	len = 0;
	while (line[i])
	{
		if (line[i] == ' ')
		{
			x++;
		}
		i++;
	}
	len = (i - x) + 1;
	return (len);
}


/*
** FT_NOSPACE: removes all spaces...
** returns the new string ands prints new len
*/
char		*ft_nospace(char *line)
{
	char	*str;
	int		i;
	int		x;
	int		len;

	i = 0;
	x = 0;
	len = 0;
	len = new_len(line);
	ft_printf("len check %d\n", len);
	str = (char *)malloc(sizeof(char) * len);
	while (line[i])
	{
		if (line[i] != ' ')
		{
			str[x] = line[i];
			x++;
		}
		i++;
	}
	str[x] = '\0';
	return (str);
}
