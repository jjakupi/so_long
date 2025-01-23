/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_words_count.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjakupi <marvin@42lausanne.ch>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/01/23 15:20:23 by jjakupi           #+#    #+#             */
/*   Updated: 2025/01/23 15:20:24 by jjakupi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_putchar_count(char c)
{
	ft_putchar_fd(c, 1);
	return (1);
}

int	ft_putstr_count(char *s)
{
	size_t	count;

	if (!s)
	{
		write(1, "(null)", 6);
		return (6);
	}
	count = 0;
	while (s[count])
	{
		ft_putchar_fd(s[count], 1);
		count++;
	}
	return (count);
}
