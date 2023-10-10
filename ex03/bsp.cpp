/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   bsp.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 15:06:25 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/05 13:32:23 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

static Fixed	area(Point const a, Point const b, Point const c) {
	return (((a.get_x()*(b.get_y() - c.get_y())) + (b.get_x()*(c.get_y() - a.get_y())) + (c.get_x()*(a.get_y() - b.get_y()))) / 2);
}

static Fixed	my_fabs(Fixed nb) {
	if (nb < 0)
		return (nb * -1);
	return (nb);
}

bool	bsp(Point const a, Point const b, Point const c, Point const point) {
	Fixed	area_triangle;
	Fixed	area1;
	Fixed	area2;
	Fixed	area3;

	area_triangle = my_fabs(area(a, b, c));
	area1 = my_fabs(area(point, b, c));
	area2 = my_fabs(area(point, a, c));
	area3 = my_fabs(area(point, a, b));
	if (area1 == 0 || area2 == 0 || area3 == 0)
		return (false);
	if ((area1 + area2 + area3) != area_triangle)
		return (false);
	return (true);
}