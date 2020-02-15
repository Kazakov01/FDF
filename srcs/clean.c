/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   clean.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jquincy <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/30 17:45:19 by jquincy           #+#    #+#             */
/*   Updated: 2019/12/30 17:45:26 by jquincy          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	clean_int_matrix(int **z, int rows)
{
	int		r;

	r = 0;
	while (r < rows)
	{
		free(z[r]);
		r++;
	}
	free(z);
}
