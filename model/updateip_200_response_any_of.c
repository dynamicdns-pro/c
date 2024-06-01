#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "updateip_200_response_any_of.h"



updateip_200_response_any_of_t *updateip_200_response_any_of_create(
    char *message,
    char *ip
    ) {
    updateip_200_response_any_of_t *updateip_200_response_any_of_local_var = malloc(sizeof(updateip_200_response_any_of_t));
    if (!updateip_200_response_any_of_local_var) {
        return NULL;
    }
    updateip_200_response_any_of_local_var->message = message;
    updateip_200_response_any_of_local_var->ip = ip;

    return updateip_200_response_any_of_local_var;
}


void updateip_200_response_any_of_free(updateip_200_response_any_of_t *updateip_200_response_any_of) {
    if(NULL == updateip_200_response_any_of){
        return ;
    }
    listEntry_t *listEntry;
    if (updateip_200_response_any_of->message) {
        free(updateip_200_response_any_of->message);
        updateip_200_response_any_of->message = NULL;
    }
    if (updateip_200_response_any_of->ip) {
        free(updateip_200_response_any_of->ip);
        updateip_200_response_any_of->ip = NULL;
    }
    free(updateip_200_response_any_of);
}

cJSON *updateip_200_response_any_of_convertToJSON(updateip_200_response_any_of_t *updateip_200_response_any_of) {
    cJSON *item = cJSON_CreateObject();

    // updateip_200_response_any_of->message
    if (!updateip_200_response_any_of->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", updateip_200_response_any_of->message) == NULL) {
    goto fail; //String
    }


    // updateip_200_response_any_of->ip
    if (!updateip_200_response_any_of->ip) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "ip", updateip_200_response_any_of->ip) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

updateip_200_response_any_of_t *updateip_200_response_any_of_parseFromJSON(cJSON *updateip_200_response_any_ofJSON){

    updateip_200_response_any_of_t *updateip_200_response_any_of_local_var = NULL;

    // updateip_200_response_any_of->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(updateip_200_response_any_ofJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }

    // updateip_200_response_any_of->ip
    cJSON *ip = cJSON_GetObjectItemCaseSensitive(updateip_200_response_any_ofJSON, "ip");
    if (!ip) {
        goto end;
    }

    
    if(!cJSON_IsString(ip))
    {
    goto end; //String
    }


    updateip_200_response_any_of_local_var = updateip_200_response_any_of_create (
        strdup(message->valuestring),
        strdup(ip->valuestring)
        );

    return updateip_200_response_any_of_local_var;
end:
    return NULL;

}
