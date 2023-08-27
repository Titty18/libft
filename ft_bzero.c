/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: conde-an <conde-an@student.42abudhabi.a    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/14 04:00:36 by conde-an          #+#    #+#             */
/*   Updated: 2023/08/14 04:33:38 by conde-an         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <string.h>

//ft_bzero function, which is a common function used to zero out a block of memory. 
//This approach is convenient and efficient for setting memory regions to zero, as it reuses the functionality of ft_memset and abstracts away the details of the memory manipulation. It's a common practice to have functions like ft_bzero as they provide cleaner and more organized code by reusing existing functionality.

//void *ptr: A pointer to the starting memory location of the block that needs to be zeroed out.
//size_t len: The number of bytes to be zeroed out, starting from the memory location pointed to by s.

void	ft_bzero(void *ptr, size_t len) //take only 2 parameters
{
	ft_memset(ptr, 0, len); //the function to set the first len bytes of memory pointed to by ptr to the value 0. This is often used for tasks such as initializing buffers or resetting memory regions to a known state.
//Improving code organization through the reuse of existing functions with ft_memset.
}