#ifndef CHAR_DS_H
#define CHAR_DS_H

/*---------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------*/
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

typedef char DS_element;

DS_element create_DS_element(DS_element e)
{
    return e;
}

void print_DS_element(DS_element e)
{
    printf("%c ", e);
}

/*---------------------------------------------------------------------------------------*/
/*---------------------------------------------------------------------------------------*/
#endif