# SubdomainAPI

All URIs are relative to *https://dynamicdns.pro/api*

Method | HTTP request | Description
------------- | ------------- | -------------
[**SubdomainAPI_update**](SubdomainAPI.md#SubdomainAPI_update) | **POST** /{subdomain}/record | 
[**SubdomainAPI_updateip**](SubdomainAPI.md#SubdomainAPI_updateip) | **POST** /{subdomain} | update the ip address with the connecting ip address


# **SubdomainAPI_update**
```c
update_200_response_t* SubdomainAPI_update(apiClient_t *apiClient, char *subdomain, update_request_t *update_request);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subdomain** | **char \*** |  | 
**update_request** | **[update_request_t](update_request.md) \*** |  | [optional] 

### Return type

[update_200_response_t](update_200_response.md) *


### Authorization

[http](../README.md#http)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

# **SubdomainAPI_updateip**
```c
// update the ip address with the connecting ip address
//
updateip_200_response_t* SubdomainAPI_updateip(apiClient_t *apiClient, char *subdomain, object_t *body);
```

### Parameters
Name | Type | Description  | Notes
------------- | ------------- | ------------- | -------------
**apiClient** | **apiClient_t \*** | context containing the client configuration |
**subdomain** | **char \*** |  | 
**body** | **[object_t](object.md) \*** |  | [optional] 

### Return type

[updateip_200_response_t](updateip_200_response.md) *


### Authorization

[http](../README.md#http)

### HTTP request headers

 - **Content-Type**: application/json
 - **Accept**: application/json

[[Back to top]](#) [[Back to API list]](../README.md#documentation-for-api-endpoints) [[Back to Model list]](../README.md#documentation-for-models) [[Back to README]](../README.md)

