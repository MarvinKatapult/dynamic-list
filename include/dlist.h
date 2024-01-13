#ifndef __DLIST__
#define __DLIST__

#include <stdbool.h>
#include <stdlib.h>

    typedef struct s_D_List {
        int mem;
        int count;
        int size;
        void * items;
    } D_List;

    /**
     * @brief Intializes a List with a static amount of memory
     * @param list List
     * @param num Number of Elements
     * @param size Size of the Elements that go into the list
     */
    bool d_init( D_List * list, int num, int memory );

    /**
     * @brief Adds a item to the list
     * @param list List
     * @param item Pointer to the item to add
     * @return true, if was successful, otherwise false
     */
    bool d_add_item( D_List * list, void * item ); 

    /**
     * @brief Remove Item from list by position
     * @param list List
     * @param position Position of item to remove
     * @return true, if was successful, otherwise false
     */
    bool d_remove_position( D_List * list, int position );

    /**
     * @brief Removes Item from the list
     * @param list List
     * @param item Item to remove
     * @return true, if was successful, otherwise false
     */
    bool d_remove_item( D_List * list, void * item );

    /**
     * @brief Checks if list is empty
     * @param list List
     * @return true, if empty, otherwise false
     */
    bool d_is_empty( D_List * list );

    /**
     * @brief Frees the allocated memory of the list
     * @param list List
     * @return true, if was successful, otherwise false 
     */
    bool d_free( D_List * list );

#endif
