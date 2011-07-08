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

#define MAX_HP 45
#define MAX_SP 18

typedef float state;

static state *state_array_init(void)
{
    return malloc(MAX_HP*MAX_SP*MAX_HP*MAX_SP*2);
}

static state state_array_get(state *s, int p1_hp, int p1_sp, int p2_hp, int p2_sp, int turn)
{
    return s[p1_hp+MAX_HP*(p1_hp+MAX_SP*(p2_hp+MAX_HP*(p2_sp+MAX_SP*turn)))];
}

static void state_array_set(state *s, int p1_hp, int p1_sp, int p2_hp, int p2_sp, int turn, state value)
{
    s[p1_hp+MAX_HP*(p1_hp+MAX_SP*(p2_hp+MAX_HP*(p2_sp+MAX_SP*turn)))] = value;
}

static void state_array_destroy(state *s)
{
    free(s);
}

int main(int argc, char **argv)
{
    // TODO: parameters?
    char_stats player1 = {25, 0, 1, 1, 0};
    char_stats player2 = {30, 0,-1, 1, 1};
    state *s = state_array_init();
    if(!s){
        fprintf(stderr, "Failed to allocate state array!\n");
        return -1;
    }

    state_array_destroy(s);
    return 0;
}
