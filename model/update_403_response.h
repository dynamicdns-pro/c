/*
 * update_403_response.h
 *
 * 
 */

#ifndef _update_403_response_H_
#define _update_403_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_403_response_t update_403_response_t;

#include "updateip_403_response.h"



typedef struct update_403_response_t {
    char *message; // string

} update_403_response_t;

update_403_response_t *update_403_response_create(
    char *message
);

void update_403_response_free(update_403_response_t *update_403_response);

update_403_response_t *update_403_response_parseFromJSON(cJSON *update_403_responseJSON);

cJSON *update_403_response_convertToJSON(update_403_response_t *update_403_response);

#endif /* _update_403_response_H_ */

