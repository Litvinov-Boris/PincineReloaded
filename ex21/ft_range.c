/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: svivienn <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/02 21:50:03 by svivienn          #+#    #+#             */
/*   Updated: 2019/04/02 21:50:04 by svivienn         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int *rez;
	int *save;

	if (min >= max)
		return (NULL);
	rez = (int*)malloc(sizeof(*rez) * (max - min));
	save = rez;
	if (rez == NULL)
		return (NULL);
	while (min < max)
	{
		*save = min;
		min++;
		save++;
	}
	return (rez);
}
