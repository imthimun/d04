/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imthimun <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/07/14 07:33:18 by imthimun          #+#    #+#             */
/*   Updated: 2020/07/14 17:35:58 by imthimun         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_fibonacci(int element)
{
	int		a;
	int		temp_a;
	int		current_fib;

	a = 0;
	current_fib = 1;
	temp_a  = 0;
	element -= 1;
	if (element ==  0)
	{
		return 0;
	}
	else if(element == 1)
	{
		return 1;
	}
	else if (1 < element)
	{
		while(element)
		{
			temp_a = a;
			a = current_fib;
			current_fib += temp_a;
			element--;
		}
	 	return current_fib;		 
	}
	else
	{
	 return -1;		
	}	
}
