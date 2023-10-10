/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Point.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/02 14:03:19 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/02 19:11:29 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Point.hpp"

Point::Point(void) {
	this->x = 0;
	this->y = 0;
	return ;
}

Point::Point(const float x, const float y) {
	this->x = x;
	this->y = y;
	return ;
}

Point::Point(const Point &toCopy) {
	*this = toCopy;
	return ;
}

Point& Point::operator=(const Point &toCopy) {
	if (this == &toCopy)
		return (*this);
	this->x = toCopy.get_x();
	this->y = toCopy.get_y();
	return (*this);
}

Point::~Point(void) {
	return ;
}

Fixed	Point::get_x(void) const {
	return (this->x);
}

Fixed	Point::get_y(void) const {
	return (this->y);
}