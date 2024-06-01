#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "updateip_400_response.h"



updateip_400_response_t *updateip_400_response_create(
    char *message
    ) {
    updateip_400_response_t *updateip_400_response_local_var = malloc(sizeof(updateip_400_response_t));
    if (!updateip_400_response_local_var) {
        return NULL;
    }
    updateip_400_response_local_var->message = message;

    return updateip_400_response_local_var;
}


void updateip_400_response_free(updateip_400_response_t *updateip_400_response) {
    if(NULL == updateip_400_response){
        return ;
    }
    listEntry_t *listEntry;
    if (updateip_400_response->message) {
        free(updateip_400_response->message);
        updateip_400_response->message = NULL;
    }
    free(updateip_400_response);
}

cJSON *updateip_400_response_convertToJSON(updateip_400_response_t *updateip_400_response) {
    cJSON *item = cJSON_CreateObject();

    // updateip_400_response->message
    if (!updateip_400_response->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", updateip_400_response->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

updateip_400_response_t *updateip_400_response_parseFromJSON(cJSON *updateip_400_responseJSON){

    updateip_400_response_t *updateip_400_response_local_var = NULL;

    // updateip_400_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(updateip_400_responseJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    updateip_400_response_local_var = updateip_400_response_create (
        strdup(message->valuestring)
        );

    return updateip_400_response_local_var;
end:
    return NULL;

}
