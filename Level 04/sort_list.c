int ascending(int a, int b)
{
	return (a <= b);
}

typedef struct s_list
{
	int     data;
	t_list  *next;
} t_list;


t_list	*sort_list(t_list* lst, int (*cmp)(int, int))
{
    t_list *a = lst;
    t_list *b;
    int tmp;

    while(a)
    {
        b = a->next;
        while(b)
        {
            if (!cmp(a->data, b->data)){
                tmp = a->data;
                a->data = b->data;
                b->data = tmp;
            }
            b = b->next;
        }
        a = a->next;
    }
    return (lst);
}
