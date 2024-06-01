#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "deleteip_200_response.h"



deleteip_200_response_t *deleteip_200_response_create(
    ) {
    deleteip_200_response_t *deleteip_200_response_local_var = malloc(sizeof(deleteip_200_response_t));
    if (!deleteip_200_response_local_var) {
        return NULL;
    }

    return deleteip_200_response_local_var;
}


void deleteip_200_response_free(deleteip_200_response_t *deleteip_200_response) {
    if(NULL == deleteip_200_response){
        return ;
    }
    listEntry_t *listEntry;
    free(deleteip_200_response);
}

cJSON *deleteip_200_response_convertToJSON(deleteip_200_response_t *deleteip_200_response) {
    cJSON *item = cJSON_CreateObject();
    return item;
fail:
    if (item) {
        cJSON_Delete(item);
    }
    return NULL;
}

deleteip_200_response_t *deleteip_200_response_parseFromJSON(cJSON *deleteip_200_responseJSON){

    deleteip_200_response_t *deleteip_200_response_local_var = NULL;


    deleteip_200_response_local_var = deleteip_200_response_create (
        );

    return deleteip_200_response_local_var;
end:
    return NULL;

}
