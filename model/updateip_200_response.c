#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "updateip_200_response.h"



updateip_200_response_t *updateip_200_response_create(
    char *message,
    char *ip
    ) {
    updateip_200_response_t *updateip_200_response_local_var = malloc(sizeof(updateip_200_response_t));
    if (!updateip_200_response_local_var) {
        return NULL;
    }
    updateip_200_response_local_var->message = message;
    updateip_200_response_local_var->ip = ip;

    return updateip_200_response_local_var;
}


void updateip_200_response_free(updateip_200_response_t *updateip_200_response) {
    if(NULL == updateip_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (updateip_200_response->message) {
        free(updateip_200_response->message);
        updateip_200_response->message = NULL;
    }
    if (updateip_200_response->ip) {
        free(updateip_200_response->ip);
        updateip_200_response->ip = NULL;
    }
    free(updateip_200_response);
}

cJSON *updateip_200_response_convertToJSON(updateip_200_response_t *updateip_200_response) {
    cJSON *item = cJSON_CreateObject();

    // updateip_200_response->message
    if (!updateip_200_response->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", updateip_200_response->message) == NULL) {
    goto fail; //String
    }


    // updateip_200_response->ip
    if (!updateip_200_response->ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ip", updateip_200_response->ip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

updateip_200_response_t *updateip_200_response_parseFromJSON(cJSON *updateip_200_responseJSON){

    updateip_200_response_t *updateip_200_response_local_var = NULL;

    // updateip_200_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(updateip_200_responseJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }

    // updateip_200_response->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(updateip_200_responseJSON, "ip");
    if (!ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }


    updateip_200_response_local_var = updateip_200_response_create (
        strdup(message->valuestring),
        strdup(ip->valuestring)
        );

    return updateip_200_response_local_var;
end:
    return NULL;

}
