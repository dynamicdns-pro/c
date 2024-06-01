/*
 * updateip_200_response.h
 *
 * 
 */

#ifndef _updateip_200_response_H_
#define _updateip_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct updateip_200_response_t updateip_200_response_t;

#include "updateip_200_response_any_of.h"



typedef struct updateip_200_response_t {
    char *message; // string
    char *ip; // string

} updateip_200_response_t;

updateip_200_response_t *updateip_200_response_create(
    char *message,
    char *ip
);

void updateip_200_response_free(updateip_200_response_t *updateip_200_response);

updateip_200_response_t *updateip_200_response_parseFromJSON(cJSON *updateip_200_responseJSON);

cJSON *updateip_200_response_convertToJSON(updateip_200_response_t *updateip_200_response);

#endif /* _updateip_200_response_H_ */

