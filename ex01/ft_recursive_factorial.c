/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/11 17:09:11 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/11 17:31:08 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */





int ft_recursive_factorial(int nb)
{
	int	 temp;

	temp = nb;

	if(nb < 1)
	{
			return (0);
	}else{

	if(nb > 1 )
	{
		nb--;
	temp *=	ft_recursive_factorial(nb);
	}
	return temp;
	}
}


