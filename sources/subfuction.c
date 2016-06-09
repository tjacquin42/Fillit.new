/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   subfuction.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/06/04 17:18:55 by blo               #+#    #+#             */
/*   Updated: 2016/06/04 17:59:23 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft.h"

char	**finalmap(int lenmap)
{
	char	**finalmap;
	int		line;
	int		kase;

	line = 0;
	finalmap = (char **)malloc(sizeof(char*) * lenmap);
	while (line < lenmap)
	{
		finalmap[line] = (char *)malloc(sizeof(char) * lenmap + 1);
		line++;
	}
	line = 0;
	while (line < lenmap)
	{
		kase = 0;
		while (kase < lenmap)
		{
			finalmap[line][kase] = '.';
			kase++;
		}
		finalmap[line][kase] = '\0';
		line++;
	}
	return (finalmap);
}
