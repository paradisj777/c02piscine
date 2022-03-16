/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jparadis <marvin@42quebec.com>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/16 14:34:27 by jparadis          #+#    #+#             */
/*   Updated: 2022/03/16 16:33:12 by jparadis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	i;

	if (str[0] == '\0')
	{
		return (1);
	}
	else
	{
		i = 0;
		while (str[i] != '\0')
		{
			if (!(str[i] >= 'a' && str[i] <= 'z'))
				return (0);
		i++;
		}
		return (1);
	}
}