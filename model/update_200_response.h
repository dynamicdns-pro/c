/*
 * update_200_response.h
 *
 * 
 */

#ifndef _update_200_response_H_
#define _update_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_200_response_t update_200_response_t;

#include "update_200_response_any_of.h"



typedef struct update_200_response_t {
    char *message; // string

} update_200_response_t;

update_200_response_t *update_200_response_create(
    char *message
);

void update_200_response_free(update_200_response_t *update_200_response);

update_200_response_t *update_200_response_parseFromJSON(cJSON *update_200_responseJSON);

cJSON *update_200_response_convertToJSON(update_200_response_t *update_200_response);

#endif /* _update_200_response_H_ */

