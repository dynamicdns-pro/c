#ifndef updateip_403_response_TEST
#define updateip_403_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define updateip_403_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/updateip_403_response.h"
updateip_403_response_t* instantiate_updateip_403_response(int include_optional);



updateip_403_response_t* instantiate_updateip_403_response(int include_optional) {
  updateip_403_response_t* updateip_403_response = NULL;
  if (include_optional) {
    updateip_403_response = updateip_403_response_create(
      "0"
    );
  } else {
    updateip_403_response = updateip_403_response_create(
      "0"
    );
  }

  return updateip_403_response;
}


#ifdef updateip_403_response_MAIN

void test_updateip_403_response(int include_optional) {
    updateip_403_response_t* updateip_403_response_1 = instantiate_updateip_403_response(include_optional);

	cJSON* jsonupdateip_403_response_1 = updateip_403_response_convertToJSON(updateip_403_response_1);
	printf("updateip_403_response :\n%s\n", cJSON_Print(jsonupdateip_403_response_1));
	updateip_403_response_t* updateip_403_response_2 = updateip_403_response_parseFromJSON(jsonupdateip_403_response_1);
	cJSON* jsonupdateip_403_response_2 = updateip_403_response_convertToJSON(updateip_403_response_2);
	printf("repeating updateip_403_response:\n%s\n", cJSON_Print(jsonupdateip_403_response_2));
}

int main() {
  test_updateip_403_response(1);
  test_updateip_403_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // updateip_403_response_MAIN
#endif // updateip_403_response_TEST
