/***************************************************************************
 *            heap.h
 *
 *  Sun 8 08 10 
 *  Copyright  2010  Ivan Gualandri
 *  Email finarfin@elenhost.org
 ****************************************************************************/
/*
 *  This program is free software; you can redistribute it and/or modify
 *  it under the terms of the GNU General Public License as published by
 *  the Free Software Foundation; either version 2 of the License, or
 *  (at your option) any later version.
 *
 *  This program is distributed in the hope that it will be useful,
 *  but WITHOUT ANY WARRANTY; without even the implied warranty of
 *  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 *  GNU General Public License for more details.
 *
 *  You should have received a copy of the GNU General Public License
 *  along with this program; if not, write to the Free Software
 *  Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
 */

#ifndef __HEAP_H
#define __HEAP_H

/*! \struct header_t 
    \brief Contiene le informazioni relative alle locazioni di memoria 
 */
typedef struct {
	int magic; /*!<For header identification*/
	char is_hole /*!<1 se si tratta di un hole 0 se si tratta di un block*/
	int size;  /*!<Total size of the block (including header and footer)*/
} header_t;

/*! \struct footer_t 
    \brief Contiene altre informazioni relative alle locazioni di memoria 
 */
typedef struct {
	int magic; /*!<For footer identification */
	header_t *header;/*!< Pointer to the block header*/
} footer_t;

#endif