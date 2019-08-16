#include <stdlib.h>
#include <stdio.h>

int	get_tot_len(int argc, char **argv)
{
	int	len;
	int	i;
	int	j;

	len = 0;
	i = 1;
	j = 0;
	while (i < argc)
	{
		while (argv[i][j])
		{
			j++;
			len++;
		}
		len++;
		i++;
	}
	return len;
}

char	*ft_concat_params(int argc, char **argv)
{
	char	*res;
	int	totlen;
	int	i;
	int	j;
	int	k;

	i = 1;
	j = 0;
	totlen = get_tot_len(argc, argv);
	res = (char *)malloc(sizeof(char) * (totlen + 1));
	while (i < argc)
        {
		k = 0;
		while (argv[i][k])
		{
			res[j] = argv[i][k];
			j++;
			k++;
		}
		res[j++] = '\n';
		i++;
        }
        res[j] = '\0';
	return (res);
}
