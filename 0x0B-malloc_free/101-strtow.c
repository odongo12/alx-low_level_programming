#include <stdlib.h>
#include "main.h"

/**
 * count_word - Counts the number of words in a string.
 * @str: The string to count the words in.
 *
 * Return: The number of words in the string.
 */
int count_word(char *str)
{
	int i, count = 0;

	for (i = 0; str[i]; i++)
	{
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			count++;
	}

	return (count);
}

/**
 * free_words - Frees the memory allocated for an array of words.
 * @words: The array of words to free.
 * @num_words: The number of words in the array.
 */
void free_words(char **words, int num_words)
{
	int i;

	for (i = 0; i < num_words; i++)
		free(words[i]);
	free(words);
}

/**
 * strtow - Splits a string into words.
 * @str: The string to split.
 *
 * Return: A pointer to an array of strings (words), or NULL if it fails.
 */
char **strtow(char *str)
{
	int i, j, k, len, num_words;
	char **words;

	if (str == NULL || *str == '\0')
		return (NULL);

	num_words = count_word(str);
	if (num_words == 0)
		return (NULL);

	words = malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL)
		return (NULL);

	for (i = 0, k = 0; i < num_words; i++)
	{
		while (*str == ' ')
			str++;

		for (len = 0; str[len] && str[len] != ' '; len++)
			;
		len++;

		words[i] = malloc(sizeof(char) * len);
		if (words[i] == NULL)
		{
			free_words(words, i);
			return (NULL);
		}

		for (j = 0; j < len - 1; j++)
			words[i][j] = *str++;
		words[i][j] = '\0';
		k++;
	}

	words[k] = NULL;
	return (words);
}
