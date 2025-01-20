#include <stdio.h>

void SwapAge(int *age1, int *age2) ;

int main() {
    struct Person {
        char name[50];
        int age;
    };

    struct Person personA, personB;


    printf("Input A\n");
    printf("Name : \n");
    scanf("%s", personA.name);
    printf("Age : \n");
    scanf("%d", &personA.age);

    printf( "\n" ) ;

    printf("Input B\n");
    printf("Name : \n");
    scanf("%s", personB.name);
    printf("Age : \n");
    scanf("%d", &personB.age);

    printf( "\n" ) ;

    printf("\n** RESULT **\n");
    printf("Name: %s (%d)\n", personA.name, personA.age);
    printf("Name: %s (%d)\n", personB.name, personB.age);

   
    SwapAge(&personA.age, &personB.age);

  
    printf("\n** SWAP AGE **\n");
    printf("Name: %s (%d)\n", personA.name, personA.age);
    printf("Name: %s (%d)\n", personB.name, personB.age);

    return 0;
}

void SwapAge(int *age1, int *age2) {
 int temp = *age1;
    *age1 = *age2;
    *age2 = temp;
}
