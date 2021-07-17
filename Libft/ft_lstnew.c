#include "libft.h"

t_list	*ft_lstnew(void *content)
{
	t_list	*abc;

	abc = (t_list *)malloc(sizeof(*abc));
	if (!abc)
		return (NULL);
	abc->content = content;
	abc->next = NULL;
	return (abc);
}
