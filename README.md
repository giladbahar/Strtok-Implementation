
Certainly! Here is the translated task that you can include in your README file:

Task 3 (40 points)
Define how delimiters are defined in a sentence. Specifically, consider a space, a comma, a period, a question mark, an exclamation mark, a pause in reading, a separator, and any other unique separator.

A delimiter is a sequence of characters that separates words. Words can be separated by one or more delimiters. Delimiters can appear at the beginning, in the middle, or at the end of a word. A delimiter can be one or more characters.

Write a function with the following signature:

c
Copy code
char* my_strtok(char* sentence, char* separators);
The function receives a sentence containing the sentence to be tokenized and a separators string containing all the characters that should be considered as delimiters.

The function should behave like strtok in a standard manner.
The first call to the function should receive the sentence as the first argument. The function should dynamically create and return a pointer to the first word (token) of the sentence.
Subsequent calls with NULL as the sentence argument should return subsequent tokens, using the same list of separators given initially.
If there are no more tokens when the function is called, it should return NULL.
The function should not use the standard strtok function or any library function that performs a similar algorithm!
Example:
separators = "? !."
sentence = " Why?! That’s why."
The first call should be:


my_strtok(sentence, separators);
The function should return: "Why"

The second call should be:


my_strtok(NULL, separators);
The function should return: "That's"

The third call should be:


my_strtok(NULL, separators);
The function should return: "why"

The fourth call should be:


my_strtok(NULL, separators);
The function should return NULL.

Note:
The function should use a static variable.
