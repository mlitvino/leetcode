int strStr(char* haystack, char* needle) {
    int n_len;

    n_len = strlen(needle);
    for (int j, i = 0; haystack[i]; i++)
    {
        j = 0;
        if (haystack[i] == needle[j])
            while (haystack[i] && needle[j] && haystack[i + j] == needle[j])
                j++;
        if (n_len == j)
            return (i);
    }
    return (-1);
}
