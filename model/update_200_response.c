#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_200_response.h"



update_200_response_t *update_200_response_create(
    char *message
    ) {
    update_200_response_t *update_200_response_local_var = malloc(sizeof(update_200_response_t));
    if (!update_200_response_local_var) {
        return NULL;
    }
    update_200_response_local_var->message = message;

    return update_200_response_local_var;
}


void update_200_response_free(update_200_response_t *update_200_response) {
    if(NULL == update_200_response){
        return ;
    }
    listEntry_t *listEntry;
    if (update_200_response->message) {
        free(update_200_response->message);
        update_200_response->message = NULL;
    }
    free(update_200_response);
}

cJSON *update_200_response_convertToJSON(update_200_response_t *update_200_response) {
    cJSON *item = cJSON_CreateObject();

    // update_200_response->message
    if (!update_200_response->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", update_200_response->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_200_response_t *update_200_response_parseFromJSON(cJSON *update_200_responseJSON){

    update_200_response_t *update_200_response_local_var = NULL;

    // update_200_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(update_200_responseJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    update_200_response_local_var = update_200_response_create (
        strdup(message->valuestring)
        );

    return update_200_response_local_var;
end:
    return NULL;

}
