/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zoom_option.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mzane <marvin@42.fr>                       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/02/17 07:54:58 by mzane             #+#    #+#             */
/*   Updated: 2015/05/05 12:26:11 by mzane            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "fdf.h"

void	zoom_map(t_env *e)
{
	e->pad += 1;
	erase(e);
}

void	de_zoom_map(t_env *e)
{
	e->pad -= 1;
	erase(e);
}
