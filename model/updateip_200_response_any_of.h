/*
 * updateip_200_response_any_of.h
 *
 * 
 */

#ifndef _updateip_200_response_any_of_H_
#define _updateip_200_response_any_of_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct updateip_200_response_any_of_t updateip_200_response_any_of_t;




typedef struct updateip_200_response_any_of_t {
    char *message; // string
    char *ip; // string

} updateip_200_response_any_of_t;

updateip_200_response_any_of_t *updateip_200_response_any_of_create(
    char *message,
    char *ip
);

void updateip_200_response_any_of_free(updateip_200_response_any_of_t *updateip_200_response_any_of);

updateip_200_response_any_of_t *updateip_200_response_any_of_parseFromJSON(cJSON *updateip_200_response_any_ofJSON);

cJSON *updateip_200_response_any_of_convertToJSON(updateip_200_response_any_of_t *updateip_200_response_any_of);

#endif /* _updateip_200_response_any_of_H_ */

