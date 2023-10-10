/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axcallet <axcallet@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/09/21 14:10:01 by axcallet          #+#    #+#             */
/*   Updated: 2023/10/02 13:50:18 by axcallet         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

int	main(void) {
	std::cout << std::endl;
	std::cout << "=== SUBJECT TESTS ===" << std::endl;
	std::cout << std::endl;

	Fixed	a;
	Fixed	const b(Fixed(5.05f) * Fixed(2));
	
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::max(a, b) << std::endl;
	
	std::cout << std::endl;
	std::cout << "=== OPERATORS TESTS ===" << std::endl;
	std::cout << std::endl;
	Fixed	i(4.2f);
	Fixed	j(6.3f);

	std::cout << "i is " << i << std::endl;
	std::cout << "j is " << j << std::endl;
	std::cout << "i + j = " << (i + j) << std::endl;
	std::cout << "i - j = " << (i - j) << std::endl;
	std::cout << "i * j = " << (i * j) << std::endl;
	std::cout << "i / j = " << (i / j) << std::endl;

	std::cout << std::endl;
	std::cout << "=== COMPARISONS TESTS ===" << std::endl;
	std::cout << std::endl;
	Fixed	k(j);

	std::cout << "i is " << i << std::endl;
	std::cout << "j is " << j << std::endl;
	std::cout << "k is " << k << std::endl;
	std::cout << "i > j = " << (i >  j)<< std::endl;
	std::cout << "i < j = " << (i <  j)<< std::endl;
	std::cout << "i >= j = " << (i >= j)<< std::endl;
	std::cout << "i <= j = " << (i <= j)<< std::endl;
	std::cout << "i == j = " << (i == j)<< std::endl;
	std::cout << "i != j = " << (i != j)<< std::endl;
	std::cout << std::endl;
	std::cout << "i > k = " << (i >  k)<< std::endl;
	std::cout << "i < k = " << (i <  k)<< std::endl;
	std::cout << "i >= k = " << (i >= k)<< std::endl;
	std::cout << "i <= k = " << (i <= k)<< std::endl;
	std::cout << "i == k = " << (i == k)<< std::endl;
	std::cout << "i != k = " << (i != k)<< std::endl;
	std::cout << std::endl;
	std::cout << "j > k = " << (j >  k)<< std::endl;
	std::cout << "j < k = " << (j <  k)<< std::endl;
	std::cout << "j >= k = " << (j >= k)<< std::endl;
	std::cout << "j <= k = " << (j <= k)<< std::endl;
	std::cout << "j == k = " << (j == k)<< std::endl;
	std::cout << "j != k = " << (j != k)<< std::endl;

	std::cout << std::endl;
	std::cout << "=== MAX/MIN TESTS ===" << std::endl;
	std::cout << std::endl;
	std::cout << "i is " << i << std::endl;
	std::cout << "j is " << j << std::endl;
	std::cout << "k is " << k << std::endl;
	std::cout << "Fixed::max(i, j): " << Fixed::max(i, j) << std::endl;
	std::cout << "Fixed::max(i, k): " << Fixed::max(i, k) << std::endl;
	std::cout << "Fixed::max(j, k): " << Fixed::max(j, k) << std::endl;
	std::cout << "Fixed::min(i, j): " << Fixed::min(i, j) << std::endl;
	std::cout << "Fixed::min(i, k): " << Fixed::min(i, k) << std::endl;
	std::cout << "Fixed::min(j, k): " << Fixed::min(j, k) << std::endl;
	std::cout << std::endl;
	
	return 0;
}