/*
 * File: handle.c
 * Auth: Oghenemeru Avwemoya
 * 	 Otung Princess
 */

#include "main.h"

/**
 * hand_buf - function to concatenate buffer
 * @buff: points to buffer
 * @c: character to concatenate
 * @ibuf: index of buffer pointer
 *
 * Return: index of buffer pointer
 */
unsigned int hand_buf(char *buff, char c, unsigned int ibuf)
{
	if (ibuf == 1024)
	{
		print_buf(buf, ibuf);
		ibuf = 0;
	}
	buf[ibuf] = c;
	ibuf++;
	return (ibuf);
}
