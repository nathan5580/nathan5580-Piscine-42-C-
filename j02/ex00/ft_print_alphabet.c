/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_alphabet.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/09 15:33:28 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/11 18:05:57 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void		ft_print_alphabet(void)
{
	char	i;

	i = 97;
	while (i <= 122)
	{
		ft_putchar(i);
		i = i + 1;
	}
}