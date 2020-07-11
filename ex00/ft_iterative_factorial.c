/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 17:34:31 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/11 17:39:53 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */




int ft_iterative_factorial(int nb)
{
	int fact;

	fact = 1;
	if(nb < 1)
	{
		return 0;
	}else
	{
		while(0 < nb)
		{
			fact *= nb;
			nb--;
		}
	}
return fact;
}

