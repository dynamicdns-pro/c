#ifndef updateip_200_response_any_of_TEST
#define updateip_200_response_any_of_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define updateip_200_response_any_of_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/updateip_200_response_any_of.h"
updateip_200_response_any_of_t* instantiate_updateip_200_response_any_of(int include_optional);



updateip_200_response_any_of_t* instantiate_updateip_200_response_any_of(int include_optional) {
  updateip_200_response_any_of_t* updateip_200_response_any_of = NULL;
  if (include_optional) {
    updateip_200_response_any_of = updateip_200_response_any_of_create(
      "Record updated"
    );
  } else {
    updateip_200_response_any_of = updateip_200_response_any_of_create(
      "Record updated"
    );
  }

  return updateip_200_response_any_of;
}


#ifdef updateip_200_response_any_of_MAIN

void test_updateip_200_response_any_of(int include_optional) {
    updateip_200_response_any_of_t* updateip_200_response_any_of_1 = instantiate_updateip_200_response_any_of(include_optional);

	cJSON* jsonupdateip_200_response_any_of_1 = updateip_200_response_any_of_convertToJSON(updateip_200_response_any_of_1);
	printf("updateip_200_response_any_of :\n%s\n", cJSON_Print(jsonupdateip_200_response_any_of_1));
	updateip_200_response_any_of_t* updateip_200_response_any_of_2 = updateip_200_response_any_of_parseFromJSON(jsonupdateip_200_response_any_of_1);
	cJSON* jsonupdateip_200_response_any_of_2 = updateip_200_response_any_of_convertToJSON(updateip_200_response_any_of_2);
	printf("repeating updateip_200_response_any_of:\n%s\n", cJSON_Print(jsonupdateip_200_response_any_of_2));
}

int main() {
  test_updateip_200_response_any_of(1);
  test_updateip_200_response_any_of(0);

  printf("Hello world \n");
  return 0;
}

#endif // updateip_200_response_any_of_MAIN
#endif // updateip_200_response_any_of_TEST
