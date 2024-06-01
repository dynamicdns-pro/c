#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "update_200_response_any_of.h"



update_200_response_any_of_t *update_200_response_any_of_create(
    char *message
    ) {
    update_200_response_any_of_t *update_200_response_any_of_local_var = malloc(sizeof(update_200_response_any_of_t));
    if (!update_200_response_any_of_local_var) {
        return NULL;
    }
    update_200_response_any_of_local_var->message = message;

    return update_200_response_any_of_local_var;
}


void update_200_response_any_of_free(update_200_response_any_of_t *update_200_response_any_of) {
    if(NULL == update_200_response_any_of){
        return ;
    }
    listEntry_t *listEntry;
    if (update_200_response_any_of->message) {
        free(update_200_response_any_of->message);
        update_200_response_any_of->message = NULL;
    }
    free(update_200_response_any_of);
}

cJSON *update_200_response_any_of_convertToJSON(update_200_response_any_of_t *update_200_response_any_of) {
    cJSON *item = cJSON_CreateObject();

    // update_200_response_any_of->message
    if (!update_200_response_any_of->message) {
        goto fail;
    }
    if(cJSON_AddStringToObject(item, "message", update_200_response_any_of->message) == NULL) {
    goto fail; //String
    }

    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

update_200_response_any_of_t *update_200_response_any_of_parseFromJSON(cJSON *update_200_response_any_ofJSON){

    update_200_response_any_of_t *update_200_response_any_of_local_var = NULL;

    // update_200_response_any_of->message
    cJSON *message = cJSON_GetObjectItemCaseSensitive(update_200_response_any_ofJSON, "message");
    if (!message) {
        goto end;
    }

    
    if(!cJSON_IsString(message))
    {
    goto end; //String
    }


    update_200_response_any_of_local_var = update_200_response_any_of_create (
        strdup(message->valuestring)
        );

    return update_200_response_any_of_local_var;
end:
    return NULL;

}
