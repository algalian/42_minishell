#include<stdio.h>
#include<stdlib.h>
#include"./libft/libft.h"


char  *expand(char *s)
{
	int	i;
	int	j;
	char *var = "VARIABLE";
	char *alias = "a";
	int	len;
	char *pos;
	char *x

	if(!ft_strrchr(s[i], '$'))
			return(s);
	i = 0;
	len = ft_strlen(alias);
	while(s[i])
    {
		pos = ft_strnstr(s[i],ft_strjoin("$",alias),len);
		while(s[i] != '$' && s[i])
			i++;
		malloc(sizeof(char) * (i+1));
		j = 0;
		while(x[j])
		{
			x[j] = s[j];
			j++;
		}
		//attach  the $s to the x if pos exists
	}
	return(0);
}