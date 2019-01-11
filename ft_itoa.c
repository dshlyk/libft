/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sbruen <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/12/03 19:23:27 by sbruen            #+#    #+#             */
/*   Updated: 2018/12/07 18:31:16 by sbruen           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_itoa(int n)
{
	int				i;
	char			*str;
	char			*ptr;
	unsigned int	u;

	i = ft_int_num(n);
	str = (char *)malloc(sizeof(*str) * (i + 1));
	if (!str)
		return (NULL);
	ptr = str;
	*(str + i) = '\0';
	u = ft_check_num(n);
	if (n == 0)
		*str = '0';
	else if (n < 0)
		*str = '-';
	str += i - 1;
	while (u > 0)
	{
		*str-- = u % 10 + '0';
		u = u / 10;
	}
	return (ptr);
}
