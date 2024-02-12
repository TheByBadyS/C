/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   so_long.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: toaktas <toaktas@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/18 13:50:59 by toaktas           #+#    #+#             */
/*   Updated: 2023/08/18 16:17:27 by toaktas          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "so_long.h"

int main(int ac, char **av)
{
    t_data  data;

    if (av != 2)
        err_msg("Error : Argument 2 required");
    map_control(av, &data);
    size_control(&data);
    mlx_create(&data);
}
