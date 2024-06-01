#ifndef updateip_400_response_TEST
#define updateip_400_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define updateip_400_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/updateip_400_response.h"
updateip_400_response_t* instantiate_updateip_400_response(int include_optional);



updateip_400_response_t* instantiate_updateip_400_response(int include_optional) {
  updateip_400_response_t* updateip_400_response = NULL;
  if (include_optional) {
    updateip_400_response = updateip_400_response_create(
      "Invalid ip address"
    );
  } else {
    updateip_400_response = updateip_400_response_create(
      "Invalid ip address"
    );
  }

  return updateip_400_response;
}


#ifdef updateip_400_response_MAIN

void test_updateip_400_response(int include_optional) {
    updateip_400_response_t* updateip_400_response_1 = instantiate_updateip_400_response(include_optional);

	cJSON* jsonupdateip_400_response_1 = updateip_400_response_convertToJSON(updateip_400_response_1);
	printf("updateip_400_response :\n%s\n", cJSON_Print(jsonupdateip_400_response_1));
	updateip_400_response_t* updateip_400_response_2 = updateip_400_response_parseFromJSON(jsonupdateip_400_response_1);
	cJSON* jsonupdateip_400_response_2 = updateip_400_response_convertToJSON(updateip_400_response_2);
	printf("repeating updateip_400_response:\n%s\n", cJSON_Print(jsonupdateip_400_response_2));
}

int main() {
  test_updateip_400_response(1);
  test_updateip_400_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // updateip_400_response_MAIN
#endif // updateip_400_response_TEST
