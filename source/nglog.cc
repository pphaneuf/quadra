/* -*- Mode: C++; c-basic-offset: 2; tab-width: 2; indent-tabs-mode: nil -*-
 * 
 * Quadra, an action puzzle game
 * Copyright (C) 1998-2000  Ludus Design
 * 
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 * 
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 * 
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
 */

#include "nglog.h"

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#ifdef WIN32
#define WIN32_LEAN_AND_MEAN
#include <windows.h>
#endif
#include <stdio.h>
#include "game.h"
#include "overmind.h"
#include "global.h"

const char *log_team(int t) {
	const char *team="none";
	switch(t) {
		case 0: team="orange"; break;
		case 1: team="cyan"; break;
		case 2: team="red"; break;
		case 3: team="purple"; break;
		case 4: team="yellow"; break;
		case 5: team="green"; break;
		case 6: team="blue"; break;
		case 7: team="gray"; break;
	}
	return team;
}

const char *log_handicap(int h) {
	const char *handi="unknown";
	switch(h) {
		case 0: handi="beginner"; break;
		case 1: handi="apprentice"; break;
		case 2: handi="intermediate"; break;
		case 3: handi="master"; break;
		case 4: handi="grand_master"; break;
	}
	return handi;
}
