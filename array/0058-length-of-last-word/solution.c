int lengthOfLastWord(char* s) {
    int i;
    int count;

    i = strlen(s) - 1;
    count = 0;
    while (i >= 0 && isspace(s[i]))
        i--;
    while (i >= 0 && !isspace(s[i]))
    {
        count++;
        i--;
    }
    return (count);
}
