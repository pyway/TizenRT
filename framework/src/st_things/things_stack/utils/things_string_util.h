/****************************************************************************
 *
 * Copyright 2017 Samsung Electronics All Rights Reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the License is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND,
 * either express or implied. See the License for the specific
 * language governing permissions and limitations under the License.
 *
 ****************************************************************************/

#ifndef THIGNS_STRING_UTIL_H
#define THIGNS_STRING_UTIL_H

#include <stdlib.h>
#include <unistd.h>

#define MAX_BUF_LEN 512
#define MAX_INPUT_QUERY_LEN 100

int compare_strings(const char *src, const char *dst);
int duplicate_string(const char *src, char **dst);
void concat_string(char **target, char *attach);
int hex_string_to_int(const char *hex, int *num);
int get_id_value_from_query(char id_value[], char *input_query, int size);
char *things_strcat(char *dest, size_t dest_size, const char *src);
char *things_strncpy(char *destination, const char *source, size_t num);

#endif
