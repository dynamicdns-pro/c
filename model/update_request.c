#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_request.h"



update_request_t *update_request_create(
    char *ipv4,
    char *ipv6
    ) {
    update_request_t *update_request_local_var = malloc(sizeof(update_request_t));
    if (!update_request_local_var) {
        return NULL;
    }
    update_request_local_var->ipv4 = ipv4;
    update_request_local_var->ipv6 = ipv6;

    return update_request_local_var;
}


void update_request_free(update_request_t *update_request) {
    if(NULL == update_request){
        return ;
    }
    listEntry_t *listEntry;
    if (update_request->ipv4) {
        free(update_request->ipv4);
        update_request->ipv4 = NULL;
    }
    if (update_request->ipv6) {
        free(update_request->ipv6);
        update_request->ipv6 = NULL;
    }
    free(update_request);
}

cJSON *update_request_convertToJSON(update_request_t *update_request) {
    cJSON *item = cJSON_CreateObject();

    // update_request->ipv4
    if(update_request->ipv4) {
    if(cJSON_AddStringToObject(item, "ipv4", update_request->ipv4) == NULL) {
    goto fail; //String
    }
    }


    // update_request->ipv6
    if(update_request->ipv6) {
    if(cJSON_AddStringToObject(item, "ipv6", update_request->ipv6) == NULL) {
    goto fail; //String
    }
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_request_t *update_request_parseFromJSON(cJSON *update_requestJSON){

    update_request_t *update_request_local_var = NULL;

    // update_request->ipv4
    cJSON *ipv4 = cJSON_GetObjectItemCaseSensitive(update_requestJSON, "ipv4");
    if (ipv4) { 
    if(!cJSON_IsString(ipv4) && !cJSON_IsNull(ipv4))
    {
    goto end; //String
    }
    }

    // update_request->ipv6
    cJSON *ipv6 = cJSON_GetObjectItemCaseSensitive(update_requestJSON, "ipv6");
    if (ipv6) { 
    if(!cJSON_IsString(ipv6) && !cJSON_IsNull(ipv6))
    {
    goto end; //String
    }
    }


    update_request_local_var = update_request_create (
        ipv4 && !cJSON_IsNull(ipv4) ? strdup(ipv4->valuestring) : NULL,
        ipv6 && !cJSON_IsNull(ipv6) ? strdup(ipv6->valuestring) : NULL
        );

    return update_request_local_var;
end:
    return NULL;

}
