typedef struct      s_list
{
    struct s_list   *next;
    void            *data;
}                   t_list;

int cmp(void *a, void *b){
    int val_a = *(int *)a;
    int val_b = *(int *)b;
    if (val_a == val_b) 
        return 0;
    return (1);
}

void ft_list_remove_if(t_list **begin_list, void *data_ref, int (*cmp)())
{
    t_list **a = begin_list;
    t_list *tmp;

    if (!begin_list || !(*begin_list))
        return;
    while(*a)
    {
        if (cmp((*a)->data, data_ref) == 0)
        {
            tmp = *a;
            *a = (*a)->next;
            free(tmp);
        }
        else
            a = &(*a)->next; 
    }
}