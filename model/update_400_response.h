/*
 * update_400_response.h
 *
 * 
 */

#ifndef _update_400_response_H_
#define _update_400_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_400_response_t update_400_response_t;




typedef struct update_400_response_t {
    char *message; // string

} update_400_response_t;

update_400_response_t *update_400_response_create(
    char *message
);

void update_400_response_free(update_400_response_t *update_400_response);

update_400_response_t *update_400_response_parseFromJSON(cJSON *update_400_responseJSON);

cJSON *update_400_response_convertToJSON(update_400_response_t *update_400_response);

#endif /* _update_400_response_H_ */

