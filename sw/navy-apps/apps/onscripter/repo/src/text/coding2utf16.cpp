/* -*- C++ -*-
*
*  coding2utf16.cpp
*
*  Copyright (C) 2014 jh10001 <jh10001@live.cn>
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
*  along with this program; if not, write to the Free Software
*  Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#include "coding2utf16.h"

char Coding2UTF16::space[4];
char Coding2UTF16::minus[4];
char Coding2UTF16::bracket[8];
char Coding2UTF16::num_str[24];
char Coding2UTF16::DEFAULT_START_KINSOKU[40];
char Coding2UTF16::DEFAULT_END_KINSOKU[12];
char Coding2UTF16::DEFAULT_SAVE_MENU_NAME[12];
char Coding2UTF16::DEFAULT_LOAD_MENU_NAME[12];
char Coding2UTF16::DEFAULT_SAVE_ITEM_NAME[8];
char Coding2UTF16::MESSAGE_SAVE_EXIST[24];
char Coding2UTF16::MESSAGE_SAVE_EMPTY[32];
char Coding2UTF16::MESSAGE_SAVE_CONFIRM[40];
char Coding2UTF16::MESSAGE_LOAD_CONFIRM[40];
char Coding2UTF16::MESSAGE_RESET_CONFIRM[36];
char Coding2UTF16::MESSAGE_END_CONFIRM[32];
char Coding2UTF16::MESSAGE_YES[8];
char Coding2UTF16::MESSAGE_NO[8];
char Coding2UTF16::MESSAGE_OK[8];
char Coding2UTF16::MESSAGE_CANCEL[12];
