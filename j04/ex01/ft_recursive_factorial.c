/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   truc.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: nwilcke <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/07/13 10:56:37 by nwilcke           #+#    #+#             */
/*   Updated: 2015/07/13 18:17:17 by nwilcke          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_recursive_factorial(int nb)
{
	if (nb == 0 || nb == 1)
		return (1);
	else if (nb > 12)
		return (0);
	else
		return (nb * ft_recursive_factorial(nb - 1));
}