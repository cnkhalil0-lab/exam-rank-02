#include "ft_list.h"
#include <stdio.h>
#include <stdlib.h>

int	ft_list_size(t_list *begin_list)
{
    int i = 0;
    t_list *s= begin_list;
    while (s)
    {
        s = s -> next;
        i++;
    }
    return i;
}

int main ()
{
    int i = 0;
    t_list * head = malloc(sizeof(t_list));
    head -> next = NULL;
    t_list * s= head;
    while(i < 5)
    {
    s -> next = malloc(sizeof(t_list));
	s = s -> next;
    s -> next = NULL;
    i++;
    }
    i = ft_list_size(head);
    printf("%d",i);
}