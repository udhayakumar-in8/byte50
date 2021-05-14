char *strchr(const char *string, int c) -- Find first occurrence of character c in string.
char *strrchr(const char *string, int c) -- Find last occurrence of character c in string.
char *strstr(const char *s1, const char *s2) -- locates the first occurrence of the string s2 in string s1.
char *strpbrk(const char *s1, const char *s2) -- returns a pointer to the first occurrence in string s1 of any character from string s2, or a null pointer if no character from s2 exists in s1
size_t strspn(const char *s1, const char *s2) -- returns the number of characters at the begining of s1 that match s2.
size_t strcspn(const char *s1, const char *s2) -- returns the number of characters at the begining of s1 that do not match s2.
char *strtok(char *s1, const char *s2) -- break the string pointed to by s1 into a sequence of tokens, each of which is delimited by one or more characters from the string pointed to by s2.
char *strtok_r(char *s1, const char *s2, char **lasts) -- has the same functionality as strtok() except that a pointer to a string placeholder lasts must be supplied by the caller. 