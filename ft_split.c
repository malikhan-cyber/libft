/* ************************************************************************** */
/*                                                                            */
/*                                                         ::::::::           */
/*   ft_split.c                                          :+:    :+:           */
/*                                                      +:+                   */
/*   By: alkhan <marvin@42.fr>                         +#+                    */
/*                                                    +#+                     */
/*   Created: 2026/03/30 14:36:57 by alkhan         #+#    #+#                */
/*   Updated: 2026/03/30 14:37:02 by alkhan         ########   odam.nl        */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
//#include <stdio.h>
//#include <stdlib.h>

static int	words(const char *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c)
			s++;
		if (*s && *s != c)
		{
			count++;
			while (*s && *s != c)
				s++;
		}
	}
	return (count);
}

static char	*cpy_word(const char *s, int start, char c)
{
	char	*word;
	int		i;
	int		j;

	i = 0;
	j = start;
	while (s[j] && s[j] != c)
		j++;
	word = malloc(j - start + 1);
	if (!word)
		return (NULL);
	while (start < j)
		word[i++] = s[start++];
	word[i] = '\0';
	return (word);
}

static void	free_str(char **result, int i)
{
	while (i >= 0)
		free(result[i--]);
	free(result);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	int		i;
	int		k;

	i = 0;
	k = 0;
	result = malloc((words(s, c) + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	while (s[i])
	{
		if (s[i] != c)
		{
			result[k] = cpy_word(s, i, c);
			if (!result[k])
				return (free_str(result, k - 1), NULL);
			k++;
			while (s[i] != c && s[i])
				i++;
		}
		else
			i++;
	}
	result[k] = NULL;
	return (result);
}
/* int	main(void)
{
	char **result;
	int i;

	i = 0;
	result = ft_split("hello!zzzzzzzz", 'z');

	while (result[i])
	{
		printf("%d - %s\n", i, result[i]);
		i++;
	}
} */