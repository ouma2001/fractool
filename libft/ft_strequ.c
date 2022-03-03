/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: omazoz <omazoz@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 18:33:40 by omazoz            #+#    #+#             */
/*   Updated: 2022/02/27 22:57:06 by omazoz           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strequ(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i])
	{
		if (!str1[i])
			return (1);
		i++;
	}
	return (0);
}