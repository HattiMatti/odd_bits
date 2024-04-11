/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   list.h                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: msiitone <msiitone@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/11 23:13:19 by msiitone          #+#    #+#             */
/*   Updated: 2024/04/12 00:25:40 by msiitone         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIST_H
# define LIST_H

#include <stdlib.h>

typedef struct Node {
	int	data;
	struct Node *next;
}	Node;

#endif
