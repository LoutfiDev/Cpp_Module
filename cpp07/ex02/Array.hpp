/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Array.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yloutfi <yloutfi@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/14 09:30:54 by yloutfi           #+#    #+#             */
/*   Updated: 2024/01/09 09:59:56 by yloutfi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __ARRAY__
#define __ARRAY__

#include <iostream>

template <typename T> class Array
{
	private:
		T *arr;
		unsigned int len;
	
	public:
		Array();
		Array(unsigned int);
		Array(const Array& copy);
		Array &operator=(const Array& src);
		T& operator[](const int location);
		const T& operator[](const int location) const;
		unsigned int size( void );
		~Array();
};

template<typename T> Array<T>::Array()
{
	arr = new T;
	len = 0;
}

template<typename T> Array<T>::Array(unsigned int n)
{
	arr = new T[n];
	len = n;
	for (unsigned int i = 0; i < n; i++)
		arr[i] = 0;
}

template<typename T> Array<T>::Array(const Array& copy)
{
	len = copy.len;
	arr = new T[copy.len];
	for (unsigned int i = 0; i < copy.len; i++)
		arr[i] = copy.arr[i];
}

template<typename T> Array<T>& Array<T>::operator=(const Array& src)
{
	if(this != src)
	{
		len = src.len;
		delete[] arr;
		arr = new T[src.len];
		for(int i =0; i < src.len; i++)
			arr[i] = src.arr[i];
	}
	return (*this);
}

template <class T> T& Array<T>::operator[](const int idx)
{
    if (idx < 0 || static_cast<unsigned int>(idx) >= len) 
		throw std::out_of_range("Invalid array access");
    else 
		return arr[idx];
}

template <class T> const T& Array<T>::operator[](const int idx) const
{
    if (idx < 0 || static_cast<unsigned int>(idx) >= len) 
		throw std::out_of_range("Invalid array access");
    else 
		return arr[idx];
}


template <class T> unsigned int Array<T>::size( void )
{
	return (len);
}

template<typename T> Array<T>::~Array() { delete[] arr; }

#endif