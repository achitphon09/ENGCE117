#include <stdio.h>

 struct Person {
	    char  Name[ 20 ] ;
	    int   Age ;
	    char   Sex ;
	    float Score ;
} ;

int main() {
    struct Person A ;
    struct Person B ;
    
    printf( "Person A\n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", A.Name ) ;
    printf( "Age : \n" ) ;
    scanf( "%d", &A.Age ) ;
    printf( "Sex : \n" ) ;
    scanf( "%s", &A.Sex ) ;
    printf( "Score : \n" ) ;
    scanf( "%f", &A.Score ) ;

    printf( "\n" ) ;

    printf( "Person B\n" ) ;
    printf( "Name : \n" ) ;
    scanf( "%s", B.Name ) ;
    printf( "Age : \n" ) ;
    scanf( "%d", &B.Age ) ;
    printf( "Sex : \n" ) ;
    scanf( "%s", &B.Sex ) ;
    printf( "Score : \n" ) ;
    scanf( "%f", &B.Score ) ;
    

    printf( "----------------------\n" ) ;

    printf( "--| Person A information |--\n" ) ;
    printf("Name : %s (%c)\n", A.Name, A.Sex ) ;
    printf( "Age : %d years old\n", A.Age  ) ;
    printf( "Score:  %.2f points\n", A.Score ) ;

    printf( "--| Person B information |--\n" ) ;
    printf("Name : %s (%c)\n", B.Name, B.Sex ) ;
    printf( "Age : %d years old\n", B.Age  ) ;
    printf( "Score : %.2f points\n", B.Score ) ;


    return 0 ;
}
    