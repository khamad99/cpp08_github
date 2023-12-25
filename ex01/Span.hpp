/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Span.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: kalshaer <kalshaer@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/18 14:12:37 by kalshaer          #+#    #+#             */
/*   Updated: 2023/12/25 13:45:36 by kalshaer         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SPAN_HPP
# define SPAN_HPP

# include <iostream>
# include <string>
# include <iomanip>
# include <cmath>
# include <limits>
# include <sstream>
# include <algorithm>
# include <vector>
# include <list>
# include <deque>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_v;
		Span();
	public:
		Span(unsigned int n);
		Span(Span const & src);
		~Span();
		Span & operator=(Span const & src);

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();

		class FullException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
		class NoSpanException : public std::exception
		{
			public:
				virtual const char* what() const throw();
		};
};

#endif