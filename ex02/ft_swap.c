/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okgamany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:28:06 by okgamany          #+#    #+#             */
/*   Updated: 2020/06/24 09:30:29 by okgamany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_swap(int *r, int *o){
	int zus;
	 
	zus = *o;
	*o = *r;
	*r = zus;
}	
		
