#pragma once

#include <stdlib.h>
#include <stdbool.h>

typedef struct s_list
{
    void *data;
    struct s_list *next;
}              t_list;


//t_list *mx_create_node(void*);
//void mx_push_front(t_list**, void*);
//void mx_push_back(t_list**, void*);
//void mx_push_index(t_list**, void*, int);
//void mx_pop_back(t_list**);
//void mx_pop_front(t_list**);
//void mx_pop_index(t_list**, int);
//void mx_clear_list(t_list**);
//int mx_list_size(t_list*);
//void mx_foreach_list(t_list*, void(*)(t_list*));
//t_list *mx_sort_list(t_list*, bool(*)(void*, void*));
void mx_del_node_if(t_list**, void*, bool(*cmp)(void*, void*));
