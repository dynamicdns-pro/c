#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_403_response.h"



update_403_response_t *update_403_response_create(
    char *message
    ) {
    update_403_response_t *update_403_response_local_var = malloc(sizeof(update_403_response_t));
    if (!update_403_response_local_var) {
        return NULL;
    }
    update_403_response_local_var->message = message;

    return update_403_response_local_var;
}


void update_403_response_free(update_403_response_t *update_403_response) {
    if(NULL == update_403_response){
        return ;
    }
    listEntry_t *listEntry;
    if (update_403_response->message) {
        free(update_403_response->message);
        update_403_response->message = NULL;
    }
    free(update_403_response);
}

cJSON *update_403_response_convertToJSON(update_403_response_t *update_403_response) {
    cJSON *item = cJSON_CreateObject();

    // update_403_response->message
    if (!update_403_response->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", update_403_response->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_403_response_t *update_403_response_parseFromJSON(cJSON *update_403_responseJSON){

    update_403_response_t *update_403_response_local_var = NULL;

    // update_403_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(update_403_responseJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    update_403_response_local_var = update_403_response_create (
        strdup(message->valuestring)
        );

    return update_403_response_local_var;
end:
    return NULL;

}
