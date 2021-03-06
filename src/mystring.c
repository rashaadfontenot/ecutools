/**
 * ecutools: IoT Automotive Tuning, Diagnostics & Analytics
 * Copyright (C) 2014 Jeremy Hahn
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#include "mystring.h"

char* MYSTRING_COPY(char *src, size_t len) {
  char *str = malloc(sizeof(char) * (len+1));
  memcpy(str, src, len);
  str[len] = '\0';
  return str;
}

char* MYSTRING_COPYF(char *src, size_t len, char *value) {
  char *str = malloc(sizeof(char) * (len+1));
  snprintf(str, len, src, value);
  str[len] = '\0';
  return str;
}

