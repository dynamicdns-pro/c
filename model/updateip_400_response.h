/*
 * updateip_400_response.h
 *
 * 
 */

#ifndef _updateip_400_response_H_
#define _updateip_400_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct updateip_400_response_t updateip_400_response_t;




typedef struct updateip_400_response_t {
    char *message; // string

} updateip_400_response_t;

updateip_400_response_t *updateip_400_response_create(
    char *message
);

void updateip_400_response_free(updateip_400_response_t *updateip_400_response);

updateip_400_response_t *updateip_400_response_parseFromJSON(cJSON *updateip_400_responseJSON);

cJSON *updateip_400_response_convertToJSON(updateip_400_response_t *updateip_400_response);

#endif /* _updateip_400_response_H_ */

