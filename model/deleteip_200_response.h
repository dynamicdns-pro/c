/*
 * deleteip_200_response.h
 *
 * 
 */

#ifndef _deleteip_200_response_H_
#define _deleteip_200_response_H_

#include <string.h>
#include "../external/cJSON.h"
#include "../include/list.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"

typedef struct deleteip_200_response_t deleteip_200_response_t;




typedef struct deleteip_200_response_t {

} deleteip_200_response_t;

deleteip_200_response_t *deleteip_200_response_create(
);

void deleteip_200_response_free(deleteip_200_response_t *deleteip_200_response);

deleteip_200_response_t *deleteip_200_response_parseFromJSON(cJSON *deleteip_200_responseJSON);

cJSON *deleteip_200_response_convertToJSON(deleteip_200_response_t *deleteip_200_response);

#endif /* _deleteip_200_response_H_ */

