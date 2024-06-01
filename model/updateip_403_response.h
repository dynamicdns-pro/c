/*
 * updateip_403_response.h
 *
 * 
 */

#ifndef _updateip_403_response_H_
#define _updateip_403_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct updateip_403_response_t updateip_403_response_t;




typedef struct updateip_403_response_t {
    char *message; // string

} updateip_403_response_t;

updateip_403_response_t *updateip_403_response_create(
    char *message
);

void updateip_403_response_free(updateip_403_response_t *updateip_403_response);

updateip_403_response_t *updateip_403_response_parseFromJSON(cJSON *updateip_403_responseJSON);

cJSON *updateip_403_response_convertToJSON(updateip_403_response_t *updateip_403_response);

#endif /* _updateip_403_response_H_ */

