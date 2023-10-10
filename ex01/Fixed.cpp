/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:30:00 by axcallet          #+#    #+#             */
/*   Updated: 2023/09/27 11:51:22 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed(void) {
	std::cout << "Default constructor called" << std::endl;
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(const int nb) {
	std::cout << "Int constructor called" << std::endl;
	this->_rawBits = (nb * (1 << _fractBits));
	return ;
}

Fixed::Fixed(const float nb) {
	std::cout << "Float constructor called" << std::endl;
	this->_rawBits = roundf(nb * (1 << _fractBits));
	return ;
}

Fixed::Fixed(const Fixed &toCopy) {
	std::cout << "Copy constructor called" << std::endl;
	*this = toCopy;
	return ;
}

Fixed &Fixed::operator=(const Fixed &rhs) {
	std::cout << "Copy assignment operator called" << std::endl;
	if (this == &rhs)
		return (*this);
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

Fixed::~Fixed(void) {
	std::cout << "Destructor called" << std::endl;
	return ;
}

int	Fixed::toInt(void) const {
	return (this->_rawBits / (1 << this->_fractBits));
}

float	Fixed::toFloat(void) const {
	return static_cast<float>(this->_rawBits) / (1 << this->_fractBits);
}

int	Fixed::getRawBits(void) const {
	return (this->_rawBits);
}

void	Fixed::setRawBits(const int raw) {
	this->_rawBits = raw;
	return ;
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed) {
	ostream << fixed.toFloat();
	return (ostream);
}
