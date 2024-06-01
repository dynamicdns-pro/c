#ifndef updateip_200_response_TEST
#define updateip_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define updateip_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/updateip_200_response.h"
updateip_200_response_t* instantiate_updateip_200_response(int include_optional);



updateip_200_response_t* instantiate_updateip_200_response(int include_optional) {
  updateip_200_response_t* updateip_200_response = NULL;
  if (include_optional) {
    updateip_200_response = updateip_200_response_create(
      "Record updated"
    );
  } else {
    updateip_200_response = updateip_200_response_create(
      "Record updated"
    );
  }

  return updateip_200_response;
}


#ifdef updateip_200_response_MAIN

void test_updateip_200_response(int include_optional) {
    updateip_200_response_t* updateip_200_response_1 = instantiate_updateip_200_response(include_optional);

	cJSON* jsonupdateip_200_response_1 = updateip_200_response_convertToJSON(updateip_200_response_1);
	printf("updateip_200_response :\n%s\n", cJSON_Print(jsonupdateip_200_response_1));
	updateip_200_response_t* updateip_200_response_2 = updateip_200_response_parseFromJSON(jsonupdateip_200_response_1);
	cJSON* jsonupdateip_200_response_2 = updateip_200_response_convertToJSON(updateip_200_response_2);
	printf("repeating updateip_200_response:\n%s\n", cJSON_Print(jsonupdateip_200_response_2));
}

int main() {
  test_updateip_200_response(1);
  test_updateip_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // updateip_200_response_MAIN
#endif // updateip_200_response_TEST
