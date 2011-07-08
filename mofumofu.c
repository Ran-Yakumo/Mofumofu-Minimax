/*
 * Mofumofu Minimax: PoIR Spellcard Solver
 *
 * Copyright (c) 2011 Ran Yakumo & Friends
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02111, USA.
 */

#include <stdio.h>
#include <stdlib.h>
#include <inttypes.h>
#include <stdint.h>

typedef struct
{
    int hp;
    int sp;
    int attack;
    int defense;
    int evade;
} char_stats;

int main(int argc, char **argv)
{
    // TODO: parameters?
    char_stats player1 = {25, 0, 1, 1, 0};
    char_stats player2 = {30, 0,-1, 1, 1};

    return 0;
}
