/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cw.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: avan-ni <avan-ni@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/09/03 11:30:44 by cking             #+#    #+#             */
/*   Updated: 2018/09/06 17:51:56 by avan-ni          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CW_H
# define CW_H

# include "libft.h"
# include <stdlib.h>

typedef struct		s_op
{
	char			*name;
	int				argc;
	int				arg[4];
	int				op_code;
	int				ctc;
	char			*desc;
	int				eb;
	int				dunno;
}					t_op;

typedef struct		s_cw
{
	t_list			*playerlist;
	int				nbrplayers;
	t_list			*pclist;
	unsigned char	*mem;
	unsigned int	cyclecounter;
	t_op			op_tab[17];
	int				cycle2die;
	int				cycledelta;
}					t_cw;

typedef struct		s_pc
{
	int				index;
	unsigned int	idnbr;
	int				cr;
	unsigned char	**registers;
	unsigned char	carry;
}					t_pc;

typedef struct		s_player
{
	int				live;
	char			*name;
	char			*warcry;
	unsigned int	idnbr;
}					t_player;

void			ft_initcw(t_cw *cw);
void			ft_docommand(t_cw *cw, t_pc *pc);
void			ft_live(t_cw *cw, t_pc *pc);
char			*hex_to_bin(char *hex);
unsigned char	*dec_to_hex(unsigned char n);
int				*ft_getparam(unsigned char c);
int				ft_verify_eb(t_cw *cw, t_pc *pc);

char			*ft_store_player();
char 			*ft_convert_cor_data(char *str);

#endif
