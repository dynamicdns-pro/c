/*
 * update_200_response_any_of.h
 *
 * 
 */

#ifndef _update_200_response_any_of_H_
#define _update_200_response_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_200_response_any_of_t update_200_response_any_of_t;




typedef struct update_200_response_any_of_t {
    char *message; // string

} update_200_response_any_of_t;

update_200_response_any_of_t *update_200_response_any_of_create(
    char *message
);

void update_200_response_any_of_free(update_200_response_any_of_t *update_200_response_any_of);

update_200_response_any_of_t *update_200_response_any_of_parseFromJSON(cJSON *update_200_response_any_ofJSON);

cJSON *update_200_response_any_of_convertToJSON(update_200_response_any_of_t *update_200_response_any_of);

#endif /* _update_200_response_any_of_H_ */

