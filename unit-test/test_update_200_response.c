#ifndef update_200_response_TEST
#define update_200_response_TEST

// the following is to include only the main from the first c file
#ifndef TEST_MAIN
#define TEST_MAIN
#define update_200_response_MAIN
#endif // TEST_MAIN

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>
#include "../external/cJSON.h"

#include "../model/update_200_response.h"
update_200_response_t* instantiate_update_200_response(int include_optional);



update_200_response_t* instantiate_update_200_response(int include_optional) {
  update_200_response_t* update_200_response = NULL;
  if (include_optional) {
    update_200_response = update_200_response_create(
      "Record updated"
    );
  } else {
    update_200_response = update_200_response_create(
      "Record updated"
    );
  }

  return update_200_response;
}


#ifdef update_200_response_MAIN

void test_update_200_response(int include_optional) {
    update_200_response_t* update_200_response_1 = instantiate_update_200_response(include_optional);

	cJSON* jsonupdate_200_response_1 = update_200_response_convertToJSON(update_200_response_1);
	printf("update_200_response :\n%s\n", cJSON_Print(jsonupdate_200_response_1));
	update_200_response_t* update_200_response_2 = update_200_response_parseFromJSON(jsonupdate_200_response_1);
	cJSON* jsonupdate_200_response_2 = update_200_response_convertToJSON(update_200_response_2);
	printf("repeating update_200_response:\n%s\n", cJSON_Print(jsonupdate_200_response_2));
}

int main() {
  test_update_200_response(1);
  test_update_200_response(0);

  printf("Hello world \n");
  return 0;
}

#endif // update_200_response_MAIN
#endif // update_200_response_TEST
