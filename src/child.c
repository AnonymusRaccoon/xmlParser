/*
** EPITECH PROJECT, 2020
** Twac
** File description:
** child
*/

#include "xml.h"

int xml_getchildcount(node *n)
{
    int i = 1;

    if (!n || !n->child)
        return (0);
    n = n->child;
    while (n->next) {
        n = n->next;
        i++;
    }
    return (i);
}