/*
 *  baka.h
 *
 *  Copyright (c) 2011 Allan McRae <allan@archlinux.org>
 *
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
 *  along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef BAKA_BAKA_H
#define BAKA_BAKA_H

#include "config.h"

#include <glib/gi18n.h>
#include <gtk/gtk.h>

typedef struct _Baka Baka;

struct _Baka {
	GtkApplication *application;
	GtkBuilder *builder;
	GtkWidget *window;
};

#endif
