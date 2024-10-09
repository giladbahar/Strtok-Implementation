#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include <ctype.h>

char* my_strtok(char* sentence, char* separators);
void main()
{
	char* separators = "? !.";
	char* sentence = " Why?! That’s why.";
	char* token = my_strtok(sentence, separators);

	while (token != NULL)
	{
		puts(token);  
		free(token); 
		token = my_strtok(NULL, separators);  
	}
}
char* my_strtok(char* sentence, char* separators)
{
	char* word;
	int i = 0;
	static char* start;
	if (sentence != NULL)
		start = sentence;
	word = (char*)malloc(strlen(start) + 1);
	while (*start && strchr(separators, *start))
		start++;
	while (*start && !strchr(separators, *start))
	{
		word[i++] = *start;
		start++;
	}
	if (i > 0)
	{
		word[i] = '\0';
		word = (char*)realloc(word, i + 1);
		return word;
	}
	free(word);
	return NULL;

}
