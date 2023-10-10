/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 13:30:00 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/02 13:40:52 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

// ==================== CONSTRUCTORS ===================

Fixed::Fixed(void) {
	this->_rawBits = 0;
	return ;
}

Fixed::Fixed(const int nb) {
	this->_rawBits = (nb * (1 << _fractBits));
	return ;
}

Fixed::Fixed(const float nb) {
	this->_rawBits = roundf(nb * (1 << _fractBits));
	return ;
}

Fixed::Fixed(const Fixed &toCopy) {
	*this = toCopy;
	return ;
}

// ==================== DESTRUCTOR ===================

Fixed::~Fixed(void) {
	return ;
}

// ==================== FUNCTIONS ===================

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

// ==================== OPERATORS ====================

Fixed &Fixed::operator=(const Fixed &rhs) {
	if (this == &rhs)
		return (*this);
	this->_rawBits = rhs.getRawBits();
	return (*this);
}

std::ostream	&operator<<(std::ostream &ostream, const Fixed &fixed) {
	ostream << fixed.toFloat();
	return (ostream);
}

bool	Fixed::operator>(const Fixed &fixed) const {
	return (this->getRawBits() > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed) const {
	return (this->getRawBits() < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed) const {
	return (this->getRawBits() >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed) const {
	return (this->getRawBits() <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed) const {
	return (this->getRawBits() == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed) const {
	return (this->getRawBits() != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed) const {
	return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed) const {
	return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed) const {
	return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed) const {
	return (Fixed(this->toFloat() / fixed.toFloat()));
}

// ==================== INCREMENT/DECREMENT ====================

Fixed	Fixed::operator++(int) {
	Fixed	tmp;
	
	tmp._rawBits = this->_rawBits++;
	return (tmp);
}

Fixed	&Fixed::operator++(void) {
	this->_rawBits++;
	return (*this);
}

Fixed	Fixed::operator--(int) {
	Fixed	tmp;
	
	tmp._rawBits = this->_rawBits--;
	return (tmp);
}

Fixed	&Fixed::operator--(void) {
	this->_rawBits--;
	return (*this);
}

// ==================== MAX/MIN ====================

const Fixed&	Fixed::min(const Fixed &nb1, const Fixed &nb2) {
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

const Fixed&	Fixed::max(const Fixed &nb1, const Fixed &nb2) {
	if (nb1 > nb2)
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::min(Fixed &nb1, Fixed &nb2) {
	if (nb1 < nb2)
		return (nb1);
	return (nb2);
}

Fixed&	Fixed::max(Fixed &nb1, Fixed &nb2) {
	if (nb1 > nb2)
		return (nb1);
	return (nb2);	
}
