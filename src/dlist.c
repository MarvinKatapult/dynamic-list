#include <dlist.h>
#include <stdio.h>

/**
* @brief Intializes a List with a static amount of memory
* @param list List
* @param num Number of Elements
* @param size Size of the Elements that go into the list
*/
bool d_init( D_List * p_list, int p_num, int p_memory ) {
    p_list->count = 0;
    p_list->size = p_memory;
    p_list->mem = p_num * p_memory;
    p_list->items = calloc( p_memory, p_num );

    return true;
}

/**
* @brief Frees the allocated memory of the list
* @param list List
* @return true, if was successful, otherwise false 
*/
bool d_free( D_List * p_list ) {
   p_list->count = 0; 
   p_list->mem = 0;
   free( p_list->items );

   return true;
}

/**
* @brief Adds a item to the list
* @param list List
* @param item Pointer to the item to add
* @return true, if was successful, otherwise false
*/
bool d_add_item( D_List * p_list, void * p_item ) {
    p_list->count += 1;

    void * current = p_list->items; 
    while ( current != 0L ) {
        current++;
    }
    current = p_item;

    return true;
}
