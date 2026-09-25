#include <stdlib.h>

char* longestCommonPrefix(char** strs, int strsSize) {
    char *prefix;
    int len;

    len = 0;
    for (int i = 0; strs[0][i]; i++)
    {
        for (int j = 1; j < strsSize; j++)
            if (strs[j][i] != strs[0][i])
                goto skip_here;
        len++;
    }
    skip_here:
    prefix = malloc(sizeof(char) * len + 1);
    if (!prefix)
        return (NULL);
    for (int i = 0; strs[0][i] && i < len; i++)
        prefix[i] = strs[0][i];
    prefix[len] = '\0';
    return (prefix);
}
