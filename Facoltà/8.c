#include <stdio.h>

int main (void) {
//size1 e size2
int size1, size2, n;

printf("size1: ");
scanf("%d", &size1);
    if(size1 > 10){
        return 0;
    }

printf("size2: ");
scanf("%d", &size2);
    if(size2 > 10){
        return 0;
    }
//arr alla size e def di a + b
    int arr1[size1];
    int arr2[size2];
    int a = size1;
    int b = size2;
    a += b;
    int result[a];
//arr1 = n
for (int i = 0; i < size1; i++){
    printf("insert n %d of arr1: ", i);
scanf("%d", &n);
    arr1[i] = n;
}
//arr2 = n
for (int i = 0; i < size2; ++i){
    printf("insert n %d of arr2: ", i);
scanf("%d", &n);
    arr2[i] = n;
}
//arr1 + arr2 = result
    for (int i = 0; i < size1; ++i){
       result[i] = arr1[i]; 
    }
    
    for (int i = size1; i < a; ++i){
        result[i] = arr2[i - size1]; 
    }
//print result 
    for (int i = 0; i < a; i++){
        printf("%d ", result[i]);
    }
    return 0;
}