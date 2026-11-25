#include <app.h>

#define MAX_LEN 512
#define MAX_WORDS 128

int main() 
{
    char s[MAX_LEN], copy[MAX_LEN], res[MAX_LEN] = "";
    char* words[MAX_WORDS];
    int n = 0;

    printf("Vvedit` rechennya: ");
    fgets(s, MAX_LEN, stdin);
    s[strcspn(s, "\n")] = '\0';
    strcpy(copy, s);

    char* tok = strtok(copy, " ");
    while (tok != NULL && n < MAX_WORDS) {
        words[n++] = tok;
        tok = strtok(NULL, " ");
    }

    for (int i = 0; i < n; i++) {
        int cnt = 0;
        for (int j = 0; j < n; j++) {
            if (strcmp(words[i], words[j]) == 0) cnt++;
        }
        if (cnt == 1) {
            if (res[0] != '\0') strcat(res, " ");
            strcat(res, words[i]);
        }
    }

    printf("Unikal`ni slova: %s\n", res);
    return 0;
}