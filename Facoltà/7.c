#include <stdio.h>
#include <string.h>
#define MAX_LENGTH 30

int lenght (char *arr1, char *arr2){

int len1 = strlen(arr1);
int len2 = strlen(arr2);

if(len2 > len1){
    return 0;
}
for (int i = 0; i <= len1 - len2; ++i) {
if (strncmp(arr1 + i, arr2, len2) == 0) {
    return 1;  
        }
}
    return 0;
}
int main (void){

char arr1[MAX_LENGTH + 1];
char arr2[MAX_LENGTH + 1];

printf("insert: ");
     fgets(arr1, sizeof(arr1), stdin);

printf("insert: ");
     fgets(arr2, sizeof(arr2), stdin);

if (lenght(arr1, arr2)){
    printf("no");
} else {
    printf("si");
}

    return 0;
}