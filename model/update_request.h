/*
 * update_request.h
 *
 * 
 */

#ifndef _update_request_H_
#define _update_request_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct update_request_t update_request_t;




typedef struct update_request_t {
    char *ipv4; // string
    char *ipv6; // string

} update_request_t;

update_request_t *update_request_create(
    char *ipv4,
    char *ipv6
);

void update_request_free(update_request_t *update_request);

update_request_t *update_request_parseFromJSON(cJSON *update_requestJSON);

cJSON *update_request_convertToJSON(update_request_t *update_request);

#endif /* _update_request_H_ */

