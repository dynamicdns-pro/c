#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_400_response.h"



update_400_response_t *update_400_response_create(
    char *message
    ) {
    update_400_response_t *update_400_response_local_var = malloc(sizeof(update_400_response_t));
    if (!update_400_response_local_var) {
        return NULL;
    }
    update_400_response_local_var->message = message;

    return update_400_response_local_var;
}


void update_400_response_free(update_400_response_t *update_400_response) {
    if(NULL == update_400_response){
        return ;
    }
    listEntry_t *listEntry;
    if (update_400_response->message) {
        free(update_400_response->message);
        update_400_response->message = NULL;
    }
    free(update_400_response);
}

cJSON *update_400_response_convertToJSON(update_400_response_t *update_400_response) {
    cJSON *item = cJSON_CreateObject();

    // update_400_response->message
    if (!update_400_response->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", update_400_response->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_400_response_t *update_400_response_parseFromJSON(cJSON *update_400_responseJSON){

    update_400_response_t *update_400_response_local_var = NULL;

    // update_400_response->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(update_400_responseJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    update_400_response_local_var = update_400_response_create (
        strdup(message->valuestring)
        );

    return update_400_response_local_var;
end:
    return NULL;

}
