/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 15:56:03 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/12 16:34:36 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_iterative_power(int nb, int power)
{
	int		temp_power;

	temp_power = 1;
	if (nb < 1)
	{
		return 0;
	}
	else
	{
		while (0 < power)
		{
			temp_power *=  nb;
			power--;
		}
		return temp_power;
	}
}
	
