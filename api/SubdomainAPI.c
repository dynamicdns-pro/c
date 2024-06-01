#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "SubdomainAPI.h"

#define MAX_NUMBER_LENGTH 16
#define MAX_BUFFER_LENGTH 4096
#define intToStr(dst, src) \
    do {\
    char dst[256];\
    snprintf(dst, 256, "%ld", (long int)(src));\
}while(0)


update_200_response_t*
SubdomainAPI_update(apiClient_t *apiClient, char *subdomain, update_request_t *update_request)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{subdomain}/record")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{subdomain}/record");


    // Path Params
    long sizeOfPathParams_subdomain = strlen(subdomain)+3 + strlen("{ subdomain }");
    if(subdomain == NULL) {
        goto end;
    }
    char* localVarToReplace_subdomain = malloc(sizeOfPathParams_subdomain);
    sprintf(localVarToReplace_subdomain, "{%s}", "subdomain");

    localVarPath = strReplace(localVarPath, localVarToReplace_subdomain, subdomain);



    // Body Param
    cJSON *localVarSingleItemJSON_update_request = NULL;
    if (update_request != NULL)
    {
        //string
        localVarSingleItemJSON_update_request = update_request_convertToJSON(update_request);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_update_request);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","An error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 422) {
    //    printf("%s\n","");
    //}
    //nonprimitive not container
    cJSON *SubdomainAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    update_200_response_t *elementToReturn = update_200_response_parseFromJSON(SubdomainAPIlocalVarJSON);
    cJSON_Delete(SubdomainAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_subdomain);
    if (localVarSingleItemJSON_update_request) {
        cJSON_Delete(localVarSingleItemJSON_update_request);
        localVarSingleItemJSON_update_request = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

// update the ip address with the connecting ip address
//
updateip_200_response_t*
SubdomainAPI_updateip(apiClient_t *apiClient, char *subdomain, object_t *body)
{
    list_t    *localVarQueryParameters = NULL;
    list_t    *localVarHeaderParameters = NULL;
    list_t    *localVarFormParameters = NULL;
    list_t *localVarHeaderType = list_createList();
    list_t *localVarContentType = list_createList();
    char      *localVarBodyParameters = NULL;

    // create the path
    long sizeOfPath = strlen("/{subdomain}")+1;
    char *localVarPath = malloc(sizeOfPath);
    snprintf(localVarPath, sizeOfPath, "/{subdomain}");


    // Path Params
    long sizeOfPathParams_subdomain = strlen(subdomain)+3 + strlen("{ subdomain }");
    if(subdomain == NULL) {
        goto end;
    }
    char* localVarToReplace_subdomain = malloc(sizeOfPathParams_subdomain);
    sprintf(localVarToReplace_subdomain, "{%s}", "subdomain");

    localVarPath = strReplace(localVarPath, localVarToReplace_subdomain, subdomain);



    // Body Param
    cJSON *localVarSingleItemJSON_body = NULL;
    if (body != NULL)
    {
        //string
        localVarSingleItemJSON_body = object_convertToJSON(body);
        localVarBodyParameters = cJSON_Print(localVarSingleItemJSON_body);
    }
    list_addElement(localVarHeaderType,"application/json"); //produces
    list_addElement(localVarContentType,"application/json"); //consumes
    apiClient_invoke(apiClient,
                    localVarPath,
                    localVarQueryParameters,
                    localVarHeaderParameters,
                    localVarFormParameters,
                    localVarHeaderType,
                    localVarContentType,
                    localVarBodyParameters,
                    "POST");

    // uncomment below to debug the error response
    //if (apiClient->response_code == 200) {
    //    printf("%s\n","");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 400) {
    //    printf("%s\n","An error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 401) {
    //    printf("%s\n","");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 403) {
    //    printf("%s\n","An error");
    //}
    // uncomment below to debug the error response
    //if (apiClient->response_code == 404) {
    //    printf("%s\n","");
    //}
    //nonprimitive not container
    cJSON *SubdomainAPIlocalVarJSON = cJSON_Parse(apiClient->dataReceived);
    updateip_200_response_t *elementToReturn = updateip_200_response_parseFromJSON(SubdomainAPIlocalVarJSON);
    cJSON_Delete(SubdomainAPIlocalVarJSON);
    if(elementToReturn == NULL) {
        // return 0;
    }

    //return type
    if (apiClient->dataReceived) {
        free(apiClient->dataReceived);
        apiClient->dataReceived = NULL;
        apiClient->dataReceivedLen = 0;
    }
    
    
    
    list_freeList(localVarHeaderType);
    list_freeList(localVarContentType);
    free(localVarPath);
    free(localVarToReplace_subdomain);
    if (localVarSingleItemJSON_body) {
        cJSON_Delete(localVarSingleItemJSON_body);
        localVarSingleItemJSON_body = NULL;
    }
    free(localVarBodyParameters);
    return elementToReturn;
end:
    free(localVarPath);
    return NULL;

}

