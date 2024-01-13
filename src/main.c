
#include <stdio.h>
#include <dlist.h>

int main() {
    
    printf( "Hello World\n" );

    D_List list;
    d_init( &list, 10, sizeof( int ) );

    float number = 0.5;
    d_add_item( &list, (void *)&number );
    d_free( &list );

    return 0;
}
