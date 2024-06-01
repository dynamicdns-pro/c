#include <stdlib.h>
#include <stdio.h>
#include "../include/apiClient.h"
#include "../include/list.h"
#include "../external/cJSON.h"
#include "../include/keyValuePair.h"
#include "../include/binary.h"
#include "../model/object.h"
#include "../model/update_200_response.h"
#include "../model/update_400_response.h"
#include "../model/update_403_response.h"
#include "../model/update_request.h"
#include "../model/updateip_200_response.h"
#include "../model/updateip_400_response.h"
#include "../model/updateip_403_response.h"


update_200_response_t*
SubdomainAPI_update(apiClient_t *apiClient, char *subdomain, update_request_t *update_request);


// update the ip address with the connecting ip address
//
updateip_200_response_t*
SubdomainAPI_updateip(apiClient_t *apiClient, char *subdomain, object_t *body);


