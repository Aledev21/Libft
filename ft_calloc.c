/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aassis-p <aassis-p@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 21:48:13 by aassis-p          #+#    #+#             */
/*   Updated: 2024/10/08 23:40:20 by aassis-p         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
    unsigned char *tmpe;
    size_t i;
    
    i = 0;
    tmpe = malloc(nmemb * size);
    if (!tmpe)
        return (NULL);
    while (i < nmemb * size)
        tmpe[i++] = 0;
    return (tmpe);
}