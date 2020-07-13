/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/12 16:38:15 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/13 17:36:01 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	 my_power;

	my_power = nb;
	if (nb < 1)
	{
		return  -1;
	}

	if(power > 1)
	{
			my_power = my_power* ft_recursive_power(nb, --power);
	}
	return my_power;
}


