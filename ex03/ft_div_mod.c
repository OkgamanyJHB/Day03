/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: okgamany <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/24 09:31:42 by okgamany          #+#    #+#             */
/*   Updated: 2020/06/24 09:33:44 by okgamany         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_div_mod(int r, int o, int *div, int *mod){

	*div = r / o;
	*mod = r % o;
}	
