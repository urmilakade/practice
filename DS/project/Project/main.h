#include<stdio.h>
#include<time.h>

typedef struct project{
int arr[4][3][2];
}Sp;

Sp *declaration(void);
void rand_function(Sp **ptr);
void print(Sp *ptr);
void string_compare(void);
void pattern(void);
int access_elements(Sp *ptr);
void acending(void);
