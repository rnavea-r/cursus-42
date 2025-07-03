/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnavea-r <rnavea-r@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 16:42:06 by rnavea-r          #+#    #+#             */
/*   Updated: 2024/12/24 00:58:28 by rnavea-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// Divide un string en un array de palabras, utilizando un carácter específico
// como delimitador. Cada palabra se guarda en un bloque de memoria separado.

static char	**free_array(char **ptr, int i) //Libera mem de un array de punteros
{
	while (i > 0)
	{
		i--;
		free(ptr[i]);
	}
	free(ptr);
	return (0);
}

static int	ft_count_words(char const *str, char c) //Cuenta el n de palabras
{
	int	i;
	int	count;

	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == c)
			i++;
		else
		{
			count++;
			while (str[i] && str[i] != c)
				i++;
		}
	}
	return (count);
}

static char	*ft_putword(char *word, char const *s, int i, int world_len)
{
	int	j;

	j = 0;
	while (world_len > 0)
	{
		word[j] = s[i - world_len];
		j++;
		world_len--;
	}
	word[j] = '\0';
	return (word);
}

static char	**ft_split_words(char const *s, char c, char **s2, int num_words)
{
	int	i;
	int	word;
	int	word_len;

	i = 0;
	word = 0;
	word_len = 0;
	while (word < num_words)
	{
		while (s[i] && s[i] == c)
			i++;
		while (s[i] && s[i] != c)
		{
			i++;
			word_len++;
		}
		s2[word] = (char *)malloc(sizeof(char) * (word_len +1));
		if (!s2[word])
			return (free_array(s2, word));
		ft_putword(s2[word], s, i, word_len);
		word_len = 0;
		word++;
	}
	s2[word] = 0;
	return (s2);
}

char	**ft_split(char const *s, char c)
{
	char			**s2;
	unsigned int	num_words;

	if (!s)
		return (0);
	num_words = ft_count_words(s, c);
	s2 = (char **)malloc(sizeof(char *) * (num_words +1));
	if (!s2)
		return (0);
	s2 = ft_split_words(s, c, s2, num_words);
	return (s2);
}

/*int main(void)
{
	char **result;
    char *str = "Hello, test split";
    char delimiter = ' ';
    int i = 0;

    result = ft_split(str, delimiter);
    if (!result)
    {
        printf("Error: does not string.\n");
        return (1);
    }

    printf("words found:\n");
    while (result[i])
    {
        printf("[%s]\n", result[i]);
        free(result[i]); //libera cada palabra
        i++;
    }
    free(result); // Libera el array de punteros.
    return (0);
}*/