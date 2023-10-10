/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:03:27 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/05 11:37:12 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef POINT_HPP
# define POINT_HPP

# include <iostream>
# include "Fixed.hpp"

# define _END		"\033[0m"
# define _RED		"\033[0;31m"
# define _CYAN		"\033[0;36m"
# define _GREEN		"\033[0;32m"
# define _YELLOW	"\033[0;33m"
# define _PURPLE	"\033[0;35m"

class	Point {

	private:
		Fixed	x;
		Fixed	y;
		
	public:
		Point(void);
		Point(const float x, const float y);
		Point(const Point &toCopy);
		Point &operator = (const Point &toCopy);
		~Point(void);

		Fixed	get_x(void) const;
		Fixed	get_y(void) const;
};

bool	bsp(Point const a, Point const b, Point const c, Point const point);

#endif