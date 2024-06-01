#ifndef deleteip_200_response_TEST
#define deleteip_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define deleteip_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/deleteip_200_response.h"
deleteip_200_response_t* instantiate_deleteip_200_response(int include_optional);



deleteip_200_response_t* instantiate_deleteip_200_response(int include_optional) {
  deleteip_200_response_t* deleteip_200_response = NULL;
  if (include_optional) {
    deleteip_200_response = deleteip_200_response_create(
    );
  } else {
    deleteip_200_response = deleteip_200_response_create(
    );
  }

  return deleteip_200_response;
}


#ifdef deleteip_200_response_MAIN

void test_deleteip_200_response(int include_optional) {
    deleteip_200_response_t* deleteip_200_response_1 = instantiate_deleteip_200_response(include_optional);

	cJSON* jsondeleteip_200_response_1 = deleteip_200_response_convertToJSON(deleteip_200_response_1);
	printf("deleteip_200_response :\n%s\n", cJSON_Print(jsondeleteip_200_response_1));
	deleteip_200_response_t* deleteip_200_response_2 = deleteip_200_response_parseFromJSON(jsondeleteip_200_response_1);
	cJSON* jsondeleteip_200_response_2 = deleteip_200_response_convertToJSON(deleteip_200_response_2);
	printf("repeating deleteip_200_response:\n%s\n", cJSON_Print(jsondeleteip_200_response_2));
}

int main() {
  test_deleteip_200_response(1);
  test_deleteip_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // deleteip_200_response_MAIN
#endif // deleteip_200_response_TEST
