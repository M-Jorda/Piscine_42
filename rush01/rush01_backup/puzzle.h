/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puzzle.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jjorda <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/04 18:56:20 by jjorda            #+#    #+#             */
/*   Updated: 2024/08/04 19:01:12 by jjorda           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

typedef struct s_puzzle
{
	int	**grid;
	int	*top_clues;
	int	*bottom_clues;
	int	*left_clues;
	int	*right_clues;
	int	size;
}	t_puzzle;
