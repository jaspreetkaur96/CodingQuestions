#include <math.h>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <assert.h>
#include <limits.h>
#include <stdbool.h>

int camelcase(char* s) {
    int l;
    int a = 1;
    l = strlen(s);
    for(int i = 0; i<l; i++)
    {
        if(s[i]>='A' && s[i]<='Z')
            a++;
    }
    return a;
}

int main() {
    char* s = (char *)malloc(512000 * sizeof(char));
    scanf("%s", s);
    int result = camelcase(s);
    printf("%d\n", result);
    return 0;
}
