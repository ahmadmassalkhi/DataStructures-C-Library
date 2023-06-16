#ifndef CHAR_SORT_H
#define CHAR_SORT_H

/*---------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>

typedef char sortElement;

sortElement create_sortElement(sortElement e)
{
    return e;
}

int compare_sortElements(sortElement e1, sortElement e2)
{
    if (e1 == e2)
        return 0;
    return (e1 > e2) ? 1 : -1;
}

void print_sortElement(sortElement e)
{
    printf("%c ", e);
}

/*---------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------*/
#endif