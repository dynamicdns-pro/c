#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "updateip_403_response.h"



updateip_403_response_t *updateip_403_response_create(
    char *message
    ) {
    updateip_403_response_t *updateip_403_response_local_var = malloc(sizeof(updateip_403_response_t));
    if (!updateip_403_response_local_var) {
        return NULL;
    }
    updateip_403_response_local_var->message = message;

    return updateip_403_response_local_var;
}


void updateip_403_response_free(updateip_403_response_t *updateip_403_response) {
    if(NULL == updateip_403_response){
        return ;
    }
    listEntry_t *listEntry;
    if (updateip_403_response->message) {
        free(updateip_403_response->message);
        updateip_403_response->message = NULL;
    }
    free(updateip_403_response);
}

cJSON *updateip_403_response_convertToJSON(updateip_403_response_t *updateip_403_response) {
    cJSON *item = cJSON_CreateObject();

    // updateip_403_response->message
    if (!updateip_403_response->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", updateip_403_response->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

updateip_403_response_t *updateip_403_response_parseFromJSON(cJSON *updateip_403_responseJSON){

    updateip_403_response_t *updateip_403_response_local_var = NULL;

    // updateip_403_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(updateip_403_responseJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    updateip_403_response_local_var = updateip_403_response_create (
        strdup(message->valuestring)
        );

    return updateip_403_response_local_var;
end:
    return NULL;

}
