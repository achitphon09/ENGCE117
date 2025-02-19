#include <stdio.h>

struct Node {
    int Data;
    struct Node *Next;
    struct Node *Back;
} typedef N;

void AddNode(N **, int *Data);
void InsertNode(N **, int *Data, int *pos);
void DeleteNode(N **, int *pos);
void SwapNode(N **, int *pos1, int *pos2);
void ShowFront(N **);
void ShowBack(N **);

int main() {
    N *start = NULL;
    int data = 0, pos1 = 0, pos2 = 0;

    AddNode(&start, &data); AddNode(&start, &data); AddNode(&start, &data);
    ShowFront(&start);
    ShowBack(&start);

    InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1); InsertNode(&start, &data, &pos1);
    ShowFront(&start);

    DeleteNode(&start, &pos1); DeleteNode(&start, &pos1);
    ShowFront(&start);

    SwapNode(&start, &pos1, &pos2); ShowFront(&start);
    return 0;
}

void AddNode(N **Walk, int *Data) {
    N *temp = NULL ;    
    while( *Walk != NULL ) {    
        temp = *Walk ;  
        Walk = &(*Walk)->Next ; 
    }
    *Walk = new N ;  
    scanf( "%d", Data ) ;   
    (*Walk)->Data = *Data ; 
    (*Walk)->Next = NULL ;  
    (*Walk)->Back = temp ;  
}

void ShowFront(N **Walk) {
    printf( "Show Front : ");   
    while( *Walk != NULL ) {
        printf( "%d ",(*Walk)->Data ) ;  
        Walk = &(*Walk)->Next ;     
    }
    printf( "\n" ) ;    
}

void ShowBack(N **Walk) {
    printf( "Show Back : " ) ;
    while( (*Walk)->Next != NULL ) {    
        Walk = &(*Walk)->Next ;
    }
    while( (*Walk) != NULL ) {
        printf( "%d ", (*Walk)->Data ) ;    
        Walk = &(*Walk)->Back ; 
    }
    printf("\n");
}

void InsertNode(N **Walk, int *Data, int *position) {   
    int i = 1 ; 
    scanf( "%d %d", Data, position ) ;  
    while( *Walk != NULL ) {
        if( i == *position ) {  
            N *Newnode = new N ;    
            Newnode->Data = *Data ;
            Newnode->Next = *Walk ;
            Newnode->Back = (*Walk)->Back ;
            *Walk = Newnode ;
        }
        Walk = &(*Walk)->Next ; 
        i++ ;
    }
    if( *position > i && *Walk == NULL ) {  
        N *overnode = new N ;
        overnode->Data = *Data ;
        overnode->Back = *Walk ;
        overnode->Next = NULL ;
        *Walk = overnode ; 
    }
}

void DeleteNode(N **Walk, int *position) {
    int i = 1 ;
    scanf( "%d", position ) ;
    while( *Walk != NULL ) {
        if( i == *position ){
            N *temp = new N ;   
            temp = *Walk ;  
            temp->Next = (*Walk)->Next ;    
            temp->Next->Back = (*Walk)->Back ;  
            (*Walk) = temp->Next ;   
            delete temp ;    
        }
        Walk = &(*Walk)->Next ;
        i++ ;
    }
}

void SwapNode(N **Walk, int *position1, int *position2) {
    scanf( "%d %d", position1, position2 ) ;
    N *newnode = NULL;  
    N *secnode = NULL ;
    int i = 1 ;
    while( *Walk != NULL ) {
        if( i == *position1 ) {
            newnode = *Walk ;   //
        }
        if( i == *position2 ) {
            secnode = *Walk ;        
        }
        Walk = &(*Walk)->Next ;
        i++ ;
    }
    int datatemp = newnode->Data ;
    newnode->Data = secnode->Data ;
    secnode->Data = datatemp ;
}