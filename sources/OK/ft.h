/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: blo <blo@student.42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/05/28 09:21:35 by blo               #+#    #+#             */
/*   Updated: 2016/06/04 18:05:20 by blo              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

# define BUFF_SIZE 545

# define Y (ym + yt - yo)
# define X (xm + xt - xo)
# define TETRI what_is_tetri(tetri)

# include <unistd.h>
# include <fcntl.h>
# include <stdlib.h>

int		main(int argc, char **argv);

int		go(char *argv);
char	***tab_map(char *buff);
char	***map_to_tab(char *buff, char ***tab);
char	***alpha_tab(char ***tab, int ntetris);

int		check(char *map);
int		checkbloc(char *map, int nbrtetri);
int		blocbybloc(char *map);
int		crosslinked(char *map, int i);
int		checkform(char *map, int compt, int line);

char	*ft_strsub(char *s, int start, int len);

int		strlentris(char *map);
int		tetrislen(char *map);

void	resolution(char ***tab, int ntretris);
int		lower(int ntetris);
void	process(char ***tab, char **final, int nbtetris, int fouillamerde);
int		sizemap(char **final);

char	**finalmap(int lenmap);

#endif
