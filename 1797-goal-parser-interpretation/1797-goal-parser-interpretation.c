

char * interpret(char * command)
{
    char* result = malloc(strlen(command) + 1); 
    int i = 0, j = 0;
    while (command[i] != '\0') {
        if (command[i] == 'G') {
            result[j++] = 'G'; 
            i++;
        }
        else if (command[i] == '(' && command[i + 1] == ')') {
            result[j++] = 'o';
            i += 2;
        }
        else if (command[i] == '(' && command[i + 1] == 'a') {
            result[j++] = 'a'; 
            result[j++] = 'l';
            i += 4;
        }
    }
    result[j] = '\0'; 
    return result;
}